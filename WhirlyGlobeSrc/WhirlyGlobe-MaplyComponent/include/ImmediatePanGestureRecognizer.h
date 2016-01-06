//
// Created by BENJAMIN LISBAKKEN on 1/5/16.
// Copyright (c) 2016 Backcountry Studios. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol TouchesBeganDelegate
- (void)touchesBegan;
@end
@interface ImmediatePanGestureRecognizer : UIPanGestureRecognizer
@property (nonatomic, strong) id<TouchesBeganDelegate> touchesBeganDelegate;
@end