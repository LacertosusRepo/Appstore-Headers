//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInAppMessageBannerMessagePriorityDeciderDelegate-Protocol.h"

@class NSString, SPTInAppMessageActionFactory, SPTInAppMessageBannerMessageParser, SPTInAppMessageBannerMessageViewModel, SPTInAppMessageBannerPresentationController, SPTInAppMessageNotePresentationManagerImplementation, SPTInAppMessageNowPlayingManagerRegistryImplementation, SPTInAppMessageServiceLogger;
@protocol SPTBannerPresentationManager, SPTExternalIntegrationDriverDistractionController, SPTOfflineModeState;

@interface SPTInAppMessageBannerMessageController : NSObject <SPTInAppMessageBannerMessagePriorityDeciderDelegate>
{
    SPTInAppMessageBannerPresentationController *_bannerPresentationController;
    id <SPTBannerPresentationManager> _bannerPresentationManager;
    SPTInAppMessageBannerMessageParser *_bannerMessageParser;
    SPTInAppMessageActionFactory *_actionFactory;
    SPTInAppMessageServiceLogger *_serviceLogger;
    SPTInAppMessageBannerMessageViewModel *_bannerMessageViewModel;
    id <SPTExternalIntegrationDriverDistractionController> _driverDistractionController;
    SPTInAppMessageNowPlayingManagerRegistryImplementation *_nowPlayingManagerRegistry;
    id <SPTOfflineModeState> _offlineModeState;
    SPTInAppMessageNotePresentationManagerImplementation *_notePresentationManager;
}

@property(retain, nonatomic) SPTInAppMessageNotePresentationManagerImplementation *notePresentationManager; // @synthesize notePresentationManager=_notePresentationManager;
@property(nonatomic) __weak id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(retain, nonatomic) SPTInAppMessageNowPlayingManagerRegistryImplementation *nowPlayingManagerRegistry; // @synthesize nowPlayingManagerRegistry=_nowPlayingManagerRegistry;
@property(retain, nonatomic) id <SPTExternalIntegrationDriverDistractionController> driverDistractionController; // @synthesize driverDistractionController=_driverDistractionController;
@property(retain, nonatomic) SPTInAppMessageBannerMessageViewModel *bannerMessageViewModel; // @synthesize bannerMessageViewModel=_bannerMessageViewModel;
@property(retain, nonatomic) SPTInAppMessageServiceLogger *serviceLogger; // @synthesize serviceLogger=_serviceLogger;
@property(retain, nonatomic) SPTInAppMessageActionFactory *actionFactory; // @synthesize actionFactory=_actionFactory;
@property(retain, nonatomic) SPTInAppMessageBannerMessageParser *bannerMessageParser; // @synthesize bannerMessageParser=_bannerMessageParser;
@property(retain, nonatomic) id <SPTBannerPresentationManager> bannerPresentationManager; // @synthesize bannerPresentationManager=_bannerPresentationManager;
@property(retain, nonatomic) SPTInAppMessageBannerPresentationController *bannerPresentationController; // @synthesize bannerPresentationController=_bannerPresentationController;
- (void).cxx_destruct;
- (void)bannerMessagePriorityDeciderDidFetchMessage:(id)arg1 forTrigger:(id)arg2;
- (id)initWithBannerPresentationManager:(id)arg1 bannerMessageParser:(id)arg2 actionFactory:(id)arg3 serviceLogger:(id)arg4 driverDistractionController:(id)arg5 nowPlayingManagerRegistry:(id)arg6 offlineModeState:(id)arg7 notePresentationManager:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
