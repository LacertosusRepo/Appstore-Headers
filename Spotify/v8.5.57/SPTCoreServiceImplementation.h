//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCoreService-Protocol.h"

@class NSString, SPCore, SPTAllocationContext, SPTBootstrapCoreProxyImplementation, SPTCoreLogHandler, SPTCoreSchedulerThread, SPTEventSenderCoreProxyImplementation;
@protocol SPTAudioDriverController;

@interface SPTCoreServiceImplementation : NSObject <SPTCoreService>
{
    id <SPTAudioDriverController> _audioDriverController;
    SPTCoreLogHandler *_logHandler;
    SPTEventSenderCoreProxyImplementation *_eventSenderCoreProxy;
    SPTBootstrapCoreProxyImplementation *_bootstrapCoreProxy;
    SPTCoreSchedulerThread *_coreScheduler;
    SPCore *_core;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPCore *core; // @synthesize core=_core;
@property(retain, nonatomic) SPTCoreSchedulerThread *coreScheduler; // @synthesize coreScheduler=_coreScheduler;
@property(retain, nonatomic) SPTBootstrapCoreProxyImplementation *bootstrapCoreProxy; // @synthesize bootstrapCoreProxy=_bootstrapCoreProxy;
@property(retain, nonatomic) SPTEventSenderCoreProxyImplementation *eventSenderCoreProxy; // @synthesize eventSenderCoreProxy=_eventSenderCoreProxy;
@property(retain, nonatomic) SPTCoreLogHandler *logHandler; // @synthesize logHandler=_logHandler;
@property(retain, nonatomic) id <SPTAudioDriverController> audioDriverController; // @synthesize audioDriverController=_audioDriverController;
- (void).cxx_destruct;
- (id)settingsPath;
- (id)persistentCachePath;
- (id)volatileCachePath;
- (id)persistentCacheRoot;
- (id)volatileCacheRoot;
- (void)markForBackupExclusion:(id)arg1;
- (void)migrateCachesFromPath:(id)arg1 persistentPath:(id)arg2 volatilePath:(id)arg3;
- (id)legacyCachePath;
- (void)createAndMigratePathsForPersistentCache:(id)arg1 volatileCache:(id)arg2 settings:(id)arg3;
- (void)setupCoreWithAudioDriverController:(id)arg1;
- (void)setBootstrapModule:(id)arg1;
- (void)setEventSenderCore:(id)arg1;
- (id)provideAudioDriverController;
- (id)provideCoreLogDispatcher;
- (id)provideCoreInstance;
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

