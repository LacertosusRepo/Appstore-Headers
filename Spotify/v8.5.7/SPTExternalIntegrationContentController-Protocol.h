//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, NSURL;
@protocol SPTExternalIntegrationContentControllerObserver, SPTExternalIntegrationContentRequestOptions;

@protocol SPTExternalIntegrationContentController <NSObject>
- (void)removeObserver:(id <SPTExternalIntegrationContentControllerObserver>)arg1;
- (void)addObserver:(id <SPTExternalIntegrationContentControllerObserver>)arg1;
- (void)requestRecommendedRootItemsFromSpacesWithIdentifier:(NSString *)arg1 accessorySessionID:(NSString *)arg2 withCompletionHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)resolveChildContentOfParentWithURI:(NSURL *)arg1 options:(id <SPTExternalIntegrationContentRequestOptions>)arg2 accessorySessionID:(NSString *)arg3 withCompletionHandler:(void (^)(NSArray *, NSError *))arg4;
- (_Bool)canResolveChildContentWithParentURI:(NSURL *)arg1;
- (void)resolveContentWithURIs:(NSArray *)arg1 options:(id <SPTExternalIntegrationContentRequestOptions>)arg2 withCompletionHandler:(void (^)(NSArray *))arg3;
- (void)resolveContentWithURI:(NSURL *)arg1 options:(id <SPTExternalIntegrationContentRequestOptions>)arg2 withCompletionHandler:(void (^)(id <SPTExternalIntegrationContent>, NSError *))arg3;
@end

