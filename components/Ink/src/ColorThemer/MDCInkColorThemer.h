// Copyright 2017-present the Material Components for iOS authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import "MaterialInk.h"
#import "MaterialThemes.h"

#import <Foundation/Foundation.h>

#pragma mark - Soon to be deprecated

/**
 Used to apply a color scheme to theme MDCInkView.

 @warning This class will soon be deprecated. There is no direct replacement. Ink color must be
 set by the owning component in a context-specific manner.
 */
@interface MDCInkColorThemer : NSObject
@end

@interface MDCInkColorThemer (ToBeDeprecated)

/**
 Applies a color scheme to theme a MDCInkView.

 @warning This API will soon be deprecated. There is no direct replacement. Ink color must be
 set by the owning component in a context-specific manner.

 @param colorScheme The color scheme to apply to MDCInkView.
 @param inkView A MDCInkView instance to apply a color scheme.
 */
+ (void)applyColorScheme:(nonnull id<MDCColorScheme>)colorScheme
               toInkView:(nonnull MDCInkView *)inkView;

@end
