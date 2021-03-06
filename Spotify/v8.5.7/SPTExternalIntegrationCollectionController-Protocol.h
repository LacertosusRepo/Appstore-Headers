//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;
@protocol SPTCollectionPlatformConfiguration, SPTExternalIntegrationCollectionControllerObserver;

@protocol SPTExternalIntegrationCollectionController <NSObject>
@property(readonly, nonatomic) id <SPTCollectionPlatformConfiguration> configuration;
- (void)removeObserver:(id <SPTExternalIntegrationCollectionControllerObserver>)arg1;
- (void)addObserver:(id <SPTExternalIntegrationCollectionControllerObserver>)arg1;
- (void)removeContentFromCollectionWithURI:(NSURL *)arg1 accessorySessionID:(NSString *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)addContentToCollectionWithURI:(NSURL *)arg1 fromContext:(NSURL *)arg2 accessorySessionID:(NSString *)arg3 completionHandler:(void (^)(_Bool))arg4;
- (_Bool)canAddTrackToCollectionWithURI:(NSURL *)arg1;
- (void)collectionContainsContentWithURI:(NSURL *)arg1 completionHandler:(void (^)(_Bool))arg2;
@end

