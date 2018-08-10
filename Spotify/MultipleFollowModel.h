//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FollowModelObserver.h"

@class NSHashTable, NSMutableDictionary, NSString, SPTFollowModelMessageManager, SPTFollowStateDataLoader;

@interface MultipleFollowModel : NSObject <FollowModelObserver>
{
    NSString *_currentUsername;
    SPTFollowStateDataLoader *_followStateDataLoader;
    NSMutableDictionary *_followModelsDictionary;
    SPTFollowModelMessageManager *_messageManager;
    NSHashTable *_observers;
}

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
- (id)initWithCurrentUsername:(id)arg1 dataLoader:(id)arg2 followDataList:(id)arg3 messageManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

