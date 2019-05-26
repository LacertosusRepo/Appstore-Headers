//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTService-Protocol.h"

@class SPTShareScreenshotObserverManager, UIViewController;
@protocol SPTShareEntityData, SPTShareEntityDataFactory, SPTShareTestManager;

@protocol SPTShareFeature <SPTService>
- (id <SPTShareEntityDataFactory>)provideShareEntityDataFactory;
- (id <SPTShareTestManager>)provideTestManager;
- (SPTShareScreenshotObserverManager *)provideShareScreenshotObserverManager;
- (void)presentShareViewController:(UIViewController *)arg1;
- (UIViewController *)provideShareViewControllerForShareEntityData:(id <SPTShareEntityData>)arg1;
@end
