//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTNowPlayingBaseHeadUnitViewController.h"

#import "SPTNowPlayingAuxiliaryActionsModelObserver-Protocol.h"
#import "SPTNowPlayingRemoteControlPolicyUpdateObserver-Protocol.h"

@class NSString, SPTNowPlayingBaseHeadUnitController, SPTNowPlayingLogger, SPTNowPlayingModel, SPTNowPlayingRadioHeadUnitView, SPTNowPlayingSkipLimitReachedMessageRequester, SPTProgressView;
@protocol SPTNowPlayingRemoteControlPolicy, SPTQueueLogger;

@interface SPTNowPlayingRadioHeadUnitViewController : SPTNowPlayingBaseHeadUnitViewController <SPTNowPlayingRemoteControlPolicyUpdateObserver, SPTNowPlayingAuxiliaryActionsModelObserver>
{
    SPTNowPlayingModel *_model;
    SPTNowPlayingBaseHeadUnitController *_headUnitController;
    SPTNowPlayingSkipLimitReachedMessageRequester *_skipLimitReachedMessageRequester;
    id <SPTNowPlayingRemoteControlPolicy> _remoteControlPolicy;
    SPTNowPlayingLogger *_logger;
    id <SPTQueueLogger> _queueLogger;
    SPTProgressView *_progressView;
}

@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) id <SPTQueueLogger> queueLogger; // @synthesize queueLogger=_queueLogger;
@property(retain, nonatomic) SPTNowPlayingLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTNowPlayingRemoteControlPolicy> remoteControlPolicy; // @synthesize remoteControlPolicy=_remoteControlPolicy;
@property(readonly, nonatomic) SPTNowPlayingSkipLimitReachedMessageRequester *skipLimitReachedMessageRequester; // @synthesize skipLimitReachedMessageRequester=_skipLimitReachedMessageRequester;
@property(retain, nonatomic) SPTNowPlayingBaseHeadUnitController *headUnitController; // @synthesize headUnitController=_headUnitController;
@property(retain, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)negativeFeedbackButton;
- (id)positiveFeedbackButton;
- (id)provideRemoteControlPolicy;
- (void)auxiliaryActionsModelDidChangeCollectionState:(id)arg1;
- (void)remoteControlPolicyDidChange:(id)arg1;
- (void)hideImprovingStationProgressViewWithError:(id)arg1;
- (void)showImprovingStationProgressView;
- (void)handleHeartsSomewhereRadioFeedbackButtonTouchedUpInside:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)radioFeedbackButtonTouchedUpInside:(_Bool)arg1;
- (void)updateUIForHeartsEverywhere;
- (void)needUpdateUI;
- (_Bool)radioNegativeFeedbackSelected;
- (_Bool)radioPositiveFeedbackSelected;
- (_Bool)radioFeedbackEnabled;
- (void)negativeFeedbackButtonTouchedUpInside:(id)arg1;
- (void)positiveFeedbackButtonTouchedUpInside:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithModel:(id)arg1 theme:(id)arg2 logger:(id)arg3 queueLogger:(id)arg4 skipLimitReachedMessageRequester:(id)arg5 remoteControlPolicy:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTNowPlayingRadioHeadUnitView *view; // @dynamic view;

@end
