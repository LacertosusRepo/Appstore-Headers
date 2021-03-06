//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTServiceContainer.h"

@class GPCPromise, MDXAppStateRecorder, MDXScreenManager, MDXSeamlessSignIn, MDXWatchNextEndpointDecorator, UIViewController;

@protocol MDXServices <YTServiceContainer>
- (GPCPromise *)fetchScreensAndMaybeSendNotificationRequest;
- (MDXSeamlessSignIn *)seamlessSignIn;
- (MDXAppStateRecorder *)appStateRecorder;
- (id <YTPlaybackRouteButtonController>)playbackRouteButtonController;
- (id <YTMenuItemVisibilityController>)menuItemVisibilityController;
- (MDXWatchNextEndpointDecorator *)watchNextEndpointDecorator;
- (UIViewController *)smartPairingMainViewController;
- (MDXScreenManager *)screenManager;
@end

