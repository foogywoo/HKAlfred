//
//  HMSignificantEvents.h
//  HomeKit
//
//  Copyright © 2016 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <HomeKit/HMDefines.h>

NS_ASSUME_NONNULL_BEGIN

/*!
 * @brief Type corresponding to significant events.
 */
typedef NSString * HMSignificantEvent NS_EXTENSIBLE_STRING_ENUM  ;

/*!
 * @brief Event corresponding to sunrise
 */
HM_EXTERN HMSignificantEvent const HMSignificantEventSunrise API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

/*!
 * @brief Event corresponding to sunset
 */
HM_EXTERN HMSignificantEvent const HMSignificantEventSunset API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  ;

NS_ASSUME_NONNULL_END


