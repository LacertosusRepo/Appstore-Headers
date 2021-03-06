//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPStepScrollViewDataSource.h"
#import "SPStepScrollViewDelegate.h"
#import "SPTNowPlayingTrackMetadataQueueObserver.h"

@class NSString, NSURL, SPStepScrollView, SPTNowPlayingBarModel;

@interface SPTPlayerTrackScrollDataSource : NSObject <SPTNowPlayingTrackMetadataQueueObserver, SPStepScrollViewDataSource, SPStepScrollViewDelegate>
{
    SPStepScrollView *_scrollView;
    id <SPTPlayerTrackScrollDataSourceDelegate> _delegate;
    id <SPTPlayerTrackScrollViewOffsetDelegate> _offsetDelegate;
    NSURL *_currentTrack;
    NSString *_currentUID;
    NSURL *_currentContext;
    SPTNowPlayingBarModel *_nowPlayingModel;
    id <SPTUpsellManager> _upsellManager;
}

@property(nonatomic) __weak id <SPTUpsellManager> upsellManager; // @synthesize upsellManager=_upsellManager;
@property(retain, nonatomic) SPTNowPlayingBarModel *nowPlayingModel; // @synthesize nowPlayingModel=_nowPlayingModel;
@property(retain, nonatomic) NSURL *currentContext; // @synthesize currentContext=_currentContext;
@property(retain, nonatomic) NSString *currentUID; // @synthesize currentUID=_currentUID;
@property(retain, nonatomic) NSURL *currentTrack; // @synthesize currentTrack=_currentTrack;
@property(nonatomic) __weak id <SPTPlayerTrackScrollViewOffsetDelegate> offsetDelegate; // @synthesize offsetDelegate=_offsetDelegate;
@property(nonatomic) __weak id <SPTPlayerTrackScrollDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SPStepScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)trackMetadataQueueDidFinishUpdating:(id)arg1;
- (void)stepScrollViewDidScroll:(id)arg1;
- (void)stepScrollView:(id)arg1 didAttemptScrollToRelativeIndex:(long long)arg2;
- (void)stepScrollView:(id)arg1 didScrollToRelativeIndex:(long long)arg2;
- (id)stepScrollView:(id)arg1 pageViewAtRelativeIndex:(long long)arg2;
- (void)configureAllPageViews;
- (void)configurePageView:(id)arg1 atRelativeIndex:(long long)arg2;
- (long long)stepScrollView:(id)arg1 numberOfStepsInDirection:(int)arg2;
- (void)currentTrackChanged:(id)arg1;
- (void)contextTracksChanged;
- (void)hibernate;
- (void)awken;
- (id)initWithStepScrollView:(id)arg1 nowPlayingModel:(id)arg2 upsellManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

