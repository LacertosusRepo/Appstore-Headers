//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTService-Protocol.h"

@class NSString, NSURL, UIViewController;
@protocol SPTPageController, SPTPageCreationContext;

@protocol SPTFreeTierPlaylistUIService <SPTService>
- (UIViewController<SPTPageController> *)providePlaylistViewControllerForURL:(NSURL *)arg1 withContext:(id <SPTPageCreationContext>)arg2 formatListType:(NSString *)arg3 configurationBlock:(id <SPTFreeTierPlaylistConfiguration> (^)(id <SPTFreeTierPlaylistConfiguration>))arg4;
@end
