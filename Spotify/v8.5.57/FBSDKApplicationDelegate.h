//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface FBSDKApplicationDelegate : NSObject
{
    NSHashTable *_applicationObservers;
    _Bool _isAppLaunched;
}

+ (_Bool)isSDKInitialized;
+ (long long)applicationState;
+ (id)sharedInstance;
+ (void)initializeSDK:(id)arg1;
+ (void)initializeWithLaunchData:(id)arg1;
+ (void)load;
- (void).cxx_destruct;
- (_Bool)isAppLaunched;
- (void)_logSDKInitialize;
- (void)_logIfAppLinkEvent:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (void)dealloc;
- (id)init;

@end

