//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GCKDiscoveryManagerListener-Protocol.h"
#import "GCKSessionDelegate-Protocol.h"

@class GCKAnalyticsEventLogger, GCKBWeakListenerList, GCKCastOptions, GCKCastSession, GCKDatabase, GCKDeviceProviderRegistry, GCKDiscoveryManager, GCKNNetworkReachability, GCKSavedSessionState, GCKSession, NSMutableDictionary, NSString, NSTimer;

@interface GCKSessionManager : NSObject <GCKDiscoveryManagerListener, GCKSessionDelegate>
{
    GCKAnalyticsEventLogger *_analyticsEventLogger;
    GCKCastOptions *_castOptions;
    GCKDeviceProviderRegistry *_deviceProviderRegistry;
    GCKDiscoveryManager *_discoveryManager;
    GCKNNetworkReachability *_networkReachability;
    GCKDatabase *_database;
    GCKBWeakListenerList *_listenerList;
    GCKBWeakListenerList *_internalListenerList;
    GCKSavedSessionState *_savedSessionState;
    NSMutableDictionary *_defaultSessionOptions;
    _Bool _isRegisteredForAppStateNotifications;
    _Bool _startingSession;
    NSTimer *_analyticsLoggingTimer;
    NSMutableDictionary *_allKnownSessions;
    NSMutableDictionary *_movingSessions;
    GCKSession *_currentSession;
    GCKCastSession *_currentCastSession;
}

@property(retain, nonatomic) GCKCastSession *currentCastSession; // @synthesize currentCastSession=_currentCastSession;
@property(retain, nonatomic) GCKSession *currentSession; // @synthesize currentSession=_currentSession;
- (void).cxx_destruct;
- (void)notifyDidFailToMoveCastSession:(id)arg1 error:(id)arg2;
- (void)notifyDidMoveCastSession:(id)arg1;
- (void)notifyWillMoveCastSession:(id)arg1;
- (void)notifyDidFailToUpdateCastSession:(id)arg1 devices:(id)arg2 error:(id)arg3;
- (void)notifyDidUpdateCastSession:(id)arg1 failedToUpdateDeviceIDs:(id)arg2;
- (void)notifyDidUpdateDefaultSessionOptionsForDeviceCategory:(id)arg1;
- (void)notifyDidReceiveDeviceStatus:(id)arg1 session:(id)arg2;
- (void)notifyDidReceiveDeviceVolume:(float)arg1 muted:(_Bool)arg2 session:(id)arg3;
- (void)notifyDidUpdateDeviceFromSession:(id)arg1;
- (void)notifyDidEndSession:(id)arg1 error:(id)arg2;
- (void)notifyWillEndSession:(id)arg1;
- (void)notifyDidResumeSession:(id)arg1;
- (void)notifyWillResumeSession:(id)arg1;
- (void)notifyDidSuspendSession:(id)arg1 reason:(long long)arg2;
- (void)notifyDidFailToStartSession:(id)arg1 error:(id)arg2;
- (void)notifyDidStartSession:(id)arg1;
- (void)notifyWillStartSession:(id)arg1;
- (void)updateGuestModeEntryWithSession:(id)arg1;
- (id)entryWithSession:(id)arg1;
- (void)session:(id)arg1 didFailToMoveEndpoint:(id)arg2 error:(id)arg3;
- (void)sessionDidMoveEndpoint:(id)arg1;
- (void)session:(id)arg1 willMoveEndpoint:(id)arg2;
- (void)session:(id)arg1 didReceiveDeviceStatus:(id)arg2;
- (void)session:(id)arg1 didReceiveDeviceVolume:(float)arg2 muted:(_Bool)arg3;
- (void)session:(id)arg1 didEndWithError:(id)arg2 willTryToResume:(_Bool)arg3;
- (void)session:(id)arg1 didFailToStartWithError:(id)arg2;
- (void)sessionDidStart:(id)arg1;
- (void)didUpdateDevice:(id)arg1 atIndex:(unsigned long long)arg2 andMoveToIndex:(unsigned long long)arg3;
- (void)didUpdateDevice:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)handleNetworkReachabilityChange:(id)arg1;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)unregisterForAppStateNotifications;
- (void)registerForAppStateNotifications;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)clearSavedSessionState;
- (void)releaseSession:(id)arg1;
- (id)trackSession:(id)arg1 asCurrentSession:(_Bool)arg2;
- (void)removeInternalListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addInternalListener:(id)arg1;
- (void)addListener:(id)arg1;
- (struct NSDictionary *)defaultSessionOptionsForDeviceCategory:(id)arg1;
- (void)setDefaultSessionOptions:(struct NSDictionary *)arg1 forDeviceCategory:(id)arg2;
- (void)updateCurrentCastSessionToDevices:(id)arg1;
- (void)loggingTimerDidFire:(id)arg1;
- (void)invalidateSessionLoggingTimer;
- (void)createSessionLoggingTimer;
- (_Bool)hasSavedSessionState;
- (_Bool)hasConnectedCastSession;
- (_Bool)hasConnectedSession;
- (void)handleDeviceChange:(id)arg1;
- (void)attemptToResumeSavedSession;
- (void)attemptToResumeSession:(id)arg1 reason:(int)arg2;
- (_Bool)suspendSessionEntry:(id)arg1 reason:(long long)arg2;
- (_Bool)suspendSession:(id)arg1 reason:(long long)arg2;
- (_Bool)suspendSessionWithReason:(long long)arg1;
- (_Bool)endSessionAndStopCasting:(_Bool)arg1;
- (_Bool)endSession;
- (_Bool)startSessionWithDevice:(id)arg1 sessionOptions:(struct NSDictionary *)arg2 sessionID:(id)arg3 resumeReason:(int)arg4;
- (_Bool)startSessionWithOpenURLOptions:(id)arg1 sessionOptions:(struct NSDictionary *)arg2;
- (_Bool)startSessionWithDevice:(id)arg1 sessionOptions:(struct NSDictionary *)arg2;
- (_Bool)startSessionWithDevice:(id)arg1;
- (_Bool)joinSessionOnDevice:(id)arg1 sessionOptions:(struct NSDictionary *)arg2;
- (id)castSessionForDeviceID:(id)arg1;
- (id)sessionForDeviceID:(id)arg1;
- (id)castSessionOnDevice:(id)arg1;
- (id)sessionOnDevice:(id)arg1;
- (id)dedupeSessions:(id)arg1;
- (id)movingSessions;
- (id)allCastSessions;
- (id)allSessions;
- (void)dealloc;
@property(readonly, nonatomic) long long connectionState;
- (id)init;
- (id)initWithDeviceProviderRegistry:(id)arg1;
- (id)initWithAnalyticsEventLogger:(id)arg1 castOptions:(id)arg2 deviceProviderRegistry:(id)arg3 discoveryManager:(id)arg4 networkReachability:(id)arg5 database:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

