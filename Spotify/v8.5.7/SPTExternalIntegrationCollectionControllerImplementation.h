//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCollectionPlatformObserver-Protocol.h"
#import "SPTExternalIntegrationCollectionController-Protocol.h"

@class NSString, SPTExternalIntegrationPlatformLoggerImplementation, SPTObserverManager;
@protocol SPTCollectionPlatform, SPTCollectionPlatformConfiguration, SPTCollectionPlatformTestManager, SPTExternalIntegrationDebugLog, SPTExternalIntegrationPlaybackController;

@interface SPTExternalIntegrationCollectionControllerImplementation : NSObject <SPTCollectionPlatformObserver, SPTExternalIntegrationCollectionController>
{
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTCollectionPlatformTestManager> _collectionPlatformTestManager;
    id <SPTExternalIntegrationPlaybackController> _playbackController;
    SPTObserverManager *_observerManager;
    SPTExternalIntegrationPlatformLoggerImplementation *_logger;
    id <SPTExternalIntegrationDebugLog> _debugLog;
}

@property(readonly, nonatomic) id <SPTExternalIntegrationDebugLog> debugLog; // @synthesize debugLog=_debugLog;
@property(readonly, nonatomic) SPTExternalIntegrationPlatformLoggerImplementation *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
@property(readonly, nonatomic) id <SPTCollectionPlatformTestManager> collectionPlatformTestManager; // @synthesize collectionPlatformTestManager=_collectionPlatformTestManager;
@property(readonly, nonatomic) id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
- (void).cxx_destruct;
- (void)collectionPlatformDidChange:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) id <SPTCollectionPlatformConfiguration> configuration;
- (void)removeContentFromCollectionWithURI:(id)arg1 accessorySessionID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addContentToCollectionWithURI:(id)arg1 fromContext:(id)arg2 accessorySessionID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)canAddTrackToCollectionWithURI:(id)arg1;
- (void)collectionContainsContentWithURI:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithCollectionPlatform:(id)arg1 collectionPlatformTestManager:(id)arg2 playbackController:(id)arg3 debugLog:(id)arg4 logger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

