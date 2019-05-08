//  HMCharacteristicTypes.h
//  HomeKit
//
//  Copyright © 2015 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <HomeKit/HMDefines.h>

NS_ASSUME_NONNULL_BEGIN

/*!
 * @brief This constant specifies that the characteristic supports notifications
 *        using the event connection established by the controller. The
 *        event connection provides unidirectional communication from the
 *        accessory to the controller.
 */
HM_EXTERN NSString * const HMCharacteristicPropertySupportsEventNotification API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief This constant specifies that the characteristic is readable.
 */
HM_EXTERN NSString * const HMCharacteristicPropertyReadable API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief This constant specifies that the characteristic is writable.
 */
HM_EXTERN NSString * const HMCharacteristicPropertyWritable API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief This constant specifies that the characteristic should be hidden from the user.
 */
HM_EXTERN NSString * const HMCharacteristicPropertyHidden API_AVAILABLE(macos(10.10), ios(9.3), watchos(2.2), tvos(10.0))  ;

/*!
 * @group Accessory Service Characteristic Types
 *
 * @brief These constants define the characteristic types supported by the HomeKit Accessory Profile for HomeKit based accessories.
 */

/*!
 * @brief Characteristic type for power state. The value of the characteristic is a boolean.
 */
HM_EXTERN NSString * const HMCharacteristicTypePowerState API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for hue. The value of the characteristic is a float value in arc degrees.
 */
HM_EXTERN NSString * const HMCharacteristicTypeHue API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for saturation. The value of the characteristic is a float value in percent.
 */
HM_EXTERN NSString * const HMCharacteristicTypeSaturation API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for brightness. The value of the characteristic is an int value in percent.
 */
HM_EXTERN NSString * const HMCharacteristicTypeBrightness API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for temperature units. The value of the characteristic is one of the values
 *        defined for HMCharacteristicValueTemperatureUnit.
 */
HM_EXTERN NSString * const HMCharacteristicTypeTemperatureUnits API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for current temperature. The value of the characteristic is a float value in Celsius.
 */
HM_EXTERN NSString * const HMCharacteristicTypeCurrentTemperature API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for target temperature. The value of the characteristic is a float value in Celsius.
 */
HM_EXTERN NSString * const HMCharacteristicTypeTargetTemperature API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for heating/cooling mode. The value of the characteristic is one of the values
 *        defined for HMCharacteristicValueHeatingCooling and indicates the current heating/cooling mode.
 */
HM_EXTERN NSString * const HMCharacteristicTypeCurrentHeatingCooling API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for target heating/cooling mode. The value of the characteristic is one of the values
 *        defined for HMCharacteristicValueHeatingCooling and indicates the target heating/cooling mode.
 */
HM_EXTERN NSString * const HMCharacteristicTypeTargetHeatingCooling API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for cooling threshold temperature. The value of the characteristic is a float value in Celsius.
 */
HM_EXTERN NSString * const HMCharacteristicTypeCoolingThreshold API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for heating threshold temperature. The value of the characteristic is a float value in Celsius.
 */
HM_EXTERN NSString * const HMCharacteristicTypeHeatingThreshold API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for current relative humidity. The value of the characteristic is a float value in percent.
 */
HM_EXTERN NSString * const HMCharacteristicTypeCurrentRelativeHumidity API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for target relative humidity. The value of the characteristic is a float value in percent.
 */
HM_EXTERN NSString * const HMCharacteristicTypeTargetRelativeHumidity API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for current door state. The value of the characteristic is one of the values
 *        defined for HMCharacteristicValueDoorState and indicates the current door state.
 */
HM_EXTERN NSString * const HMCharacteristicTypeCurrentDoorState API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for target door state. The value of the characteristic is one of the values
 *        defined for HMCharacteristicValueDoorState and indicates the target door state.
 */
HM_EXTERN NSString * const HMCharacteristicTypeTargetDoorState API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for obstruction detected. The value of the characteristic is a boolean value.
 */
HM_EXTERN NSString * const HMCharacteristicTypeObstructionDetected API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for name. The value of the characteristic is a string.
 */
HM_EXTERN NSString * const HMCharacteristicTypeName API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for manufacturer. The value of the characteristic is a string.
 */
HM_EXTERN NSString * const HMCharacteristicTypeManufacturer API_DEPRECATED_WITH_REPLACEMENT("Use -[HMAccessory manufacturer] instead", ios(8.0, 11.0), watchos(2.0, 4.0), tvos(10.0, 11.0))  ;

/*!
 * @brief Characteristic type for model. The value of the characteristic is a string.
 */
HM_EXTERN NSString * const HMCharacteristicTypeModel API_DEPRECATED_WITH_REPLACEMENT("Use -[HMAccessory model] instead", ios(8.0, 11.0), watchos(2.0, 4.0), tvos(10.0, 11.0))  ;

/*!
 * @brief Characteristic type for serial number. The value of the characteristic is a string.
 */
HM_EXTERN NSString * const HMCharacteristicTypeSerialNumber API_DEPRECATED("No longer supported", ios(8.0, 11.0), watchos(2.0, 4.0), tvos(10.0, 11.0))  ;

/*!
 * @brief Characteristic type for identify. The characteristic is write-only that takes a boolean.
 */
HM_EXTERN NSString * const HMCharacteristicTypeIdentify API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for rotation direction. The value of the characteristic is one of the values
 *        defined for HMCharacteristicValueRotationDirection and indicates the fan rotation direction.
 */
HM_EXTERN NSString * const HMCharacteristicTypeRotationDirection API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for rotation speed. The value of the characteristic is a float representing
 *        the percentage of maximum speed.
 */
HM_EXTERN NSString * const HMCharacteristicTypeRotationSpeed API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for outlet in use. The value of the characteristic is a boolean, which is true
 *        if the outlet is in use.
 */
HM_EXTERN NSString * const HMCharacteristicTypeOutletInUse API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for version. The value of the characteristic is a string.
 */
HM_EXTERN NSString * const HMCharacteristicTypeVersion API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for logs. The value of the characteristic is TLV8 data wrapped in an NSData.
 */
HM_EXTERN NSString * const HMCharacteristicTypeLogs API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for audio feedback. The value of the characteristic is a boolean.
 */
HM_EXTERN NSString * const HMCharacteristicTypeAudioFeedback API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for admin only access. The value of the characteristic is a boolean.
 */
HM_EXTERN NSString * const HMCharacteristicTypeAdminOnlyAccess API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for Security System Alarm Type. The value of the characteristic is a uint8.
 *        indicating the type of alarm triggered by a security system service. This characteristic has a value
 *        of 1 when the alarm type is not known and a value of 0 indicates that the alarm conditions are cleared.
 */
HM_EXTERN NSString * const HMCharacteristicTypeSecuritySystemAlarmType API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for motion detected. The value of the characteristic is a boolean.
 */
HM_EXTERN NSString * const HMCharacteristicTypeMotionDetected API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for current lock mechanism state. The value of the characteristic is one of the values
 *        defined for HMCharacteristicValueLockMechanismState.
 */
HM_EXTERN NSString * const HMCharacteristicTypeCurrentLockMechanismState API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for target lock mechanism state. The value of the characteristic is either
 *        HMCharacteristicValueLockMechanismStateUnsecured, or HMCharacteristicValueLockMechanismStateSecured,
 *        as defined by HMCharacteristicValueLockMechanismState.
 */
HM_EXTERN NSString * const HMCharacteristicTypeTargetLockMechanismState API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for the last known action for a lock mechanism. The value of the characteristic is one of the values
 *        defined for HMCharacteristicValueLockMechanismLastKnownAction.
 */
HM_EXTERN NSString * const HMCharacteristicTypeLockMechanismLastKnownAction API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for the control point for lock management. The characteristic is write-only that takes TLV8 data wrapped in an NSData.
 */
HM_EXTERN NSString * const HMCharacteristicTypeLockManagementControlPoint API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for the auto secure timeout for lock management. The value of the characteristic is an unsigned 
          32-bit integer representing the number of seconds.
 */
HM_EXTERN NSString * const HMCharacteristicTypeLockManagementAutoSecureTimeout API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for density of air-particulate matter. The value of the characteristic is
 *        in units of micrograms/m^3.
 */
HM_EXTERN NSString * const HMCharacteristicTypeAirParticulateDensity API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for size of air-particulate matter. The value of the characteristic is
 *        one of the values defined for HMCharacteristicValueAirParticulateSize.
 */
HM_EXTERN NSString * const HMCharacteristicTypeAirParticulateSize API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for air quality. The value of the characteristic is
 *        one of the values defined for HMCharacteristicValueAirQuality.
 */
HM_EXTERN NSString * const HMCharacteristicTypeAirQuality API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for battery level. The value of the characteristic is an uint8
 *        value in percent.
 */
HM_EXTERN NSString * const HMCharacteristicTypeBatteryLevel API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for carbon dioxide detected. The value of the characteristic is a uint8 value.
 *        A value of 0 indicates carbon dioxide levels are normal.
 */
HM_EXTERN NSString * const HMCharacteristicTypeCarbonDioxideDetected API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for carbon dioxide level.
 *        The value of the characteristic is a float value in units of ppm.
 */
HM_EXTERN NSString * const HMCharacteristicTypeCarbonDioxideLevel API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for carbon dioxide peak level.
 *        The value of the characteristic is a float value in units of ppm.
 */
HM_EXTERN NSString * const HMCharacteristicTypeCarbonDioxidePeakLevel API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for carbon monoxide detected. The value of the characteristic is a uint8 value.
 *        A value of 0 indicates carbon monoxide levels are normal.
 */
HM_EXTERN NSString * const HMCharacteristicTypeCarbonMonoxideDetected API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for carbon monoxide level.
 *        The value of the characteristic is a float value in units of ppm.
 */
HM_EXTERN NSString * const HMCharacteristicTypeCarbonMonoxideLevel API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for carbon monoxide peak level.
 *        The value of the characteristic is a float value in units of ppm.
 */
HM_EXTERN NSString * const HMCharacteristicTypeCarbonMonoxidePeakLevel API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for Charging state. The value of the characteristic is a uint8.
 *        A value of 1 indicates charging is in progress.
 */
HM_EXTERN NSString * const HMCharacteristicTypeChargingState API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for Contact sensor state. The value of the characteristic is a uint8 value.
 *        A value of 0 indicates that contact is detected; a value of 1 indicates no contact is detected.
 */
HM_EXTERN NSString * const HMCharacteristicTypeContactState API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for current horizontal tilt angle. The value is a float representing the angle in arc degrees.
 */
HM_EXTERN NSString * const HMCharacteristicTypeCurrentHorizontalTilt API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for current light level. The value of the characteristic in units of lux.
 */
HM_EXTERN NSString * const HMCharacteristicTypeCurrentLightLevel API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for current position of a door/window. The value of the characteristic is an
 *        uint8 value in percent. A value of 0 indicates closed/most shade/least light allowed state and a
 *        value of 100 indicates open/no shade/most light allowed state.
 */
HM_EXTERN NSString * const HMCharacteristicTypeCurrentPosition API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for current security system state. The value of the characteristic is one of
 *        the values defined for HMCharacteristicValueCurrentSecuritySystemState.
 */
HM_EXTERN NSString * const HMCharacteristicTypeCurrentSecuritySystemState API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for current vertical tilt angle. The value is a float representing the angle in arc degrees.
 */
HM_EXTERN NSString * const HMCharacteristicTypeCurrentVerticalTilt API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for firmware version. The value of the characteristic is a string value
 *        describing the firmware version of the accessory.
 */
HM_EXTERN NSString * const HMCharacteristicTypeFirmwareVersion API_DEPRECATED_WITH_REPLACEMENT("Use -[HMAccessory firmwareVersion] instead", ios(8.0, 11.0), watchos(2.0, 4.0), tvos(10.0, 11.0))  ;

/*!
 * @brief Characteristic type for hardware version. The value of the characteristic is a string value
 *        describing the hardware version of the accessory.
 */
HM_EXTERN NSString * const HMCharacteristicTypeHardwareVersion API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for Hold Position. The value of the characteristic is a boolean
 *        indicating that the current position should be held/maintained.
 */
HM_EXTERN NSString * const HMCharacteristicTypeHoldPosition API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for programmable switch input event. The value of the characteristic is an int
 *        that can change based on the type of programmable switch. For a binary programmable switch, a value of 0
 *        indicates OFF (and 1 indicates ON). For a slider programmable switch, the value indicates the level.
 */
HM_EXTERN NSString * const HMCharacteristicTypeInputEvent API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for leak detected. The value of the characteristic is a uint8 value.
 *        A value of 0 indicates no leak is detected; a value of 1 indicates that a leak is detected.
 */
HM_EXTERN NSString * const HMCharacteristicTypeLeakDetected API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for Occupancy Detected. The value of the characteristic is a uint8 value.
 *        A value of 0 indicates no occupancy is detected; a value of 1 indicates that occupancy is detected.
 */
HM_EXTERN NSString * const HMCharacteristicTypeOccupancyDetected API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for programmable switch output state. This value is to be used for presentation
 *        purposes. For a binary programmable switch, a value of 1 can be used to present a state of ON.
 */
HM_EXTERN NSString * const HMCharacteristicTypeOutputState API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for Position state. The value of the characteristic is one of the
 *        one of the values defined for HMCharacteristicValuePositionState.
 */
HM_EXTERN NSString * const HMCharacteristicTypePositionState API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for Smoke Detected. The value of the characteristic is a uint8 value.
 *        A value of 0 indicates no smoke is detected; a value of 1 indicates that smoke is detected.
 */
HM_EXTERN NSString * const HMCharacteristicTypeSmokeDetected API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for software version. The value of the characteristic is a string value
 *        describing the software version of the accessory.
 */
HM_EXTERN NSString * const HMCharacteristicTypeSoftwareVersion API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type to indicate status of a service is active. The value of the characteristic is a boolean.
 */
HM_EXTERN NSString * const HMCharacteristicTypeStatusActive API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type to indicate status of a service is fault. The value of the characteristic is a uint8 value.
 */
HM_EXTERN NSString * const HMCharacteristicTypeStatusFault API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type to indicate status of a service is jammed. The value of the characteristic is a uint8 value.
 *        A value of 0 indicates that the service is not jammed; a value of 1 indicates that the service is jammed.
 */
HM_EXTERN NSString * const HMCharacteristicTypeStatusJammed API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type to indicate status of a service is low battery. The value of the characteristic is a uint8 value.
 *        A value of 0 indicates battery level is normal; a value of 1 indicates that battery level is low.
 */
HM_EXTERN NSString * const HMCharacteristicTypeStatusLowBattery API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type to indicate status of a service is tampered. The value of the characteristic is a uint8 value.
 *        A value of 0 indicates no tampering has been detected; a value of 1 indicates that a tampering has been detected.
 */
HM_EXTERN NSString * const HMCharacteristicTypeStatusTampered API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for target horizontal tilt angle. The value is a float representing the angle in arc degrees.
 */
HM_EXTERN NSString * const HMCharacteristicTypeTargetHorizontalTilt API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for target security system state. The value of the characteristic is one of
 *        the values defined for HMCharacteristicValueTargetSecuritySystemState.
 */
HM_EXTERN NSString * const HMCharacteristicTypeTargetSecuritySystemState API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for target position of a door/window/window covering. The value of the
 *        characteristic is an uint8 value in percent. A value of 0 indicates closed/most shade/least
 *        light allowed state and a value of 100 indicates open/no shade/most light allowed state.
 */
HM_EXTERN NSString * const HMCharacteristicTypeTargetPosition API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for target vertical tilt angle. The value is a float representing the angle in arc degrees.
 */
HM_EXTERN NSString * const HMCharacteristicTypeTargetVerticalTilt API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for streaming status. The value is a tlv8 data.
 */
HM_EXTERN NSString * const HMCharacteristicTypeStreamingStatus API_AVAILABLE(macos(10.10), ios(10.0), watchos(3.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for setup stream endpoint. The value is a tlv8 data.
 */
HM_EXTERN NSString * const HMCharacteristicTypeSetupStreamEndpoint API_AVAILABLE(macos(10.10), ios(10.0), watchos(3.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for supported video stream configuration. The value is a tlv8 data.
 */
HM_EXTERN NSString * const HMCharacteristicTypeSupportedVideoStreamConfiguration API_AVAILABLE(macos(10.10), ios(10.0), watchos(3.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for supported audio stream configuration. The value is a tlv8 data.
 */
HM_EXTERN NSString * const HMCharacteristicTypeSupportedAudioStreamConfiguration API_AVAILABLE(macos(10.10), ios(10.0), watchos(3.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for supported RTP stream configuration. The value is a tlv8 data.
 */
HM_EXTERN NSString * const HMCharacteristicTypeSupportedRTPConfiguration API_AVAILABLE(macos(10.10), ios(10.0), watchos(3.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for selected stream configuration. The value is a tlv8 data.
 */
HM_EXTERN NSString * const HMCharacteristicTypeSelectedStreamConfiguration API_AVAILABLE(macos(10.10), ios(10.0), watchos(3.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for volume control. The value is float.
 */
HM_EXTERN NSString * const HMCharacteristicTypeVolume API_AVAILABLE(macos(10.10), ios(10.0), watchos(3.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for mute control. The value is boolean.
 */
HM_EXTERN NSString * const HMCharacteristicTypeMute API_AVAILABLE(macos(10.10), ios(10.0), watchos(3.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for camera night vision. The value is boolean.
 */
HM_EXTERN NSString * const HMCharacteristicTypeNightVision API_AVAILABLE(macos(10.10), ios(10.0), watchos(3.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for camera optical zoom. The value is float.
 */
HM_EXTERN NSString * const HMCharacteristicTypeOpticalZoom API_AVAILABLE(macos(10.10), ios(10.0), watchos(3.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for camera digital zoom. The value is float.
 */
HM_EXTERN NSString * const HMCharacteristicTypeDigitalZoom API_AVAILABLE(macos(10.10), ios(10.0), watchos(3.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for camera image rotation. The value is float with valid values: 0, 90, 180 and 270
 */
HM_EXTERN NSString * const HMCharacteristicTypeImageRotation API_AVAILABLE(macos(10.10), ios(10.0), watchos(3.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for image mirroring. The value is boolean.
 */
HM_EXTERN NSString * const HMCharacteristicTypeImageMirroring API_AVAILABLE(macos(10.10), ios(10.0), watchos(3.0), tvos(10.0))  ;

/*!
 * @brief Characteristic type for label namespace used to label the services on an accessory with
 *        multiple services of the same type. The value of the characteristic is one of the values
 *        defined for HMCharacteristicValueLabelNamespace.
 */
HM_EXTERN NSString * const HMCharacteristicTypeLabelNamespace API_AVAILABLE(macos(10.10), ios(10.3), watchos(3.2), tvos(10.2))  ;

/*!
 * @brief Characteristic type describing the index of the label for the service on accessory with multiple
 *        instances of the same service. The value is an integer and starts from 1.
 *        For a label namespace of HMCharacteristicValueLabelNamespaceDot, label index indicates the
 *        number of dots - ., .., ..., and so on.
 *        For a label namespace of HMCharacteristicValueLabelNamespaceNumeral, label index indicates the arabic
 *        numeral - 1, 2, 3, and so on.
 */
HM_EXTERN NSString * const HMCharacteristicTypeLabelIndex API_AVAILABLE(macos(10.10), ios(10.3), watchos(3.2), tvos(10.2))  ;

/*!
 * @brief Characteristic type for active status. The value is one of the
 *        values defined for HMCharacteristicValueActivationState.
 */
HM_EXTERN NSString * const HMCharacteristicTypeActive API_AVAILABLE(macos(10.10), ios(10.2), watchos(3.1.1), tvos(10.1))  ;

/*!
 * @brief Characteristic type for air purifier current state. The value is
 *        one of the value defined for HMCharacteristicValueCurrentAirPurifierState.
 */
HM_EXTERN NSString * const HMCharacteristicTypeCurrentAirPurifierState API_AVAILABLE(macos(10.10), ios(10.2), watchos(3.1.1), tvos(10.1))  ;

/*!
 * @brief Characteristic type for air purifier target state. The value is
 *        one of the value defined for HMCharacteristicValueTargetAirPurifierState.
 */
HM_EXTERN NSString * const HMCharacteristicTypeTargetAirPurifierState API_AVAILABLE(macos(10.10), ios(10.2), watchos(3.1.1), tvos(10.1))  ;

/*!
 * @brief Characteristic type for current fan state. The value is
 *        one of the values defined for HMCharacteristicValueCurrentFanState.
 */
HM_EXTERN NSString * const HMCharacteristicTypeCurrentFanState API_AVAILABLE(macos(10.10), ios(10.2), watchos(3.1.1), tvos(10.1))  ;

/*!
 * @brief Characteristic type for heater/cooler current state. The value is
 *        one of the values defined for HMCharacteristicValueCurrentHeaterCoolerState.
 */
HM_EXTERN NSString * const HMCharacteristicTypeCurrentHeaterCoolerState API_AVAILABLE(macos(10.10), ios(10.2), watchos(3.1.1), tvos(10.1))  ;

/*!
 * @brief Characteristic type for humidifier/dehumidifier current state. The value is
 *        one of the values defined for HMCharacteristicValueCurrentHumidifierDehumidifierState.
 */
HM_EXTERN NSString * const HMCharacteristicTypeCurrentHumidifierDehumidifierState API_AVAILABLE(macos(10.10), ios(10.2), watchos(3.1.1), tvos(10.1))  ;

/*!
 * @brief Characteristic type for current slat state. The value is
 *        one of the values defined for HMCharacteristicValueCurrentSlatState.
 */
HM_EXTERN NSString * const HMCharacteristicTypeCurrentSlatState API_AVAILABLE(macos(10.10), ios(10.2), watchos(3.1.1), tvos(10.1))  ;

/*!
 * @brief Characteristic type for water level. The value is in percentage units.
 */
HM_EXTERN NSString * const HMCharacteristicTypeWaterLevel API_AVAILABLE(macos(10.10), ios(10.2), watchos(3.1.1), tvos(10.1))  ;

/*!
 * @brief Characteristic type for filter change indication. The value is
 *        one of the values defined for HMCharacteristicValueFilterChange.
 */
HM_EXTERN NSString * const HMCharacteristicTypeFilterChangeIndication API_AVAILABLE(macos(10.10), ios(10.2), watchos(3.1.1), tvos(10.1))  ;

/*!
 * @brief Characteristic type for filter life level. The value is in percentage units.
 */
HM_EXTERN NSString * const HMCharacteristicTypeFilterLifeLevel API_AVAILABLE(macos(10.10), ios(10.2), watchos(3.1.1), tvos(10.1))  ;

/*!
 * @brief Characteristic type for resetting filter change indication. The characteristic
 *        is write-only that takes a boolean value of 1.
 */
HM_EXTERN NSString * const HMCharacteristicTypeFilterResetChangeIndication API_AVAILABLE(macos(10.10), ios(10.2), watchos(3.1.1), tvos(10.1))  ;

/*!
 * @brief Characteristic type for locking physical controls. The value is
 *        one of the values defined for HMCharacteristicValueLockPhysicalControlsState.
 */
HM_EXTERN NSString * const HMCharacteristicTypeLockPhysicalControls API_AVAILABLE(macos(10.10), ios(10.2), watchos(3.1.1), tvos(10.1))  ;

/*!
 * @brief Characteristic type for swing mode. The value is
 *        one of the values defined for HMCharacteristicValueSwingMode.
 */
HM_EXTERN NSString * const HMCharacteristicTypeSwingMode API_AVAILABLE(macos(10.10), ios(10.2), watchos(3.1.1), tvos(10.1))  ;

/*!
 * @brief Characteristic type for target heater/cooler state. The value is
 *        one of the values defined for HMCharacteristicValueTargetHeaterCoolerState.
 */
HM_EXTERN NSString * const HMCharacteristicTypeTargetHeaterCoolerState API_AVAILABLE(macos(10.10), ios(10.2), watchos(3.1.1), tvos(10.1))  ;

/*!
 * @brief Characteristic type for target humidifier/dehumidifier state. The value
 *        is one of the values defined for HMCharacteristicValueTargetHumidifierDehumidifierState.
 */
HM_EXTERN NSString * const HMCharacteristicTypeTargetHumidifierDehumidifierState API_AVAILABLE(macos(10.10), ios(10.2), watchos(3.1.1), tvos(10.1))  ;

/*!
 * @brief Characteristic type for target fan state. The value is
 *        one of the values defined for HMCharacteristicValueTargetFanState.
 */
HM_EXTERN NSString * const HMCharacteristicTypeTargetFanState API_AVAILABLE(macos(10.10), ios(10.2), watchos(3.1.1), tvos(10.1))  ;

/*!
 * @brief Characteristic type for slat type. The value is
 *        one of the values defined for HMCharacteristicValueSlatType.
 */
HM_EXTERN NSString * const HMCharacteristicTypeSlatType API_AVAILABLE(macos(10.10), ios(10.2), watchos(3.1.1), tvos(10.1))  ;

/*!
 * @brief Characteristic type for current tilt angle. The value is a float representing the angle in arc degrees.
 */
HM_EXTERN NSString * const HMCharacteristicTypeCurrentTilt API_AVAILABLE(macos(10.10), ios(10.2), watchos(3.1.1), tvos(10.1))  ;

/*!
 * @brief Characteristic type for target tilt angle. The value is a float representing the angle in arc degrees.
 */
HM_EXTERN NSString * const HMCharacteristicTypeTargetTilt API_AVAILABLE(macos(10.10), ios(10.2), watchos(3.1.1), tvos(10.1))  ;

/*!
 * @brief Characteristic type for density of ozone. The value of the characteristic is
 *        in units of micrograms/m^3.
 */
HM_EXTERN NSString * const HMCharacteristicTypeOzoneDensity API_AVAILABLE(macos(10.10), ios(10.2), watchos(3.1.1), tvos(10.1))  ;

/*!
 * @brief Characteristic type for density of nitrogen dioxide. The value of the characteristic is
 *        in units of micrograms/m^3.
 */
HM_EXTERN NSString * const HMCharacteristicTypeNitrogenDioxideDensity API_AVAILABLE(macos(10.10), ios(10.2), watchos(3.1.1), tvos(10.1))  ;

/*!
 * @brief Characteristic type for density of sulphur dioxide. The value of the characteristic is
 *        in units of micrograms/m^3.
 */
HM_EXTERN NSString * const HMCharacteristicTypeSulphurDioxideDensity API_AVAILABLE(macos(10.10), ios(10.2), watchos(3.1.1), tvos(10.1))  ;

/*!
 * @brief Characteristic type for density of air-particulate matter of size 2.5 micrograms. The
 *        value of the characteristic is in units of micrograms/m^3.
 */
HM_EXTERN NSString * const HMCharacteristicTypePM2_5Density API_AVAILABLE(macos(10.10), ios(10.2), watchos(3.1.1), tvos(10.1))  ;

/*!
 * @brief Characteristic type for density of air-particulate matter of size 10 micrograms. The
 *        value of the characteristic is in units of micrograms/m^3.
 */
HM_EXTERN NSString * const HMCharacteristicTypePM10Density API_AVAILABLE(macos(10.10), ios(10.2), watchos(3.1.1), tvos(10.1))  ;

/*!
 * @brief Characteristic type for density of volatile organic compounds. The value of the
 *        characteristic is in units of micrograms/m^3.
 */
HM_EXTERN NSString * const HMCharacteristicTypeVolatileOrganicCompoundDensity API_AVAILABLE(macos(10.10), ios(10.2), watchos(3.1.1), tvos(10.1))  ;

/*!
 * @brief Characteristic type for dehumidifier threshold. The value of the characteristic is
 *        a float value in percent.
 */
HM_EXTERN NSString * const HMCharacteristicTypeDehumidifierThreshold API_AVAILABLE(macos(10.10), ios(10.2), watchos(3.1.1), tvos(10.1))  ;

/*!
 * @brief Characteristic type for humidifier threshold. The value of the characteristic is
 *        a float value in percent.
 */
HM_EXTERN NSString * const HMCharacteristicTypeHumidifierThreshold API_AVAILABLE(macos(10.10), ios(10.2), watchos(3.1.1), tvos(10.1))  ;

/*!
 * @brief Characteristic type for color temperature. The value of the characteristic is
 *        an int representing the mired value of the color temperature.
 */
HM_EXTERN NSString * const HMCharacteristicTypeColorTemperature API_AVAILABLE(macos(10.10), ios(11.0), watchos(4.0), tvos(11.0))  ;

/*!
 * @brief Characteristic type for program mode. The value of the characteristic is one of the values defined
 *        for HMCharacteristicValueProgramMode.
 */
HM_EXTERN NSString * const HMCharacteristicTypeProgramMode API_AVAILABLE(macos(10.10), ios(11.2), watchos(4.2), tvos(11.2))  ;

/*!
 * @brief Characteristic type for in use. The value of the characteristic is one of the values
 *        defined for HMCharacteristicValueUsageState.
 */
HM_EXTERN NSString * const HMCharacteristicTypeInUse API_AVAILABLE(macos(10.10), ios(11.2), watchos(4.2), tvos(11.2))  ;

/*!
 * @brief Characteristic type for set duration. The value of the characteristic is an int value in
 *        seconds.
 */
HM_EXTERN NSString * const HMCharacteristicTypeSetDuration API_AVAILABLE(macos(10.10), ios(11.2), watchos(4.2), tvos(11.2))  ;

/*!
 * @brief Characteristic type for remaining duration. The value of the characteristic is an int value in
 *        seconds.
 */
HM_EXTERN NSString * const HMCharacteristicTypeRemainingDuration API_AVAILABLE(macos(10.10), ios(11.2), watchos(4.2), tvos(11.2))  ;

/*!
 * @brief Characteristic type for valve type. The value of the characteristic is one of the values
 *        defined for HMCharacteristicValueValveType.
 */
HM_EXTERN NSString * const HMCharacteristicTypeValveType API_AVAILABLE(macos(10.10), ios(11.2), watchos(4.2), tvos(11.2))  ;

/*!
 * @brief Characteristic type for is-configured. The value of the characteristic is one of the values
 *        defined for HMCharacteristicValueConfigurationState.
 */
HM_EXTERN NSString * const HMCharacteristicTypeIsConfigured API_AVAILABLE(macos(10.10), ios(11.2), watchos(4.2), tvos(11.2))  ;

NS_ASSUME_NONNULL_END