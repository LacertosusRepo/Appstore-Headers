//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTNowPlayingBaseHeadUnitViewController.h"

#import "SPTDailyMixFeedbackUIModelObserver-Protocol.h"
#import "SPTNowPlayingRemoteControlPolicyUpdateObserver-Protocol.h"

@class NSString, NSURL, SPTNowPlayingBaseHeadUnitController, SPTNowPlayingFeedbackHeadUnitView, SPTNowPlayingLogger, SPTNowPlayingModel, SPTNowPlayingSkipLimitReachedMessageRequester;
@protocol SPContextMenuFeature, SPTContextMenuPresenter, SPTDailyMixFeedbackUIModel, SPTFeedbackViewModel, SPTNowPlayingRemoteControlPolicy, SPTPSXTestManager, SPTQueueLogger;

@interface SPTNowPlayingFeedbackHeadUnitViewController : SPTNowPlayingBaseHeadUnitViewController <SPTNowPlayingRemoteControlPolicyUpdateObserver, SPTDailyMixFeedbackUIModelObserver>
{
    id <SPTPSXTestManager> _psxTestManager;
    NSURL *_contextURI;
    id <SPTFeedbackViewModel> _feedbackViewModel;
    SPTNowPlayingModel *_model;
    SPTNowPlayingBaseHeadUnitController *_headUnitController;
    SPTNowPlayingSkipLimitReachedMessageRequester *_skipLimitReachedMessageRequester;
    id <SPTNowPlayingRemoteControlPolicy> _remoteControlPolicy;
    id <SPTDailyMixFeedbackUIModel> _dailyMixFeedbackUIModel;
    SPTNowPlayingLogger *_logger;
    id <SPTQueueLogger> _queueLogger;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTContextMenuPresenter> _presenter;
}

@property(retain, nonatomic) id <SPTContextMenuPresenter> presenter; // @synthesize presenter=_presenter;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(retain, nonatomic) id <SPTQueueLogger> queueLogger; // @synthesize queueLogger=_queueLogger;
@property(retain, nonatomic) SPTNowPlayingLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SPTDailyMixFeedbackUIModel> dailyMixFeedbackUIModel; // @synthesize dailyMixFeedbackUIModel=_dailyMixFeedbackUIModel;
@property(retain, nonatomic) id <SPTNowPlayingRemoteControlPolicy> remoteControlPolicy; // @synthesize remoteControlPolicy=_remoteControlPolicy;
@property(readonly, nonatomic) SPTNowPlayingSkipLimitReachedMessageRequester *skipLimitReachedMessageRequester; // @synthesize skipLimitReachedMessageRequester=_skipLimitReachedMessageRequester;
@property(retain, nonatomic) SPTNowPlayingBaseHeadUnitController *headUnitController; // @synthesize headUnitController=_headUnitController;
@property(retain, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) id <SPTFeedbackViewModel> feedbackViewModel; // @synthesize feedbackViewModel=_feedbackViewModel;
@property(readonly, nonatomic) NSURL *contextURI; // @synthesize contextURI=_contextURI;
@property(readonly, nonatomic) id <SPTPSXTestManager> psxTestManager; // @synthesize psxTestManager=_psxTestManager;
- (void).cxx_destruct;
- (id)provideRemoteControlPolicy;
- (void)remoteControlPolicyDidChange:(id)arg1;
- (void)dailyMixFeedbackUIModelDidChange:(id)arg1;
- (void)needUpdateUI;
- (void)presentNegativeFeedbackOptions:(id)arg1;
- (void)positiveFeedbackButtonTouchedUpInside:(id)arg1;
- (void)negativeFeedbackButtonTouchedUpInside:(id)arg1;
- (id)psxBanActions;
- (id)dmBanActions;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithModel:(id)arg1 theme:(id)arg2 logger:(id)arg3 queueLogger:(id)arg4 skipLimitReachedMessageRequester:(id)arg5 remoteControlPolicy:(id)arg6 dailyMixFeedbackUIModel:(id)arg7 contextMenuFeature:(id)arg8 psxTestManager:(id)arg9 contextURI:(id)arg10 feedbackViewModel:(id)arg11 crashReporter:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTNowPlayingFeedbackHeadUnitView *view; // @dynamic view;

@end

