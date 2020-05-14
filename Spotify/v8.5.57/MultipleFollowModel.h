//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FollowModelObserver-Protocol.h"

@class NSHashTable, NSMutableDictionary, NSString, SPTFollowFeatureProperties, SPTFollowModelMessageManager, SPTFollowStateDataLoader;
@protocol SPTFollowFeatureLogger;

@interface MultipleFollowModel : NSObject <FollowModelObserver>
{
    NSString *_currentUsername;
    SPTFollowStateDataLoader *_followStateDataLoader;
    NSMutableDictionary *_followModelsDictionary;
    SPTFollowModelMessageManager *_messageManager;
    NSHashTable *_observers;
    id <SPTFollowFeatureLogger> _followFeatureLogger;
    NSString *_logContext;
    SPTFollowFeatureProperties *_featureProperties;
}

@property(retain, nonatomic) SPTFollowFeatureProperties *featureProperties; // @synthesize featureProperties=_featureProperties;
@property(retain, nonatomic) NSString *logContext; // @synthesize logContext=_logContext;
@property(retain, nonatomic) id <SPTFollowFeatureLogger> followFeatureLogger; // @synthesize followFeatureLogger=_followFeatureLogger;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) SPTFollowModelMessageManager *messageManager; // @synthesize messageManager=_messageManager;
@property(retain, nonatomic) NSMutableDictionary *followModelsDictionary; // @synthesize followModelsDictionary=_followModelsDictionary;
@property(retain, nonatomic) SPTFollowStateDataLoader *followStateDataLoader; // @synthesize followStateDataLoader=_followStateDataLoader;
@property(retain, nonatomic) NSString *currentUsername; // @synthesize currentUsername=_currentUsername;
- (void).cxx_destruct;
- (void)followModel:(id)arg1 remoteFollowDataDidChange:(id)arg2;
- (void)followModel:(id)arg1 updateDidFailWithError:(id)arg2;
- (void)followModel:(id)arg1 followDataDidChange:(id)arg2;
- (void)addFollowDatas:(id)arg1;
- (id)dataForURI:(id)arg1;
- (void)unfollowURI:(id)arg1;
- (void)followURI:(id)arg1;
- (void)toggleFollowStateForURI:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithCurrentUsername:(id)arg1 dataLoader:(id)arg2 followDataList:(id)arg3 messageManager:(id)arg4 featureProperties:(id)arg5 followFeatureLogger:(id)arg6 logContext:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

