//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"

@class NSHashTable, NSString, SPTDataLoader;

@interface SPTFollowStateDataLoader : NSObject <SPTDataLoaderDelegate>
{
    SPTDataLoader *_dataLoader;
    NSString *_currentUsername;
    NSHashTable *_observers;
}

+ (id)userOrArtistURIString:(id)arg1;
+ (id)createSocialGraphRequestPayloadWithFollowData:(id)arg1;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSString *currentUsername; // @synthesize currentUsername=_currentUsername;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (_Bool)isCurrentUserFollowData:(id)arg1;
- (id)toggleBanDataOptimistically:(id)arg1 requestContext:(id)arg2;
- (id)toggleFollowDataOptimistically:(id)arg1 requestContext:(id)arg2;
- (void)notifyFailedWithError:(id)arg1 followData:(id)arg2 requestContext:(id)arg3;
- (void)notifyChangedOptimistically:(id)arg1 requestContext:(id)arg2;
- (void)notifyChanged:(id)arg1 requestContext:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)changeState:(_Bool)arg1 followData:(id)arg2 requestType:(unsigned long long)arg3 requestContext:(id)arg4;
- (void)changeBanState:(_Bool)arg1 withFollowData:(id)arg2 requestContext:(id)arg3;
- (void)changeFollowState:(_Bool)arg1 withFollowData:(id)arg2 requestContext:(id)arg3;
- (void)addObserver:(id)arg1;
- (id)initWithDataLoader:(id)arg1 currentUsername:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

