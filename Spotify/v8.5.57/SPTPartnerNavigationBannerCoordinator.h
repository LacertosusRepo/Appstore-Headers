//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCarDetectionStateObserver-Protocol.h"
#import "SPTPartnerNavigationBannerViewModelActionHandler-Protocol.h"
#import "SPTPartnerNavigationIntegrationObserver-Protocol.h"

@class NSString, SPTPartnerIntegrationStateLoader, SPTPartnerNavigationBannerPresentationContext, SPTPartnerTestManagerImplementation;
@protocol SPTBannerPresentationManager, SPTBannerPresentationManagerTicket, SPTCarDetector, SPTLinkDispatcher, SPTNowPlayingManager, SPTNowPlayingStateObservable, SPTPartnerLogger;

@interface SPTPartnerNavigationBannerCoordinator : NSObject <SPTPartnerNavigationIntegrationObserver, SPTCarDetectionStateObserver, SPTPartnerNavigationBannerViewModelActionHandler>
{
    id <SPTCarDetector> _carDetector;
    SPTPartnerIntegrationStateLoader *_integrationLoader;
    id <SPTBannerPresentationManager> _bannerPresenter;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTPartnerNavigationBannerPresentationContext *_presentationContext;
    id <SPTBannerPresentationManagerTicket> _bannerTicket;
    id <SPTNowPlayingStateObservable> _nowPlayingStateObservable;
    id <SPTNowPlayingManager> _nowPlayingManager;
    SPTPartnerTestManagerImplementation *_testManager;
    id <SPTPartnerLogger> _logger;
}

@property(readonly, nonatomic) id <SPTPartnerLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) __weak SPTPartnerTestManagerImplementation *testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) __weak id <SPTNowPlayingManager> nowPlayingManager; // @synthesize nowPlayingManager=_nowPlayingManager;
@property(readonly, nonatomic) __weak id <SPTNowPlayingStateObservable> nowPlayingStateObservable; // @synthesize nowPlayingStateObservable=_nowPlayingStateObservable;
@property(nonatomic) __weak id <SPTBannerPresentationManagerTicket> bannerTicket; // @synthesize bannerTicket=_bannerTicket;
@property(retain, nonatomic) SPTPartnerNavigationBannerPresentationContext *presentationContext; // @synthesize presentationContext=_presentationContext;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <SPTBannerPresentationManager> bannerPresenter; // @synthesize bannerPresenter=_bannerPresenter;
@property(readonly, nonatomic) SPTPartnerIntegrationStateLoader *integrationLoader; // @synthesize integrationLoader=_integrationLoader;
@property(readonly, nonatomic) id <SPTCarDetector> carDetector; // @synthesize carDetector=_carDetector;
- (void).cxx_destruct;
- (void)selectIntegration:(id)arg1 forViewModel:(id)arg2;
- (void)selectMoreOptionsForViewModel:(id)arg1;
- (void)dismissBannerForViewModel:(id)arg1;
- (void)navigationIntegration:(id)arg1 didChangeNavigationStatus:(_Bool)arg2;
- (void)carDetector:(id)arg1 didChangeCarConnected:(_Bool)arg2;
- (void)dismissIntegrationPickerBanner;
- (void)handleTicketStatusChangeForTicket:(id)arg1 viewModel:(id)arg2;
- (void)presentIntegrationPickerBannerWithIntegrations:(id)arg1;
- (void)fetchIntegrationsAndPresentIntegrationPickerBanner;
- (id)initWithCarDetector:(id)arg1 integrationLoader:(id)arg2 bannerPresenter:(id)arg3 linkDispatcher:(id)arg4 nowPlayingManager:(id)arg5 nowPlayingStateObservable:(id)arg6 testManager:(id)arg7 logger:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

