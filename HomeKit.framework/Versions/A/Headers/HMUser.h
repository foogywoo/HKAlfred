//
//  HMUser.h
//  HomeKit
//
//  Copyright (c) 2014-2015 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <HomeKit/HMDefines.h>

NS_ASSUME_NONNULL_BEGIN

@class HMHomeAccessControl;

/*!
 * @brief This class describes a user in the home.
 */
API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(10.0))  
@interface HMUser : NSObject

- (instancetype)init NS_UNAVAILABLE;

/*!
 * @brief Name of the user.
 */
@property(readonly, copy, nonatomic) NSString *name;

/*!
 * @brief A unique identifier for the user.
 */
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier API_AVAILABLE(macos(10.10), ios(9.0));

@end

NS_ASSUME_NONNULL_END
