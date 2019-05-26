//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlayerObserver-Protocol.h"
#import "SPTSpeakerCompanionPageBannerViewModelDelegate-Protocol.h"
#import "SPTSpeakerCompanionPageDataLoaderDelegate-Protocol.h"

@class NSNotificationCenter, NSString, SPTSpeakerCompanionLogger, SPTSpeakerCompanionPageBannerViewModel, SPTSpeakerCompanionPageDataLoader, SPTSpeakerCompanionPageResponse, SPTSpeakerCompanionResultsPageViewModel, SPTSpeakerCompanionTestManager;
@protocol SPTExternalIntegrationPlaybackController, SPTLinkDispatcher, SPTLocalSettings, SPTPlayer;

@interface SPTSpeakerCompanionPageViewModel : NSObject <SPTPlayerObserver, SPTSpeakerCompanionPageDataLoaderDelegate, SPTSpeakerCompanionPageBannerViewModelDelegate>
{
    _Bool _subscribed;
    SPTSpeakerCompanionPageBannerViewModel *_bannerViewModel;
    SPTSpeakerCompanionResultsPageViewModel *_resultsViewModel;
    SPTSpeakerCompanionPageDataLoader *_dataLoader;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTSpeakerCompanionTestManager *_testManager;
    NSNotificationCenter *_notificationCenter;
    SPTSpeakerCompanionLogger *_logger;
    id <SPTPlayer> _player;
    id <SPTExternalIntegrationPlaybackController> _playbackController;
    id <SPTLocalSettings> _localSettings;
    NSString *_requestId;
    SPTSpeakerCompanionPageResponse *_mostRecentResponse;
}

@property(retain, nonatomic) SPTSpeakerCompanionPageResponse *mostRecentResponse; // @synthesize mostRecentResponse=_mostRecentResponse;
@property(nonatomic) _Bool subscribed; // @synthesize subscribed=_subscribed;
@property(copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTExternalIntegrationPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) SPTSpeakerCompanionLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) SPTSpeakerCompanionTestManager *testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) SPTSpeakerCompanionPageDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) SPTSpeakerCompanionResultsPageViewModel *resultsViewModel; // @synthesize resultsViewModel=_resultsViewModel;
@property(retain, nonatomic) SPTSpeakerCompanionPageBannerViewModel *bannerViewModel; // @synthesize bannerViewModel=_bannerViewModel;
- (void).cxx_destruct;
- (void)didPresentBannerWithCompanionPageBannerViewModel:(id)arg1;
- (void)companionPageBannerViewModelWantsToShowMoreResults:(id)arg1;
- (void)speakerCompanionPageLoader:(id)arg1 didUpdateSpeakerActivityResponse:(id)arg2;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (_Bool)shouldShowCompanionPageBanner;
- (void)unsubscribeToPlayerState;
- (void)subscribeToPlayerState;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)setupApplicationStateObservers;
- (id)initWithDataLoader:(id)arg1 linkDispatcher:(id)arg2 playbackController:(id)arg3 testManager:(id)arg4 notificationCenter:(id)arg5 logger:(id)arg6 player:(id)arg7 localSettings:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

