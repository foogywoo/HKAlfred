//  HMPresenceEvent.h
//  HomeKit
//
//  Copyright (c) 2017 Apple Inc. All rights reserved.

#import <Foundation/Foundation.h>
#import <HomeKit/HMDefines.h>
#import <HomeKit/HMEvent.h>
#import <HomeKit/HMPresenceEventDefines.h>

NS_ASSUME_NONNULL_BEGIN

/*!
 * @brief This class is used to represent the presence of users in a home.
 */
API_AVAILABLE(macos(10.10), ios(11.0), watchos(4.0), tvos(11.0))  
@interface HMPresenceEvent : HMEvent <NSCopying, NSMutableCopying>

- (instancetype)init NS_UNAVAILABLE;

/*!
 * @brief Creates a presence based event.
 *
 * @param presenceEventType The event type desired for the event.
 *
 * @param presenceUserType The user type whose presence will trigger the event.
 *
 * @return Instance object representing the presence event.
 */
- (instancetype)initWithPresenceEventType:(HMPresenceEventType)presenceEventType presenceUserType:(HMPresenceEventUserType)presenceUserType;

/*!
 * @brief presenceEventType The event type that will trigger the event.
 */
@property(readonly, nonatomic) HMPresenceEventType presenceEventType;

/*!
 * @brief presenceUserType The user type whose presence will trigger the event.
 */
@property(readonly, nonatomic) HMPresenceEventUserType presenceUserType;

@end


/*!
 * @brief This class is used to represent the presence of users in a home.
 */
API_AVAILABLE(macos(10.10), ios(11.0), watchos(4.0), tvos(11.0))  
@interface HMMutablePresenceEvent : HMPresenceEvent

- (instancetype)init NS_UNAVAILABLE;

/*!
 * @brief presenceEventType The event type that will trigger the event.
 */
@property(readwrite, nonatomic) HMPresenceEventType presenceEventType;

/*!
 * @brief presenceUserType The user type whose presence will trigger the event.
 */
@property(readwrite, nonatomic) HMPresenceEventUserType presenceUserType;

@end

NS_ASSUME_NONNULL_END