//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASAuthorizationControllerDelegate-Protocol.h"
#import "ASAuthorizationControllerPresentationContextProviding-Protocol.h"
#import "SPTLoginThirdPartyLoginController-Protocol.h"

@class NSString, SPTAuthenticationHandler, SPTLoginASAuthorizationControllerFactory, SPTLoginAppleAuthorizationControllerLogger, SPTLoginTestManager, SPTSigninWithAppleCompatibilityProvider, SPTSigninWithAppleHandler, SPTSignupAttemptTrackerImplementation;
@protocol SPTDialogController, SPTLoginNavigationCoordinator, SPTLoginThirdPartyLoginControllerDelegate;

@interface SPTLoginAppleAuthorizationController : NSObject <ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding, SPTLoginThirdPartyLoginController>
{
    id <SPTLoginThirdPartyLoginControllerDelegate> delegate;
    SPTAuthenticationHandler *_authenticationHandler;
    SPTLoginTestManager *_testManager;
    id <SPTDialogController> _dialogController;
    SPTLoginAppleAuthorizationControllerLogger *_logger;
    id <SPTLoginNavigationCoordinator> _navigationCoordinator;
    SPTSigninWithAppleHandler *_appleHandler;
    SPTSignupAttemptTrackerImplementation *_signupAttemptTracker;
    SPTSigninWithAppleCompatibilityProvider *_compatibilityProvider;
    SPTLoginASAuthorizationControllerFactory *_appleAuthControllerFactory;
    NSString *_appleIDUser;
}

@property(copy, nonatomic) NSString *appleIDUser; // @synthesize appleIDUser=_appleIDUser;
@property(readonly, nonatomic) SPTLoginASAuthorizationControllerFactory *appleAuthControllerFactory; // @synthesize appleAuthControllerFactory=_appleAuthControllerFactory;
@property(readonly, nonatomic) SPTSigninWithAppleCompatibilityProvider *compatibilityProvider; // @synthesize compatibilityProvider=_compatibilityProvider;
@property(readonly, nonatomic) SPTSignupAttemptTrackerImplementation *signupAttemptTracker; // @synthesize signupAttemptTracker=_signupAttemptTracker;
@property(readonly, nonatomic) SPTSigninWithAppleHandler *appleHandler; // @synthesize appleHandler=_appleHandler;
@property(readonly, nonatomic) id <SPTLoginNavigationCoordinator> navigationCoordinator; // @synthesize navigationCoordinator=_navigationCoordinator;
@property(readonly, nonatomic) SPTLoginAppleAuthorizationControllerLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTDialogController> dialogController; // @synthesize dialogController=_dialogController;
@property(readonly, nonatomic) SPTLoginTestManager *testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) SPTAuthenticationHandler *authenticationHandler; // @synthesize authenticationHandler=_authenticationHandler;
@property(nonatomic) __weak id <SPTLoginThirdPartyLoginControllerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)handleUserDidAuthenticateNotification:(id)arg1;
- (void)showAppleSignUpNotAvailable;
- (void)showAppleSignUpDisabled;
- (void)showAcountAlreadyExistDialogWithSignupInfo:(id)arg1;
- (void)logEventForDialogWithType:(unsigned long long)arg1 error:(id)arg2;
- (void)authorizationController:(id)arg1 didCompleteWithError:(id)arg2;
- (void)authorizationController:(id)arg1 didCompleteWithAuthorization:(id)arg2;
- (id)presentationAnchorForAuthorizationController:(id)arg1;
- (_Bool)isAppleSignInCustomButtonEnabled;
- (_Bool)isAppleSignInSystemButtonEnabled;
- (void)startLoginWithThirdParty;
- (void)showPasswordAutofillDialog;
- (id)initWithAuthenticationHandler:(id)arg1 navigationCoordinator:(id)arg2 testManager:(id)arg3 dialogController:(id)arg4 logger:(id)arg5 appleHandler:(id)arg6 signupAttemptTracker:(id)arg7 compatibilityProvider:(id)arg8 appleAuthControllerFactory:(id)arg9 notificationCenter:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

