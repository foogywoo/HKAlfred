//
//  HMHomeAccessControl.h
//  HomeKit
//
//  Copyright (c) 2015 Apple Inc. All rights reserved.
//

#import <HomeKit/HMDefines.h>
#import <HomeKit/HMAccessControl.h>

NS_ASSUME_NONNULL_BEGIN

/*!
 * @brief Represents the access control of a user associated with a home.
 */
API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0))  
@interface HMHomeAccessControl : HMAccessControl

/*!
 * @brief Specifies if the user has administrative privileges for the home.
 */
@property(readonly, getter=isAdministrator, nonatomic) BOOL administrator;

@end

NS_ASSUME_NONNULL_END
