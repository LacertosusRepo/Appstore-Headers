//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDailyMixFeature-Protocol.h"

@class NSString, SPTAllocationContext, SPTDailyMixLoggingService, SPTDailyMixManagerImplementation, SPTDailyMixUtils;
@protocol SPTAbbaService, SPTCollectionPlatformService, SPTContainerService, SPTDailyMixFeedbackUIModel, SPTDailyMixTestManager, SPTLocalSettings, SPTNetworkService, SPTNowPlayingRemoteControlPolicy, SPTPlayerFeature, SPTRadioService, SPTSessionService;

@interface SPTDailyMixServiceImplementation : NSObject <SPTDailyMixFeature>
{
    id <SPTSessionService> _clientSessionService;
    id <SPTContainerService> _containerService;
    id <SPTAbbaService> _abbaService;
    id <SPTDailyMixTestManager> _testManager;
    id <SPTLocalSettings> _localSettings;
    id <SPTNetworkService> _networkFeature;
    id <SPTPlayerFeature> _playback;
    SPTDailyMixUtils *_dailyMixUtils;
    SPTDailyMixManagerImplementation *_dailyMixManager;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTNowPlayingRemoteControlPolicy> _dailyMixRemoteControlPolicy;
    id <SPTDailyMixFeedbackUIModel> _dailyMixFeedbackUIModel;
    id <SPTRadioService> _radioService;
    SPTDailyMixLoggingService *_loggingService;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTDailyMixLoggingService *loggingService; // @synthesize loggingService=_loggingService;
@property(nonatomic) __weak id <SPTRadioService> radioService; // @synthesize radioService=_radioService;
@property(retain, nonatomic) id <SPTDailyMixFeedbackUIModel> dailyMixFeedbackUIModel; // @synthesize dailyMixFeedbackUIModel=_dailyMixFeedbackUIModel;
@property(retain, nonatomic) id <SPTNowPlayingRemoteControlPolicy> dailyMixRemoteControlPolicy; // @synthesize dailyMixRemoteControlPolicy=_dailyMixRemoteControlPolicy;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(retain, nonatomic) SPTDailyMixManagerImplementation *dailyMixManager; // @synthesize dailyMixManager=_dailyMixManager;
@property(retain, nonatomic) SPTDailyMixUtils *dailyMixUtils; // @synthesize dailyMixUtils=_dailyMixUtils;
@property(nonatomic) __weak id <SPTPlayerFeature> playback; // @synthesize playback=_playback;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) id <SPTDailyMixTestManager> testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
- (void).cxx_destruct;
- (id)provideDailyMixLoggingService;
- (id)provideDailyMixRemoteControlPolicy;
- (id)provideStationViewController:(id)arg1 context:(id)arg2;
- (id)provideDailyMixTestManager;
- (id)provideDailyMixManager;
- (id)provideDailyMixFeedbackUIModel;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

