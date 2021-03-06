//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTService-Protocol.h"

@class SPTNavigationManager, SPTStartupTracer;
@protocol SPTKeychainManager, SPTLogCenter, SPTMetaViewController, SPTNavigationRouter, SPTNotificationSystemDelegate, SPTPageRegistry, SPTUICompletionNotifier;

@protocol SPTContainerService <SPTService>
@property(nonatomic) __weak id <SPTNotificationSystemDelegate> notificationSystemDelegate;
- (void (^)(void))provideContainerLogoutHandler;
- (id <SPTKeychainManager>)provideKeychainManager;
- (id <SPTLogCenter>)provideLogCenter;
- (id <SPTUICompletionNotifier>)provideUICompletionNotifier;
- (id <SPTNavigationRouter>)provideNavigationRouter;
- (SPTNavigationManager *)provideNavigationManager;
- (id <SPTMetaViewController>)provideMetaViewController;
- (SPTStartupTracer *)provideStartupTracer;
- (id <SPTPageRegistry>)providePageRegistry;
@end

