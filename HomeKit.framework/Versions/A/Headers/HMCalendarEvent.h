//  HMCalendarEvent.h
//  HomeKit
//
//  Copyright (c) 2017 Apple Inc. All rights reserved.

#import <Foundation/Foundation.h>
#import <HomeKit/HMTimeEvent.h>
#import <HomeKit/HMDefines.h>

NS_ASSUME_NONNULL_BEGIN

/*!
 * @brief This class is used to represent a calendar event.
 */
API_AVAILABLE(macos(10.10), ios(11.0), watchos(4.0), tvos(11.0))  
@interface HMCalendarEvent : HMTimeEvent <NSCopying, NSMutableCopying>

- (instancetype)init NS_UNAVAILABLE;

/*!
 * @brief Creates a calendar event
 *
 * @param fireDateComponents The date component that specifies the time when the event is fired
 *
 * @return Instance object representing the event trigger.
 */
- (instancetype)initWithFireDateComponents:(NSDateComponents *)fireDateComponents;


/*!
 * @brief The date component that specifies the time when the event is fired
 */
@property(readonly, strong, nonatomic) NSDateComponents *fireDateComponents;

@end





/*!
 * @brief This class is used to represent a calendar event.
 */
API_AVAILABLE(macos(10.10), ios(11.0), watchos(4.0), tvos(11.0))  
@interface HMMutableCalendarEvent : HMCalendarEvent

- (instancetype)init NS_UNAVAILABLE;

/*!
 * @brief The date component that specifies the time when the event is fired
 */
@property(readwrite, strong, nonatomic) NSDateComponents *fireDateComponents;

@end

NS_ASSUME_NONNULL_END
