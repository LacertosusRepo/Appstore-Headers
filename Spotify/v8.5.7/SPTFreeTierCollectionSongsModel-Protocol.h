//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SPTSortingFilteringFilterableModel-Protocol.h"
#import "SPTSortingFilteringSortableModel-Protocol.h"

@class NSURL, SPTPlayOrigin;
@protocol SPTFreeTierCollectionModelItemEntity, SPTFreeTierCollectionSongsModelDelegate, SPTFreeTierRecommendationsTrackModelEntity, SPTPlayer;

@protocol SPTFreeTierCollectionSongsModel <NSObject, SPTSortingFilteringFilterableModel, SPTSortingFilteringSortableModel>
@property(readonly, nonatomic) unsigned long long offlineAvailability;
@property(readonly, nonatomic) unsigned long long numberRecommendedItems;
@property(readonly, nonatomic) unsigned long long numberItems;
@property(readonly, nonatomic, getter=isOfflineSyncAvailable) _Bool offlineSyncAvailable;
@property(readonly, nonatomic, getter=isPreviewsAvailable) _Bool previewsAvailable;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
@property(nonatomic) __weak id <SPTFreeTierCollectionSongsModelDelegate> delegate;
- (void)removeObserverForTrackStateWithTrackURL:(NSURL *)arg1;
- (void)addObserverForTrackStateWithTrackURL:(NSURL *)arg1 inCollection:(_Bool)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)changeTrackURL:(NSURL *)arg1 likeState:(_Bool)arg2;
- (void)changeTrackURL:(NSURL *)arg1 banState:(_Bool)arg2;
- (void)setAvailableOffline:(_Bool)arg1;
- (_Bool)isPlaybackRestrictedForItemURL:(NSURL *)arg1 itemExplicit:(_Bool)arg2 playbackPrevented:(_Bool)arg3;
- (void)deleteRecommendedItemAtIndex:(unsigned long long)arg1;
- (id <SPTFreeTierRecommendationsTrackModelEntity>)recommendedItemAtIndex:(unsigned long long)arg1;
- (id <SPTFreeTierCollectionModelItemEntity>)itemAtIndex:(unsigned long long)arg1;
- (void)playTrackEntity:(id <SPTFreeTierCollectionModelItemEntity>)arg1 andPlayOrigin:(SPTPlayOrigin *)arg2;
- (void)shufflePlayWithPlayOrigin:(SPTPlayOrigin *)arg1 fallbackPlayer:(id <SPTPlayer>)arg2;
- (void)loadModel;
@end

