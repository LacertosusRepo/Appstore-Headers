//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCoreLoginControllerDelegate.h"
#import "SPTLoginStateController.h"

@class NSDictionary, NSError, NSString, SPCore, SPFacebookSSO, SPTHTTPService, SPTImageLoaderServiceManager, SPTLoginDeferredDispatcher, SPTNetworkConnectivityController, SPTSessionObserver, SPTStartupTracer;

@interface SPTLoginStateControllerImplementation : NSObject <SPTCoreLoginControllerDelegate, SPTLoginStateController>
{
    _Bool _userDidSignUp;
    SPCore *_core;
    SPFacebookSSO *_facebookSSO;
    NSError *_lastConnectionError;
    SPTNetworkConnectivityController *_networkConnectivityController;
    SPTImageLoaderServiceManager *_imageLoaderServiceManager;
    SPTHTTPService *_httpService;
    id <SPTLogCenter> _logCenter;
    id <SPTCrashReporter> _crashReporter;
    SPTStartupTracer *_startupTracer;
    CDUnknownBlockType _loginDoneBlock;
    SPTSessionObserver *_sessionObserver;
    id <SPTFacebookSDK> _facebookSDK;
    id <SPTStateController> _stateController;
    id <SPTMetaViewController> _metaviewController;
    CDUnknownBlockType _containerLogoutHandler;
    id <SPTLoginKeychainManager> _keychainManager;
    id <SPTAlertController> _alertController;
    id <SPTSessionServicesLoader> _sessionServicesLoader;
    NSDictionary *_facebookUserInfo;
    SPTLoginDeferredDispatcher *_deferredErrorDispatcher;
}

@property(nonatomic) _Bool userDidSignUp; // @synthesize userDidSignUp=_userDidSignUp;
@property(retain, nonatomic) SPTLoginDeferredDispatcher *deferredErrorDispatcher; // @synthesize deferredErrorDispatcher=_deferredErrorDispatcher;
@property(retain, nonatomic) NSDictionary *facebookUserInfo; // @synthesize facebookUserInfo=_facebookUserInfo;
@property(retain, nonatomic) id <SPTSessionServicesLoader> sessionServicesLoader; // @synthesize sessionServicesLoader=_sessionServicesLoader;
@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) id <SPTLoginKeychainManager> keychainManager; // @synthesize keychainManager=_keychainManager;
@property(readonly, nonatomic) CDUnknownBlockType containerLogoutHandler; // @synthesize containerLogoutHandler=_containerLogoutHandler;
@property(retain, nonatomic) id <SPTMetaViewController> metaviewController; // @synthesize metaviewController=_metaviewController;
@property(retain, nonatomic) id <SPTStateController> stateController; // @synthesize stateController=_stateController;
@property(readonly, nonatomic) id <SPTFacebookSDK> facebookSDK; // @synthesize facebookSDK=_facebookSDK;
@property(retain, nonatomic) SPTSessionObserver *sessionObserver; // @synthesize sessionObserver=_sessionObserver;
@property(copy, nonatomic) CDUnknownBlockType loginDoneBlock; // @synthesize loginDoneBlock=_loginDoneBlock;
@property(nonatomic) __weak SPTStartupTracer *startupTracer; // @synthesize startupTracer=_startupTracer;
@property(retain, nonatomic) id <SPTCrashReporter> crashReporter; // @synthesize crashReporter=_crashReporter;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(retain, nonatomic) SPTHTTPService *httpService; // @synthesize httpService=_httpService;
@property(retain, nonatomic) SPTImageLoaderServiceManager *imageLoaderServiceManager; // @synthesize imageLoaderServiceManager=_imageLoaderServiceManager;
@property(retain, nonatomic) SPTNetworkConnectivityController *networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(retain, nonatomic) NSError *lastConnectionError; // @synthesize lastConnectionError=_lastConnectionError;
@property(retain, nonatomic) SPFacebookSSO *facebookSSO; // @synthesize facebookSSO=_facebookSSO;
@property(nonatomic) __weak SPCore *core; // @synthesize core=_core;
- (void).cxx_destruct;
- (void)dealloc;
- (void)sessionObserverDidReceiveAutoUpdate;
- (void)showAutoUpdateAlert;
- (void)loginCompleteWithError:(id)arg1;
- (void)reloginWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)switchToUserWithCredentials:(id)arg1 options:(id)arg2 shouldCreateUI:(_Bool)arg3 isFacebookLogin:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)switchToUserWithCredentials:(id)arg1 options:(id)arg2 shouldCreateUI:(_Bool)arg3 isFacebookLogin:(_Bool)arg4;
- (void)switchToUserWithCredentials:(id)arg1 options:(id)arg2 shouldCreateUI:(_Bool)arg3;
- (void)logoutForgetUser:(_Bool)arg1;
- (void)loginWithFacebookUserInfo:(id)arg1;
- (void)loginWithFacebookSSOWithCompletion:(CDUnknownBlockType)arg1;
- (void)loginWithCredentials:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loginWithCredentials:(id)arg1 options:(id)arg2 userDidSignUp:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)loginWithStoredCredentials:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)notifyServicesOnLoginWithCore:(id)arg1 logCenter:(id)arg2;
- (_Bool)handleLoginError:(id)arg1;
- (id)core:(id)arg1 localizedDescriptionForLoginErrorCode:(int)arg2;
- (void)coreDidLogout:(id)arg1;
- (void)coreWillTeardown:(id)arg1;
- (void)coreRequestsLogout:(id)arg1;
- (void)notifyThatWeWillLogOut;
- (void)coreDidRelogin:(id)arg1 withError:(id)arg2 isPermanent:(_Bool)arg3;
- (void)core:(id)arg1 failedLoginWithError:(id)arg2;
- (void)coreDidLogin:(id)arg1;
- (void)coreRequestsUserswitch:(id)arg1 newUser:(id)arg2 options:(id)arg3;
- (_Bool)shouldTeardownUIForLogout;
- (void)prepareForShutdown;
@property(nonatomic) _Bool allowErrorDispatch;
- (id)initWithCore:(id)arg1 facebookSDK:(id)arg2 logCenter:(id)arg3 crashReporter:(id)arg4 startupTracer:(id)arg5 stateController:(id)arg6 containerLogoutHandler:(CDUnknownBlockType)arg7 httpService:(id)arg8 imageLoaderServiceManager:(id)arg9 keychainManager:(id)arg10 networkConnectivityController:(id)arg11 metaViewController:(id)arg12 alertController:(id)arg13 sessionServicesLoader:(id)arg14 deferredErrorDispatcher:(id)arg15;
- (id)sessionStateAwaiter;
- (id)waitForLoginCompletion;
- (id)waitForLogoutCompletion;
- (id)taskedRelogin;
- (id)taskedLogoutForgetUser:(_Bool)arg1;
- (id)taskedLoginWithCredentials:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

