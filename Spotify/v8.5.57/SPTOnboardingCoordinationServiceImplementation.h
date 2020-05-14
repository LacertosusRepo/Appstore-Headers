//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTOnboardingCoordinationService-Protocol.h"
#import "SPTURISubtypeHandler-Protocol.h"

@class NSString, SPTAllocationContext, SPTOnboardingCoordinationFeatureProperties, SPTOnboardingCoordinationManager;
@protocol SPTContainerService, SPTFreeTierTasteOnboardingService, SPTLanguageOnboardingService, SPTLoginService, SPTRemoteConfigurationService, SPTUIPresentationService, SPTURIDispatchService, _TtP24PodcastOnboardingFeature27SPTPodcastOnboardingService_;

@interface SPTOnboardingCoordinationServiceImplementation : NSObject <SPTURISubtypeHandler, SPTOnboardingCoordinationService>
{
    id <SPTContainerService> _containerService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <SPTUIPresentationService> _uiPresentationService;
    id <SPTLoginService> _loginService;
    id <SPTURIDispatchService> _uriDispatchService;
    id <SPTFreeTierTasteOnboardingService> _tasteOnboardingService;
    id <SPTLanguageOnboardingService> _languageOnboardingService;
    id <_TtP24PodcastOnboardingFeature27SPTPodcastOnboardingService_> _podcastOnboardingService;
    SPTOnboardingCoordinationFeatureProperties *_properties;
    SPTOnboardingCoordinationManager *_coordinationManager;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTOnboardingCoordinationManager *coordinationManager; // @synthesize coordinationManager=_coordinationManager;
@property(retain, nonatomic) SPTOnboardingCoordinationFeatureProperties *properties; // @synthesize properties=_properties;
@property(nonatomic) __weak id <_TtP24PodcastOnboardingFeature27SPTPodcastOnboardingService_> podcastOnboardingService; // @synthesize podcastOnboardingService=_podcastOnboardingService;
@property(nonatomic) __weak id <SPTLanguageOnboardingService> languageOnboardingService; // @synthesize languageOnboardingService=_languageOnboardingService;
@property(nonatomic) __weak id <SPTFreeTierTasteOnboardingService> tasteOnboardingService; // @synthesize tasteOnboardingService=_tasteOnboardingService;
@property(nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
@property(nonatomic) __weak id <SPTLoginService> loginService; // @synthesize loginService=_loginService;
@property(nonatomic) __weak id <SPTUIPresentationService> uiPresentationService; // @synthesize uiPresentationService=_uiPresentationService;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (long long)URISubtypeHandlerOpenURI:(id)arg1 context:(id)arg2;
- (_Bool)URISubtypeHandlerCanHandleURI:(id)arg1;
- (void)unregisterLinkHandler;
- (void)registerLinkHandler;
- (id)flowCoordinators;
- (void)initializeCoordinationManager;
- (void)coordinateOnboardingForUpdate;
- (void)coordinateOnboardingForTheFirstTime;
- (_Bool)didUserSignUp;
- (void)disableFeature;
- (void)enableFeature;
- (void)setupRemoteConfiguration;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
