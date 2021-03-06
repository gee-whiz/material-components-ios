/*
 Copyright 2017-present the Material Components for iOS authors. All Rights Reserved.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import "MaterialShapes.h"

/**
 A rounded corner treatment.
 */
@interface MDCRoundedCornerTreatment : MDCCornerTreatment

/**
 The radius of the corner.
 */
@property(nonatomic, assign) CGFloat radius;

/**
 Initializes an MDCRoundedCornerTreatment instance with a given radius.
 */
- (nonnull instancetype)initWithRadius:(CGFloat)radius NS_DESIGNATED_INITIALIZER;

/**
 Initializes an MDCRoundedCornerTreatment instance with a radius of zero.
 */
- (nonnull instancetype)init;

- (nullable instancetype)initWithCoder:(nonnull NSCoder *)aDecoder NS_DESIGNATED_INITIALIZER;

@end
