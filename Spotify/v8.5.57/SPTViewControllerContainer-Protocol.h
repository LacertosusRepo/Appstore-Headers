//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, UIViewController;

@protocol SPTViewControllerContainer <NSObject>
@property(readonly, copy, nonatomic) NSArray *viewControllers;
@property(readonly, nonatomic) __weak UIViewController *topViewController;

@optional
- (void)setFocusedViewController:(UIViewController *)arg1;
@end
