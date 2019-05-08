//
//  main.swift
//  HKAlfredHelper
//
//  Created by Guindon, Mathieu on 2019-04-15.
//  Copyright © 2019 metameta. All rights reserved.
//

import Foundation
import AppKit
import HomeKit

enum HKCommand {
    case list
    case execute(String) //scene or accesory uuid
    case none
}

enum HKPrefix : Character {
    case scene = "S"
    case accessorie = "A"
    case none = "!"
}

let app = NSApplication.shared
let supportedServices = [HMServiceTypeLightbulb, HMServiceTypeFaucet, HMServiceTypeGarageDoorOpener, HMServiceTypeLockMechanism, HMServiceTypeOutlet, HMServiceTypeSpeaker, HMServiceTypeSwitch, HMServiceTypeWindow, HMServiceTypeWindowCovering, HMServiceTypeStatefulProgrammableSwitch, HMServiceTypeStatelessProgrammableSwitch]

let serviceTypeNames = [HMServiceTypeLightbulb: "HMServiceTypeLightbulb",
                        HMServiceTypeFaucet: "HMServiceTypeFaucet",
                        HMServiceTypeGarageDoorOpener: "HMServiceTypeGarageDoorOpener",
                        HMServiceTypeLockMechanism: "HMServiceTypeLockMechanism",
                        HMServiceTypeOutlet: "HMServiceTypeOutlet",
                        HMServiceTypeSpeaker: "HMServiceTypeSpeaker",
                        HMServiceTypeSwitch: "HMServiceTypeSwitch",
                        HMServiceTypeWindow: "HMServiceTypeWindow",
                        HMServiceTypeWindowCovering: "HMServiceTypeWindowCovering",
                        HMServiceTypeStatefulProgrammableSwitch: "HMServiceTypeSwitch",
                        HMServiceTypeStatelessProgrammableSwitch: "HMServiceTypeSwitch"]

class AppDelegate: NSObject, NSApplicationDelegate {
    
    var command = HKCommand.none
    var commandParamater = ""
    let homeManager = HMHomeManager()
    
    func applicationDidFinishLaunching(_ aNotification: Notification) {
        // Insert code here to initialize your application
        homeManager.delegate = self
        
        if CommandLine.arguments.count < 2 {
            print("invalid argument")
            app.terminate(self)
        }
        
        let argument = CommandLine.arguments[1]
        switch argument {
            case "list":
                self.command = HKCommand.list
            case "execute":
                self.command = HKCommand.execute(CommandLine.arguments[2])
            default:
                print("invalid argument")
        }
    }
    
    func applicationWillTerminate(_ aNotification: Notification) {
        // Insert code here to tear down your application
    }
}

//helper
extension AppDelegate {
    func supportedCharacteristic(characterisic: HMCharacteristic) -> Bool  {
        let metadata = characterisic.metadata
        let properties = characterisic.properties
        let charType = characterisic.characteristicType
        
        let typeSupported = (charType.contains(HMCharacteristicTypeBrightness)) || (charType.contains(HMCharacteristicTypeCurrentLightLevel)) ||
        (charType.contains(HMCharacteristicTypePowerState)) || (charType.contains(HMCharacteristicTypeTargetFanState)) ||
        (charType.contains(HMCharacteristicTypeTargetDoorState)) || (charType.contains(HMCharacteristicTypeTargetLockMechanismState)) ||
        (charType.contains(HMCharacteristicTypeTargetPosition))
        
        return typeSupported && ((metadata?.format ?? HMCharacteristicMetadataFormatString) != HMCharacteristicMetadataFormatString) && (properties.contains(HMCharacteristicPropertyWritable))
    }
}

extension AppDelegate {
    
    func list() {
        let res = Response()
        let home = homeManager.primaryHome
        
        let actions = (home?.actionSets) ?? Array<HMActionSet>()
        for action in actions {
            var item = Item(title: action.name, subtitle: "scene",
                            arg: .simple([HKPrefix.scene.rawValue] + action.uniqueIdentifier.uuidString))
            item.icon = Icon(path: "scene.png")
            res.add(item: item)
        }
        
        let services = home?.servicesWithTypes(supportedServices) ?? []
        
        for service in services {
            
            //get the first supported characteristic
            for characteristic in service.characteristics {
                if supportedCharacteristic(characterisic: characteristic) {
                    
                    var item = Item(title: service.name, subtitle: service.accessory?.room?.name ?? "",
                                    arg: .simple([HKPrefix.accessorie.rawValue] + service.uniqueIdentifier.uuidString + "_" + characteristic.uniqueIdentifier.uuidString))
                    item.icon = Icon(path: (serviceTypeNames[service.serviceType] ?? "default") + ".png")
                    res.add(item: item)
                    break
                }
            }
        }
        
        let json = res.toJSON()
        print(json)

        app.terminate(self)
    }
    
    
    func execute(UUID : String) {
        //parse to see if it's a scene or accessorie
        switch HKPrefix(rawValue: UUID.first!) ?? HKPrefix.none {
        case HKPrefix.scene:
            executeScene(UUID: String(UUID.dropFirst()))
        case HKPrefix.accessorie:
            toggleAccessorie(UUID: String(UUID.dropFirst()))
        case HKPrefix.none:
            print("Invalid item prefix")
        }
    }
    
    func executeScene(UUID: String) {
        let home = homeManager.primaryHome
        
        let actions = (home?.actionSets) ?? Array<HMActionSet>()
        let scene = actions.first(where:  {$0.uniqueIdentifier.uuidString == UUID})
        home?.executeActionSet(scene!) {
            error in
            if error != nil {
                print("Failed executing action set, error:\(String(describing: error))")
            } else {
                print(scene!.name + " completed")
            }
            
            app.terminate(self)
        }
    }
    
    func toggleAccessorie(UUID: String) {
        let home = homeManager.primaryHome

        let substrs = UUID.split(separator: "_")
        if substrs.count != 2 {
            print("wrong argument for toggling accessorie")
            app.terminate(self)
            return
        }
        
        let serviceUUID = substrs[0]
        let accessorieUUID = substrs[1]
        
        let services = home?.servicesWithTypes(supportedServices) ?? []
        let service = services.first(where:  {$0.uniqueIdentifier.uuidString == serviceUUID})
        let characteristic = service?.characteristics.first(where: {$0.uniqueIdentifier.uuidString == accessorieUUID}) as! HMCharacteristic
        
        if !supportedCharacteristic(characterisic: characteristic) {
            return
        }
        
        let metadata = characteristic.metadata
        var minValue = metadata?.minimumValue?.decimalValue ?? 0.0
        var maxValue = metadata?.maximumValue?.decimalValue ?? 1.0
        let value = characteristic.value as? Decimal ?? Decimal(0.0)        
        let format = metadata?.format ?? HMCharacteristicMetadataFormatBool
        
        if format == HMCharacteristicMetadataFormatBool {
            minValue = 0.0
            maxValue = 1.0
        }
        
        let newValue = (value < (minValue + maxValue) / 2.0) ? maxValue : minValue
        characteristic.writeValue(newValue, completionHandler: { (error) -> Void in
            if error != nil {
                print("Something went wrong when attempting to toggle the accessorie.")
            } else {
                print(service!.name + " toggled")
            }
            
            app.terminate(self)
        })
    }
}

extension AppDelegate: HMHomeManagerDelegate {
    func homeManagerDidUpdateHomes(_ manager: HMHomeManager) {
        
        switch self.command {
        case HKCommand.list:
            list()
        case HKCommand.execute(let UUID):
            execute(UUID: UUID)
        default:
            print("invalid commnand")
            app.terminate(self)
        }
    }
}



let delegate = AppDelegate()
app.delegate = delegate
app.run()

