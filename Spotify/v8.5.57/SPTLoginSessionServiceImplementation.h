//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext, SPTLoginKeychainCredentialsWriter, SPTLoginLinkAccountManager, SPTLoginSignupMarketingOptInFlashController;
@protocol SPTCoreService, SPTGLUEService, SPTLoginLoggingService, SPTLoginService, SPTNetworkService, SPTNotificationsService, SPTPreSignupExperimentationService, SPTSessionService, SPTURIDispatchService, _TtP16ProfileV2Feature19SPTProfileV2Service_;

@interface SPTLoginSessionServiceImplementation : NSObject <SPTService>
{
    id <SPTCoreService> _coreService;
    id <SPTLoginService> _loginService;
    id <SPTLoginLoggingService> _loginLoggerService;
    id <SPTSessionService> _sessionService;
    id <SPTURIDispatchService> _URIDispatchService;
    id <SPTNotificationsService> _notificationsService;
    id <SPTNetworkService> _networkService;
    id <SPTGLUEService> _glueService;
    id <SPTPreSignupExperimentationService> _psesService;
    id <_TtP16ProfileV2Feature19SPTProfileV2Service_> _profileService;
    SPTLoginKeychainCredentialsWriter *_credentialsWriter;
    SPTLoginSignupMarketingOptInFlashController *_marketingOptInController;
    SPTLoginLinkAccountManager *_linkAccountManager;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTLoginLinkAccountManager *linkAccountManager; // @synthesize linkAccountManager=_linkAccountManager;
@property(retain, nonatomic) SPTLoginSignupMarketingOptInFlashController *marketingOptInController; // @synthesize marketingOptInController=_marketingOptInController;
@property(retain, nonatomic) SPTLoginKeychainCredentialsWriter *credentialsWriter; // @synthesize credentialsWriter=_credentialsWriter;
@property(nonatomic) __weak id <_TtP16ProfileV2Feature19SPTProfileV2Service_> profileService; // @synthesize profileService=_profileService;
@property(nonatomic) __weak id <SPTPreSignupExperimentationService> psesService; // @synthesize psesService=_psesService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTNotificationsService> notificationsService; // @synthesize notificationsService=_notificationsService;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(nonatomic) __weak id <SPTLoginLoggingService> loginLoggerService; // @synthesize loginLoggerService=_loginLoggerService;
@property(nonatomic) __weak id <SPTLoginService> loginService; // @synthesize loginService=_loginService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
- (void).cxx_destruct;
- (void)storePreferredLocale;
- (void)initialViewDidAppear;
- (void)unregisterLinkAccountWebgateHTTPHost;
- (void)registerLinkAccountWebgateHTTPHost;
- (void)unload;
- (void)idleStateWasReached;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

