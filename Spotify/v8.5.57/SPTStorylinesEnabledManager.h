//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTOfflineModeStateObserver-Protocol.h"

@class NSString, SPTStorylinesDataLoader, SPTStorylinesEnabledTracks, SPTStorylinesEnabledTracksCache, SPTStorylinesEnabledTracksLoadingState, SPTStorylinesEntitiesLoadEventLogger, SPTStorylinesTestManager;
@protocol SPTOfflineModeState;

@interface SPTStorylinesEnabledManager : NSObject <SPTOfflineModeStateObserver>
{
    SPTStorylinesEnabledTracksLoadingState *_loadingState;
    SPTStorylinesDataLoader *_dataLoader;
    id <SPTOfflineModeState> _offlineModeState;
    SPTStorylinesEnabledTracksCache *_enabledTracksCache;
    SPTStorylinesEntitiesLoadEventLogger *_entitiesLogger;
    SPTStorylinesTestManager *_testManager;
    SPTStorylinesEnabledTracks *_enabledTracks;
}

@property(retain, nonatomic) SPTStorylinesEnabledTracks *enabledTracks; // @synthesize enabledTracks=_enabledTracks;
@property(retain, nonatomic) SPTStorylinesTestManager *testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) SPTStorylinesEntitiesLoadEventLogger *entitiesLogger; // @synthesize entitiesLogger=_entitiesLogger;
@property(retain, nonatomic) SPTStorylinesEnabledTracksCache *enabledTracksCache; // @synthesize enabledTracksCache=_enabledTracksCache;
@property(retain, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(retain, nonatomic) SPTStorylinesDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(readonly, nonatomic) SPTStorylinesEnabledTracksLoadingState *loadingState; // @synthesize loadingState=_loadingState;
- (void).cxx_destruct;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (id)storylinesIdentifierForTrack:(id)arg1;
- (void)loadEntitiesListWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadEnabledUris;
- (_Bool)storylinesEnabledForTrack:(id)arg1;
- (id)initWithDataLoader:(id)arg1 offlineModeState:(id)arg2 enabledTracksCache:(id)arg3 entitiesLogger:(id)arg4 testManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

