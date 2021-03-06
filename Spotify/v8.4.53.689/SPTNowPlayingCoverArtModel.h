//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTNowPlayingCarouselModelDelegate.h"
#import "SPTNowPlayingTrackMetadataQueueObserver.h"

@class NSString, NSURL, SPTNowPlayingAuxiliaryActionsModel, SPTNowPlayingCarouselModel, SPTNowPlayingModel, SPTNowPlayingTrackMetadataQueue, SPTNowPlayingTrackPosition, SPTPlayerTrack;

@interface SPTNowPlayingCoverArtModel : NSObject <SPTNowPlayingCarouselModelDelegate, SPTNowPlayingTrackMetadataQueueObserver>
{
    id <SPTNowPlayingCoverArtModelDelegate> _delegate;
    SPTNowPlayingCarouselModel *_carouselModel;
    SPTNowPlayingAuxiliaryActionsModel *_auxiliaryActionsModel;
    SPTNowPlayingTrackMetadataQueue *_trackMetadataQueue;
    NSURL *_stagedContextImageURL;
    SPTNowPlayingModel *_model;
    NSString *_sessionId;
    double _timestamp;
}

@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSURL *stagedContextImageURL; // @synthesize stagedContextImageURL=_stagedContextImageURL;
@property(retain, nonatomic) SPTNowPlayingTrackMetadataQueue *trackMetadataQueue; // @synthesize trackMetadataQueue=_trackMetadataQueue;
@property(retain, nonatomic) SPTNowPlayingAuxiliaryActionsModel *auxiliaryActionsModel; // @synthesize auxiliaryActionsModel=_auxiliaryActionsModel;
@property(retain, nonatomic) SPTNowPlayingCarouselModel *carouselModel; // @synthesize carouselModel=_carouselModel;
@property(nonatomic) __weak id <SPTNowPlayingCoverArtModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)trackMetadataQueue:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)trackMetadataQueue:(id)arg1 didStageContextImageURL:(id)arg2;
- (void)carouselModelDidChangeLoadingState:(id)arg1;
- (void)carouselModel:(id)arg1 requestsAnimation:(unsigned long long)arg2;
@property(readonly, nonatomic) SPTNowPlayingTrackPosition *trackPosition;
@property(readonly, nonatomic) SPTPlayerTrack *displayedMetadata;
- (void)dragToRight;
- (void)attemptDragToLeft;
- (void)dragToLeft;
- (_Bool)canShowRelativePage:(long long)arg1;
- (_Bool)canScrollToRelativePage:(long long)arg1;
- (_Bool)canScroll;
@property(readonly, nonatomic, getter=isPaused) _Bool paused;
- (_Bool)isLoading;
- (_Bool)isInSyncWithPlayer;
- (_Bool)hasVideoAtRelativePage:(long long)arg1;
- (id)trackAtRelativePage:(long long)arg1;
- (id)trackURIAtRelativePage:(long long)arg1;
- (id)URLForImageAtRelativePage:(long long)arg1;
@property(readonly, nonatomic) NSURL *adsURLToOpen;
- (void)resetSessionId;
- (id)initWithTrackMetadataQueue:(id)arg1 playbackController:(id)arg2 auxiliaryActionsModel:(id)arg3 nowPlayingModel:(id)arg4 logger:(id)arg5 upsellManager:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

