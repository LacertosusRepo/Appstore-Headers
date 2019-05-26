//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTNowPlayingBaseHeadUnitViewController.h"

#import "SPTNowPlayingModelObserver-Protocol.h"
#import "SPTNowPlayingTrackPositionObserver-Protocol.h"

@class CADisplayLink, GLUELabel, NSArray, NSString, SPTNowPlayingBaseHeadUnitController, SPTNowPlayingBaseHeadUnitView, SPTNowPlayingLogger, SPTNowPlayingModel, SPTNowPlayingSkipLimitReachedMessageRequester;
@protocol SPTAdNowPlayingRemoteControlPolicy, SPTAdsManager, SPTQueueLogger;

@interface SPTNowPlayingAdHeadUnitViewController : SPTNowPlayingBaseHeadUnitViewController <SPTNowPlayingTrackPositionObserver, SPTNowPlayingModelObserver>
{
    int _skipDelayLabelWidth;
    SPTNowPlayingBaseHeadUnitController *_headUnitController;
    SPTNowPlayingModel *_model;
    id <SPTAdsManager> _adsManager;
    SPTNowPlayingSkipLimitReachedMessageRequester *_skipLimitReachedMessageRequester;
    SPTNowPlayingLogger *_logger;
    id <SPTQueueLogger> _queueLogger;
    id <SPTAdNowPlayingRemoteControlPolicy> _remoteControlPolicy;
    GLUELabel *_skipDelayLabel;
    CADisplayLink *_displayLink;
    NSArray *_layoutConstraints;
}

@property(copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(readonly) int skipDelayLabelWidth; // @synthesize skipDelayLabelWidth=_skipDelayLabelWidth;
@property(retain, nonatomic) GLUELabel *skipDelayLabel; // @synthesize skipDelayLabel=_skipDelayLabel;
@property(retain, nonatomic) id <SPTAdNowPlayingRemoteControlPolicy> remoteControlPolicy; // @synthesize remoteControlPolicy=_remoteControlPolicy;
@property(retain, nonatomic) id <SPTQueueLogger> queueLogger; // @synthesize queueLogger=_queueLogger;
@property(retain, nonatomic) SPTNowPlayingLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTNowPlayingSkipLimitReachedMessageRequester *skipLimitReachedMessageRequester; // @synthesize skipLimitReachedMessageRequester=_skipLimitReachedMessageRequester;
@property(retain, nonatomic) id <SPTAdsManager> adsManager; // @synthesize adsManager=_adsManager;
@property(retain, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
@property(retain, nonatomic) SPTNowPlayingBaseHeadUnitController *headUnitController; // @synthesize headUnitController=_headUnitController;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)updateButtons:(_Bool)arg1;
- (int)findBestSkipDelayLabelWidth;
- (void)updateButtons;
- (id)provideRemoteControlPolicy;
- (void)nowPlayingModel:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)nowPlayingModelDidUpdateMetadata:(id)arg1;
- (void)viewDidLoad;
- (void)updateSkipDelayLabel;
- (id)skipDelayAttributedText:(unsigned long long)arg1;
- (void)onDisplayLink:(id)arg1;
- (void)createSkipDelayLabel;
- (void)nowPlayingTrackPositionDidChange:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithModel:(id)arg1 theme:(id)arg2 adsManager:(id)arg3 skipLimitReachedMessageRequester:(id)arg4 logger:(id)arg5 queueLogger:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTNowPlayingBaseHeadUnitView *view; // @dynamic view;

@end
