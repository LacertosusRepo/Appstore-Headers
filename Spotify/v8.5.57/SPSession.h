//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTConnectivityManagerDelegate-Protocol.h"

@class NSMapTable, NSString, SPTApplicationStateTracker, SPTAudioVolumeControl, SPTAuthSession, SPTCoreClientFeatures, SPTHermesController, SPTIncognitoModeHandler, SPTLogger, SPTOfflineModeNotifier, SPTPlayerMftCanPlayChecker, SPTPlayerProxyContextPlayer, SPTSocialManager, SPTUserFactory;
@protocol SPTAsyncScheduler, SPTConnectivityManager, SPTEntityService, SPTOauthClient, SPTOfflineManager, SPTProductState, SPTResolver;

@interface SPSession : NSObject <SPTConnectivityManagerDelegate>
{
    NSMapTable *_observers;
    struct scoped_connection _accesspointForcedUpdateConnection;
    struct scoped_connection _accesspointTemporaryConnectionErrorConnection;
    struct scoped_connection _loginModeChangedConnection;
    _Bool _isOnline;
    _Bool _isOffline;
    _Bool _isLoggedIn;
    long long _currentLoginMode;
    id <SPTConnectivityManager> _connectivityManager;
    id <SPTAsyncScheduler> _scheduler;
    SPTAuthSession *_session;
    SPTOfflineModeNotifier *_offlineNotifier;
    SPTCoreClientFeatures *_clientFeatures;
}

@property(readonly, nonatomic) SPTCoreClientFeatures *clientFeatures; // @synthesize clientFeatures=_clientFeatures;
@property(readonly, nonatomic) SPTOfflineModeNotifier *offlineNotifier; // @synthesize offlineNotifier=_offlineNotifier;
@property(readonly, nonatomic) __weak SPTAuthSession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <SPTAsyncScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(nonatomic) __weak id <SPTConnectivityManager> connectivityManager; // @synthesize connectivityManager=_connectivityManager;
@property(nonatomic) long long currentLoginMode; // @synthesize currentLoginMode=_currentLoginMode;
@property(nonatomic) _Bool isLoggedIn; // @synthesize isLoggedIn=_isLoggedIn;
@property(nonatomic) _Bool isOffline; // @synthesize isOffline=_isOffline;
@property(nonatomic) _Bool isOnline; // @synthesize isOnline=_isOnline;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)webTokenRequestForURL:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
@property(readonly, nonatomic) NSString *currentAP;
- (void)processLoginModeChanged;
- (void)processTemporaryConnectionErrorWithStatus:(int)arg1 connectionError:(id)arg2;
- (void)processAutoUpdateEvent;
- (const struct ClientFeatureStack *)clientFeatureStack;
- (void)acceptLicenses:(id)arg1;
- (void)unacceptedLicencesWithCallback:(CDUnknownBlockType)arg1;
- (void)logout;
- (void)tryReconnect:(_Bool)arg1 toAp:(id)arg2;
- (void)updateOnlineStates;
- (void)loginModeChanged;
- (void)enumerateObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)prepareForShutdown;
- (void)flushCaches;
- (void)teardownServices;
- (void)removeObserver:(id)arg1 onQueue:(id)arg2;
- (void)addObserver:(id)arg1 onQueue:(id)arg2;
- (void)connectivityManagerStateDidChange:(id)arg1;
- (void)invalidate;
@property(readonly, nonatomic) id <SPTProductState> productState;
@property(readonly, nonatomic) NSString *verbatimUsername;
@property(readonly, nonatomic) NSString *currentUsername;
- (id)initWithCore:(id)arg1 coreCreateOptions:(id)arg2 isPerfTracingEnabled:(_Bool)arg3 session:(id)arg4 connectivityManager:(id)arg5 prefs:(struct Prefs *)arg6 scheduler:(id)arg7;
@property(readonly, nonatomic) SPTIncognitoModeHandler *incognitoModeHandler;
@property(readonly, nonatomic) id <SPTOfflineManager> offlineManager;
@property(readonly, nonatomic) SPTUserFactory *userFactory;
@property(readonly, nonatomic) SPTSocialManager *socialManager;
@property(readonly, nonatomic) SPTPlayerProxyContextPlayer *proxyContextPlayer;
@property(readonly, nonatomic) SPTPlayerMftCanPlayChecker *mftCanPlayChecker;
@property(readonly, nonatomic) SPTAudioVolumeControl *audioVolumeControl;
@property(readonly, nonatomic) id <SPTEntityService> entityService;
@property(readonly, nonatomic) id <SPTOauthClient> oauthClient;
@property(readonly, nonatomic) SPTHermesController *hermes;
@property(readonly, nonatomic) SPTLogger *logger;
@property(readonly, nonatomic) SPTApplicationStateTracker *applicationStateTracker;
@property(readonly, nonatomic) id <SPTResolver> cosmosRouter;

@end

