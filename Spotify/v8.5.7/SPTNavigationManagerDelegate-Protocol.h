//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTNavigationManager, UIViewController;

@protocol SPTNavigationManagerDelegate <NSObject>
- (void)navigationManager:(SPTNavigationManager *)arg1 didNavigateFromViewController:(UIViewController *)arg2 toViewController:(UIViewController *)arg3;

@optional
- (void)navigationManager:(SPTNavigationManager *)arg1 willNavigateFromViewController:(UIViewController *)arg2 toViewController:(UIViewController *)arg3;
@end

