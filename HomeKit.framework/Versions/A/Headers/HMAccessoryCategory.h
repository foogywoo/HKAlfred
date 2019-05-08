//
//  HMAccessoryCategory.h
//  HomeKit
//
//  Copyright © 2015 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <HomeKit/HMDefines.h>
#import <HomeKit/HMAccessoryCategoryTypes.h>

NS_ASSUME_NONNULL_BEGIN

/*!
 * @brief This class is used to represent an accessory category.
 */
API_AVAILABLE(macos(10.10), ios(9.0), watchos(2.0), tvos(10.0)) 
@interface HMAccessoryCategory : NSObject

/*!
 * @brief A type identifier that represents the category.
 */
@property(readonly, copy, nonatomic) NSString *categoryType;

/*!
 * @brief The localized description of the category.
 */
@property(readonly, copy, nonatomic) NSString *localizedDescription;

@end

NS_ASSUME_NONNULL_END
