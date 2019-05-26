//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInAppMessageBannerMessageWebViewContentDelegate-Protocol.h"
#import "SPTOfflineModeStateObserver-Protocol.h"

@class NSDictionary, NSString, SPTInAppMessageBannerMessageViewModel, SPTInAppMessageNotePresentationManagerImplementation, SPTInAppMessageNowPlayingManagerRegistryImplementation, SPTInAppMessageServiceLogger;
@protocol SPTBannerPresentationManager, SPTBannerPresentationManagerTicket, SPTExternalIntegrationDriverDistractionController, SPTOfflineModeState;

@interface SPTInAppMessageBannerPresentationController : NSObject <SPTInAppMessageBannerMessageWebViewContentDelegate, SPTOfflineModeStateObserver>
{
    _Bool _presentingBanner;
    _Bool _offline;
    SPTInAppMessageBannerMessageViewModel *_bannerViewModel;
    id <SPTBannerPresentationManager> _bannerPresentationManager;
    id <SPTOfflineModeState> _offlineModeState;
    SPTInAppMessageNowPlayingManagerRegistryImplementation *_nowPlayingManagerRegistry;
    id <SPTExternalIntegrationDriverDistractionController> _driverDistractionController;
    SPTInAppMessageServiceLogger *_serviceLogger;
    id <SPTBannerPresentationManagerTicket> _bannerTicket;
    NSDictionary *_cancelationInfo;
    SPTInAppMessageNotePresentationManagerImplementation *_notePresentationManager;
}

@property(retain, nonatomic) SPTInAppMessageNotePresentationManagerImplementation *notePresentationManager; // @synthesize notePresentationManager=_notePresentationManager;
@property(nonatomic, getter=isOffline) _Bool offline; // @synthesize offline=_offline;
@property(copy, nonatomic) NSDictionary *cancelationInfo; // @synthesize cancelationInfo=_cancelationInfo;
@property(retain, nonatomic) id <SPTBannerPresentationManagerTicket> bannerTicket; // @synthesize bannerTicket=_bannerTicket;
@property(retain, nonatomic) SPTInAppMessageServiceLogger *serviceLogger; // @synthesize serviceLogger=_serviceLogger;
@property(retain, nonatomic) id <SPTExternalIntegrationDriverDistractionController> driverDistractionController; // @synthesize driverDistractionController=_driverDistractionController;
@property(retain, nonatomic) SPTInAppMessageNowPlayingManagerRegistryImplementation *nowPlayingManagerRegistry; // @synthesize nowPlayingManagerRegistry=_nowPlayingManagerRegistry;
@property(nonatomic) __weak id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(retain, nonatomic) id <SPTBannerPresentationManager> bannerPresentationManager; // @synthesize bannerPresentationManager=_bannerPresentationManager;
@property(retain, nonatomic) SPTInAppMessageBannerMessageViewModel *bannerViewModel; // @synthesize bannerViewModel=_bannerViewModel;
@property(nonatomic, getter=isPresentingBanner) _Bool presentingBanner; // @synthesize presentingBanner=_presentingBanner;
- (void).cxx_destruct;
- (void)cancelBannerMessagePresentation:(id)arg1;
- (void)logMessageDiscardedWithReason:(id)arg1;
- (_Bool)canPresentBanner;
- (void)dismissBanner;
- (void)presentBanner;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithBannerPresentationManager:(id)arg1 bannerViewModel:(id)arg2 offlineModeState:(id)arg3 driverDistractionController:(id)arg4 nowPlayingManagerRegistry:(id)arg5 serviceLogger:(id)arg6 notePresentationManager:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
