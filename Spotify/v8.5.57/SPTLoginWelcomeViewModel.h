//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLoginActionButtonsViewModel-Protocol.h"
#import "SPTLoginThirdPartyLoginControllerDelegate-Protocol.h"

@class NSArray, NSString, SPTLoginAppleAuthorizationController, SPTLoginButtonActionHandler, SPTLoginDbManager, SPTLoginErrorDecorator, SPTLoginTestManager, SPTLoginWelcomeViewImageryURLProvider, SPTLoginWelcomeViewLogger;
@protocol SPTDialogController, SPTLoginStateController, SPTLoginThirdPartyLoginHandlerDelegate;

@interface SPTLoginWelcomeViewModel : NSObject <SPTLoginThirdPartyLoginControllerDelegate, SPTLoginActionButtonsViewModel>
{
    _Bool _savedCredentialsDialogShownOnce;
    _Bool _didLogViewLaunchTime;
    _Bool _guestModeEnabled;
    NSArray *_actionButtons;
    SPTLoginButtonActionHandler *_actionButtonHandler;
    id <SPTLoginThirdPartyLoginHandlerDelegate> _delegate;
    SPTLoginTestManager *_testManager;
    id <SPTLoginStateController> _loginStateController;
    SPTLoginErrorDecorator *_errorDecorator;
    SPTLoginAppleAuthorizationController *_appleAuthController;
    id <SPTDialogController> _dialogController;
    SPTLoginDbManager *_databaseManager;
    SPTLoginWelcomeViewLogger *_logger;
    SPTLoginWelcomeViewImageryURLProvider *_imageryURLProvider;
}

@property(nonatomic, getter=isGuestModeEnabled) _Bool guestModeEnabled; // @synthesize guestModeEnabled=_guestModeEnabled;
@property(nonatomic) _Bool didLogViewLaunchTime; // @synthesize didLogViewLaunchTime=_didLogViewLaunchTime;
@property(readonly, nonatomic) SPTLoginWelcomeViewImageryURLProvider *imageryURLProvider; // @synthesize imageryURLProvider=_imageryURLProvider;
@property(readonly, nonatomic) SPTLoginWelcomeViewLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTLoginDbManager *databaseManager; // @synthesize databaseManager=_databaseManager;
@property(nonatomic) _Bool savedCredentialsDialogShownOnce; // @synthesize savedCredentialsDialogShownOnce=_savedCredentialsDialogShownOnce;
@property(readonly, nonatomic) id <SPTDialogController> dialogController; // @synthesize dialogController=_dialogController;
@property(readonly, nonatomic) SPTLoginAppleAuthorizationController *appleAuthController; // @synthesize appleAuthController=_appleAuthController;
@property(readonly, nonatomic) SPTLoginErrorDecorator *errorDecorator; // @synthesize errorDecorator=_errorDecorator;
@property(readonly, nonatomic) id <SPTLoginStateController> loginStateController; // @synthesize loginStateController=_loginStateController;
@property(readonly, nonatomic) SPTLoginTestManager *testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPTLoginThirdPartyLoginHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SPTLoginButtonActionHandler *actionButtonHandler; // @synthesize actionButtonHandler=_actionButtonHandler;
@property(readonly, nonatomic) NSArray *actionButtons; // @synthesize actionButtons=_actionButtons;
- (void).cxx_destruct;
- (void)performActionForButtonWithTag:(unsigned long long)arg1;
- (void)logDidFinishLoadImageWithError:(id)arg1;
- (void)logDidStartLoadImageForScreenWidth:(double)arg1;
- (void)logUserDidSeeViewWithInterfaceOrientation:(long long)arg1 fromLogout:(_Bool)arg2;
- (id)contextViewForThirdPartyLoginController:(id)arg1;
- (void)controllerDidFinishThirdPartyLogin:(id)arg1;
- (void)controllerDidStartThirdPartyLogin:(id)arg1;
- (void)showSavedCredentialsDialog;
- (id)welcomeTitle;
- (void)logoutForgetUser:(_Bool)arg1;
- (void)cleanStickyCredentialsData;
- (id)welcomeImageryURL;
- (id)helpText;
- (id)spotifyLogo:(struct CGSize)arg1;
- (id)initWithLoginStateController:(id)arg1 logger:(id)arg2 appleAuthController:(id)arg3 dialogController:(id)arg4 databaseManager:(id)arg5 testManager:(id)arg6 imageryURLProvider:(id)arg7 guestModeEnabled:(_Bool)arg8 actionButtons:(id)arg9 actionButtonHandler:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

