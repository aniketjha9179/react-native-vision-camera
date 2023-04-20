//
//  FrameProcessorRuntimeManager.h
//  VisionCamera
//
//  Created by Marc Rousavy on 23.03.21.
//  Copyright © 2021 mrousavy. All rights reserved.
//

#pragma once

#import <Foundation/Foundation.h>
#import <React/RCTBridge.h>
#import "../../example/ios/mediapipe/mediapipe/objc/MPPGraph.h"

@interface FrameProcessorRuntimeManager : NSObject

- (instancetype) init;

- (void) installFrameProcessorBindings;

+ (MPPGraph*)loadGraphFromResource:(NSString*)resource

@end
