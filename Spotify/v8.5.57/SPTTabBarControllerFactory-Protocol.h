//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController;
@protocol SPTLogCenter, SPTTabBarContainer;

@protocol SPTTabBarControllerFactory <NSObject>
- (UIViewController<SPTTabBarContainer> *)createTabBarContainerWithTabBarController:(struct UIViewController *)arg1 logCenter:(id <SPTLogCenter>)arg2;
- (struct UIViewController *)createTabBarControllerWithLogCenter:(id <SPTLogCenter>)arg1;
@end

