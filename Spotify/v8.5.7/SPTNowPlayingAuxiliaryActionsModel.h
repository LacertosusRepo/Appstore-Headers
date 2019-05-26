//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCollectionPlatformObserver-Protocol.h"
#import "SPTNowPlayingTrackMetadataQueueObserver-Protocol.h"

@class NSHashTable, NSString, NSURL, SPTNowPlayingTrackMetadataQueue, SPTPlayerTrack;
@protocol SPTAdsManager, SPTCollectionPlatform, SPTNowPlayingTestManager;

@interface SPTNowPlayingAuxiliaryActionsModel : NSObject <SPTCollectionPlatformObserver, SPTNowPlayingTrackMetadataQueueObserver>
{
    _Bool _inCollection;
    _Bool _inBannedCollection;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTAdsManager> _adsManager;
    id <SPTNowPlayingTestManager> _testManager;
    SPTNowPlayingTrackMetadataQueue *_trackMetadataQueue;
    NSHashTable *_observers;
}

@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) SPTNowPlayingTrackMetadataQueue *trackMetadataQueue; // @synthesize trackMetadataQueue=_trackMetadataQueue;
@property(nonatomic) __weak id <SPTNowPlayingTestManager> testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPTAdsManager> adsManager; // @synthesize adsManager=_adsManager;
@property(nonatomic) __weak id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(nonatomic, getter=isInBannedCollection) _Bool inBannedCollection; // @synthesize inBannedCollection=_inBannedCollection;
@property(nonatomic, getter=isInCollection) _Bool inCollection; // @synthesize inCollection=_inCollection;
- (void).cxx_destruct;
- (void)trackMetadataQueue:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)trackMetadataQueueDidFinishUpdating:(id)arg1;
- (void)collectionPlatformDidChange:(id)arg1;
- (void)dealloc;
- (id)playingContextURL;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSURL *subtitleClickURL;
@property(readonly, nonatomic) NSURL *adsURLToOpen;
@property(readonly, nonatomic) _Bool disableInteractiveTransitionForAd;
@property(readonly, nonatomic) _Bool videoOfferInProgress;
@property(readonly, nonatomic) _Bool disallowOpeningContextMenu;
- (void)updateCollectionState;
- (void)notifyObservers;
- (void)setInBannedCollectionAndNotifyObservers:(_Bool)arg1;
- (void)setInCollectionAndNotifyObservers:(_Bool)arg1;
- (void)updateStateForCurrentTrack;
- (void)removeBanFromCollectionWithConfirmation:(_Bool)arg1;
- (void)removeBanFromCollection;
- (void)banFromCollectionWithConfirmation:(_Bool)arg1;
- (void)banFromCollection;
- (void)addToCollectionWithConfirmation:(_Bool)arg1;
- (void)addToCollection;
- (void)removeFromCollectionWithConfirmation:(_Bool)arg1;
- (void)removeFromCollection;
@property(readonly, nonatomic) _Bool disallowAddingToCollection;
@property(readonly, nonatomic) SPTPlayerTrack *displayedMetadata;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithCollectionPlatform:(id)arg1 adsManager:(id)arg2 testManager:(id)arg3 trackMetadataQueue:(id)arg4;
- (_Bool)updateShowFollowState;
- (_Bool)unfollowShow;
- (_Bool)followShow;
- (_Bool)disallowFollowShow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
