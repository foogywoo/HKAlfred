//
//  HMRoom.h
//  HomeKit
//
//  Copyright (c) 2013-2015 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <HomeKit/HMDefines.h>

NS_ASSUME_NONNULL_BEGIN

@class HMAccessory;

/*!
 * @brief This class describes a room in the home.
 */
API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(10.0))  
@interface HMRoom : NSObject

- (instancetype)init NS_UNAVAILABLE;

/*!
 * @brief Name of the room.
 */
@property(readonly, copy, nonatomic) NSString *name;

/*!
 * @brief Array of HMAccessory objects that correspond to the accessories 
 *        associated with this room.
 */
@property(readonly, copy, nonatomic) NSArray<HMAccessory *> *accessories;

/*!
 * @brief A unique identifier for the room.
 */
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier API_AVAILABLE(macos(10.10), ios(9.0));

/*!
 * @brief This method is used to change the name of the room.
 *
 * @param name New name for the room.
 *
 * @param completion Block that is invoked once the request is processed. 
 *                   The NSError provides more information on the status of the request, error
 *                   will be nil on success.
 */
- (void)updateName:(NSString *)name completionHandler:(void (^)(NSError * __nullable error))completion API_UNAVAILABLE(watchos, tvos);

@end

NS_ASSUME_NONNULL_END
