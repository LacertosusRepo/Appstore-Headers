//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFreeTierLoginServiceObserver.h"
#import "SPTPageRegistryObserver.h"
#import "SPTService.h"

@class NSString, SPTAllocationContext, SPTFreeTierSignupConfigurationDataLoader, SPTFreeTierSignupUserInfoModel;

@interface SPTFreeTierSignupServiceImplementation : NSObject <SPTPageRegistryObserver, SPTFreeTierLoginServiceObserver, SPTService>
{
    id <SPTURIDispatchService> _URIDispatchService;
    id <SPTFreeTierLoginService> _loginService;
    id <SPTContainerService> _containerService;
    id <SPTGLUEService> _glueService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTNetworkService> _networkService;
    id <SPTServiceManagerService> _serviceManagerService;
    id <SPTUserTrackingService> _userTrackingService;
    id <SPTPreSignupExperimentationService> _experimentationService;
    SPTFreeTierSignupUserInfoModel *_userInfoModel;
    SPTFreeTierSignupConfigurationDataLoader *_configurationDataLoader;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTFreeTierSignupConfigurationDataLoader *configurationDataLoader; // @synthesize configurationDataLoader=_configurationDataLoader;
@property(retain, nonatomic) SPTFreeTierSignupUserInfoModel *userInfoModel; // @synthesize userInfoModel=_userInfoModel;
@property(nonatomic) __weak id <SPTPreSignupExperimentationService> experimentationService; // @synthesize experimentationService=_experimentationService;
@property(nonatomic) __weak id <SPTUserTrackingService> userTrackingService; // @synthesize userTrackingService=_userTrackingService;
@property(nonatomic) __weak id <SPTServiceManagerService> serviceManagerService; // @synthesize serviceManagerService=_serviceManagerService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTFreeTierLoginService> loginService; // @synthesize loginService=_loginService;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
- (void).cxx_destruct;
- (void)loginServiceWillLaunchLoginUI;
- (void)pageRegistryDidUnregisterFeaturePages:(id)arg1;
- (void)pageRegistry:(id)arg1 didCreateViewController:(id)arg2 forViewURI:(id)arg3;
- (void)loadSignupConfiguration;
- (id)provideStepThreeViewController;
- (id)provideStepTwoViewController;
- (id)provideStepOneViewController;
- (id)provideFacebookConfirmationViewController:(id)arg1 context:(id)arg2;
- (id)provideTermsAndPolicyViewModelWithTheme:(id)arg1;
- (void)registerSignupViewControllers;
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
