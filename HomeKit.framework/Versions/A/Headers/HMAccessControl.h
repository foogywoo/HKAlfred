//
//  HMAccessControl.h
//  HomeKit
//
//  Copyright © 2017 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <HomeKit/HMDefines.h>

NS_ASSUME_NONNULL_BEGIN

/*!
 *  @abstract   The HMAccessControl class represents a generic access control.
 */
API_AVAILABLE(macos(10.10), ios(11.2), watchos(4.2), tvos(11.2))
@interface HMAccessControl : NSObject

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
