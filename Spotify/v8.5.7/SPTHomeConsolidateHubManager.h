//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EXP_HUBComponentDefaults, EXP_HUBComponentRegistry, SPTHomeConsolidateCommandHandlerFactory, SPTHomeConsolidateContentOperationFactory, SPTHomeConsolidateEndpointFactory;
@protocol EXP_HUBContentOperation, EXP_SPTHubsRendererFactory, GLUETheme, SPTFeedHeartBeatManager, SPTHomeConsolidateTestManager, SPTHomeUIService, SPTHugsFactory, SPTOfflineModeState, SPTRecentlyPlayedService;

@interface SPTHomeConsolidateHubManager : NSObject
{
    id <EXP_SPTHubsRendererFactory> _hubsRendererFactory;
    id <SPTHugsFactory> _hugsFactory;
    SPTHomeConsolidateContentOperationFactory *_contentOperationFactory;
    EXP_HUBComponentRegistry *_componentRegistry;
    id <GLUETheme> _GLUETheme;
    id <SPTOfflineModeState> _offlineModeState;
    SPTHomeConsolidateEndpointFactory *_endpointFactory;
    id <EXP_HUBContentOperation> _removeComponentContentOperation;
    id <SPTFeedHeartBeatManager> _feedHeartbeatManager;
    SPTHomeConsolidateCommandHandlerFactory *_commandHandlerFactory;
    id <SPTHomeUIService> _homeUIService;
    id <SPTHomeConsolidateTestManager> _testManager;
    id <SPTRecentlyPlayedService> _recentlyPlayedService;
    EXP_HUBComponentDefaults *_componentDefaults;
}

@property(retain, nonatomic) EXP_HUBComponentDefaults *componentDefaults; // @synthesize componentDefaults=_componentDefaults;
@property(nonatomic) __weak id <SPTRecentlyPlayedService> recentlyPlayedService; // @synthesize recentlyPlayedService=_recentlyPlayedService;
@property(readonly, nonatomic) __weak id <SPTHomeConsolidateTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) __weak id <SPTHomeUIService> homeUIService; // @synthesize homeUIService=_homeUIService;
@property(readonly, nonatomic) SPTHomeConsolidateCommandHandlerFactory *commandHandlerFactory; // @synthesize commandHandlerFactory=_commandHandlerFactory;
@property(retain, nonatomic) id <SPTFeedHeartBeatManager> feedHeartbeatManager; // @synthesize feedHeartbeatManager=_feedHeartbeatManager;
@property(retain, nonatomic) id <EXP_HUBContentOperation> removeComponentContentOperation; // @synthesize removeComponentContentOperation=_removeComponentContentOperation;
@property(readonly, nonatomic) SPTHomeConsolidateEndpointFactory *endpointFactory; // @synthesize endpointFactory=_endpointFactory;
@property(readonly, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) id <GLUETheme> GLUETheme; // @synthesize GLUETheme=_GLUETheme;
@property(readonly, nonatomic) EXP_HUBComponentRegistry *componentRegistry; // @synthesize componentRegistry=_componentRegistry;
@property(readonly, nonatomic) SPTHomeConsolidateContentOperationFactory *contentOperationFactory; // @synthesize contentOperationFactory=_contentOperationFactory;
@property(readonly, nonatomic) id <SPTHugsFactory> hugsFactory; // @synthesize hugsFactory=_hugsFactory;
@property(readonly, nonatomic) id <EXP_SPTHubsRendererFactory> hubsRendererFactory; // @synthesize hubsRendererFactory=_hubsRendererFactory;
- (void).cxx_destruct;
- (id)makeCommandDispatcherWithURL:(id)arg1 referrerIdentifier:(id)arg2 hubLogger:(id)arg3 viewModelProvider:(id)arg4;
- (id)commonContentOperationsIncludeErrorHandler:(_Bool)arg1;
- (id)appendCommonOperationsTo:(id)arg1 includeErrorHandler:(_Bool)arg2;
- (id)makeRemoteContentLoadingOperationForURL:(id)arg1 sourceIdentifier:(id)arg2;
- (id)makeRemoteViewModelLoaderForURL:(id)arg1 sourceIdentifier:(id)arg2;
- (id)makeCachedViewModelLoader;
- (id)makeViewModelProviderForURL:(id)arg1 sourceIdentifier:(id)arg2;
- (id)provideHubViewControllerForURL:(id)arg1 sourceIdentifier:(id)arg2 referrerIdentifier:(id)arg3;
- (id)initWithHubsRendererFactory:(id)arg1 hugsFactory:(id)arg2 endpointFactory:(id)arg3 contentOperationFactory:(id)arg4 componentRegistry:(id)arg5 GLUETheme:(id)arg6 offlineModeState:(id)arg7 homeUIService:(id)arg8 testManager:(id)arg9 feedHeartbeatManager:(id)arg10 commandHandlerFactory:(id)arg11;

@end

