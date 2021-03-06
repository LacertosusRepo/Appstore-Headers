//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTNowPlayingBaseHeadUnitViewController.h"

#import "SPTNowPlayingRemoteControlPolicyUpdateOserver.h"

@class NSString, SPTNowPlayingBaseHeadUnitController, SPTNowPlayingLogger, SPTNowPlayingModel, SPTNowPlayingRadioHeadUnitView, SPTProgressView;

@interface SPTNowPlayingRadioHeadUnitViewController : SPTNowPlayingBaseHeadUnitViewController <SPTNowPlayingRemoteControlPolicyUpdateOserver>
{
    _Bool _heartsEverywhereEnabled;
    SPTNowPlayingModel *_model;
    SPTNowPlayingBaseHeadUnitController *_headUnitController;
    id <SPTUpsellManager> _upsellManager;
    id <SPTNowPlayingRemoteControlPolicy> _remoteControlPolicy;
    SPTNowPlayingLogger *_logger;
    id <SPTQueueLogger> _queueLogger;
    SPTProgressView *_progressView;
}

@property(nonatomic) _Bool heartsEverywhereEnabled; // @synthesize heartsEverywhereEnabled=_heartsEverywhereEnabled;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) id <SPTQueueLogger> queueLogger; // @synthesize queueLogger=_queueLogger;
@property(retain, nonatomic) SPTNowPlayingLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTNowPlayingRemoteControlPolicy> remoteControlPolicy; // @synthesize remoteControlPolicy=_remoteControlPolicy;
@property(nonatomic) __weak id <SPTUpsellManager> upsellManager; // @synthesize upsellManager=_upsellManager;
@property(retain, nonatomic) SPTNowPlayingBaseHeadUnitController *headUnitController; // @synthesize headUnitController=_headUnitController;
@property(retain, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)negativeFeedbackButton;
- (id)positiveFeedbackButton;
- (id)provideRemoteControlPolicy;
- (void)remoteControlPolicyDidChange:(id)arg1;
- (void)hideImprovingStationProgressViewWithError:(id)arg1;
- (void)showImprovingStationProgressView;
- (void)radioFeedbackButtonTouchedUpInside:(_Bool)arg1;
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
- (id)initWithModel:(id)arg1 theme:(id)arg2 logger:(id)arg3 queueLogger:(id)arg4 upsellManager:(id)arg5 remoteControlPolicy:(id)arg6 heartsEverywhereEnabled:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTNowPlayingRadioHeadUnitView *view; // @dynamic view;

@end

