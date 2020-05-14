//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTMetaViewControllerObserver-Protocol.h"
#import "SPTPageRegistryObserver-Protocol.h"
#import "SPTPhoneNumberSignupService-Protocol.h"

@class NSString, SPTAllocationContext, SPTPhoneNumberSignupFlowCoordinator, SPTPhoneNumberSignupUtils;
@protocol SPTContainerService, SPTGLUEService, SPTLoginLoggingService, SPTLoginService, SPTSignupService;

@interface SPTPhoneNumberSignupServiceImplementation : NSObject <SPTPageRegistryObserver, SPTMetaViewControllerObserver, SPTPhoneNumberSignupService>
{
    id <SPTContainerService> _containerService;
    id <SPTGLUEService> _glueService;
    id <SPTLoginService> _loginService;
    id <SPTSignupService> _signupService;
    id <SPTLoginLoggingService> _loggingService;
    SPTPhoneNumberSignupFlowCoordinator *_flowCoordinator;
    SPTPhoneNumberSignupUtils *_phoneNumberSignupUtils;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTPhoneNumberSignupUtils *phoneNumberSignupUtils; // @synthesize phoneNumberSignupUtils=_phoneNumberSignupUtils;
@property(retain, nonatomic) SPTPhoneNumberSignupFlowCoordinator *flowCoordinator; // @synthesize flowCoordinator=_flowCoordinator;
@property(nonatomic) __weak id <SPTLoginLoggingService> loggingService; // @synthesize loggingService=_loggingService;
@property(nonatomic) __weak id <SPTSignupService> signupService; // @synthesize signupService=_signupService;
@property(nonatomic) __weak id <SPTLoginService> loginService; // @synthesize loginService=_loginService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (void)willChangeRootViewOfMetaViewController:(id)arg1;
- (id)provideMetaViewController;
- (id)provideAllowedCallingCodes;
- (id)provideFlowCoordinator;
- (id)provideLoginStateController;
- (id)provideNavigationCoordinator;
- (id)provideTheme;
- (id)providePageRegistry;
- (id)providePhoneNumberEntryViewController;
- (id)provideDialogController;
- (void)pageRegistryDidUnregisterFeaturePages:(id)arg1;
- (void)registerViewControllers;
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
