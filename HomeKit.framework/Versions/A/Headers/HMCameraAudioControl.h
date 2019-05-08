//
//  HMCameraAudioControl.h
//  HomeKit
//
//  Copyright © 2016 Apple Inc. All rights reserved.
//

#import <HomeKit/HMCameraControl.h>
#import <HomeKit/HMDefines.h>

@class HMCharacteristic;

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(macos(10.10), ios(10.0), watchos(3.0), tvos(10.0))  
@interface HMCameraAudioControl : HMCameraControl

- (instancetype)init NS_UNAVAILABLE;

/*!
 * Characteristic corresponding to mute setting on the camera.
 */
@property(readonly, strong, nonatomic, nullable) HMCharacteristic *mute;

/*!
 * Characteristic corresponding to volume setting on the camera.
 */
@property(readonly, strong, nonatomic, nullable) HMCharacteristic *volume;

@end

NS_ASSUME_NONNULL_END
