//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EXP_HUBComponentDefaults, EXP_HUBComponentRegistry, NSDictionary, NSString, NSURL, SPTDataLoaderFactory;
@protocol EXP_HUBCommandHandler, EXP_HUBComponentFallbackHandler, EXP_HUBComponentLayoutManager, EXP_HUBIconImageResolver, EXP_HUBImageLoaderFactory, EXP_SPTHubCommandHandlerFactory, EXP_SPTHubContentOperationFactory, EXP_SPTHubLogger, EXP_SPTHubRemoteContentOperationURLResolver, GLUETheme, SPTCollectionEntityList, SPTFeedFeatureFlagExposureLogger, SPTFeedHeartBeatManager, SPTHomeBarButtonManagerFactory, SPTHomeFeatureContentOperationFactory, SPTHomeTestManager, SPTHomeUIService, SPTOfflineModeState, SPTRecentlyPlayedService;

@interface SPTHomeViewControllerBuilder : NSObject
{
    EXP_HUBComponentDefaults *_componentDefaults;
    id <EXP_HUBCommandHandler> _commandHandler;
    NSDictionary *_defaultCommandRegister;
    id <SPTRecentlyPlayedService> _recentlyPlayedService;
    id <GLUETheme> _glueTheme;
    id <EXP_SPTHubContentOperationFactory> _hubsContentOperationFactory;
    id <EXP_HUBComponentFallbackHandler> _fallbackHandler;
    id <EXP_HUBIconImageResolver> _iconImageResolver;
    id <EXP_SPTHubCommandHandlerFactory> _commandHandlerFactory;
    EXP_HUBComponentRegistry *_componentRegistry;
    id <EXP_HUBComponentLayoutManager> _componentLayoutManager;
    id <EXP_HUBImageLoaderFactory> _imageLoaderFactory;
    id <SPTCollectionEntityList> _collectionEntityList;
    id <EXP_SPTHubLogger> _hubLogger;
    SPTDataLoaderFactory *_dataLoaderFactory;
    id <SPTOfflineModeState> _offlineModeState;
    NSURL *_viewURI;
    NSString *_featureID;
    NSString *_pageIdentifier;
    id <EXP_SPTHubRemoteContentOperationURLResolver> _urlResolver;
    id <SPTHomeTestManager> _testManager;
    id <SPTHomeUIService> _uiService;
    id <SPTFeedHeartBeatManager> _feedHeartbeatManager;
    id <SPTFeedFeatureFlagExposureLogger> _feedFeatureFlagExposureLogger;
    id <SPTHomeBarButtonManagerFactory> _barButtonManagerFactory;
    id <SPTHomeFeatureContentOperationFactory> _customContentOperationFactory;
}

@property(readonly, nonatomic) id <SPTHomeFeatureContentOperationFactory> customContentOperationFactory; // @synthesize customContentOperationFactory=_customContentOperationFactory;
@property(retain, nonatomic) id <SPTHomeBarButtonManagerFactory> barButtonManagerFactory; // @synthesize barButtonManagerFactory=_barButtonManagerFactory;
@property(retain, nonatomic) id <SPTFeedFeatureFlagExposureLogger> feedFeatureFlagExposureLogger; // @synthesize feedFeatureFlagExposureLogger=_feedFeatureFlagExposureLogger;
@property(retain, nonatomic) id <SPTFeedHeartBeatManager> feedHeartbeatManager; // @synthesize feedHeartbeatManager=_feedHeartbeatManager;
@property(readonly, nonatomic) __weak id <SPTHomeUIService> uiService; // @synthesize uiService=_uiService;
@property(readonly, nonatomic) id <SPTHomeTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <EXP_SPTHubRemoteContentOperationURLResolver> urlResolver; // @synthesize urlResolver=_urlResolver;
@property(readonly, copy, nonatomic) NSString *pageIdentifier; // @synthesize pageIdentifier=_pageIdentifier;
@property(readonly, copy, nonatomic) NSString *featureID; // @synthesize featureID=_featureID;
@property(readonly, copy, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
@property(readonly, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
@property(readonly, nonatomic) id <EXP_SPTHubLogger> hubLogger; // @synthesize hubLogger=_hubLogger;
@property(readonly, nonatomic) id <SPTCollectionEntityList> collectionEntityList; // @synthesize collectionEntityList=_collectionEntityList;
@property(readonly, nonatomic) id <EXP_HUBImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(readonly, nonatomic) id <EXP_HUBComponentLayoutManager> componentLayoutManager; // @synthesize componentLayoutManager=_componentLayoutManager;
@property(readonly, nonatomic) EXP_HUBComponentRegistry *componentRegistry; // @synthesize componentRegistry=_componentRegistry;
@property(readonly, nonatomic) id <EXP_SPTHubCommandHandlerFactory> commandHandlerFactory; // @synthesize commandHandlerFactory=_commandHandlerFactory;
@property(readonly, nonatomic) id <EXP_HUBIconImageResolver> iconImageResolver; // @synthesize iconImageResolver=_iconImageResolver;
@property(readonly, nonatomic) id <EXP_HUBComponentFallbackHandler> fallbackHandler; // @synthesize fallbackHandler=_fallbackHandler;
@property(readonly, nonatomic) id <EXP_SPTHubContentOperationFactory> hubsContentOperationFactory; // @synthesize hubsContentOperationFactory=_hubsContentOperationFactory;
@property(readonly, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(readonly, nonatomic) __weak id <SPTRecentlyPlayedService> recentlyPlayedService; // @synthesize recentlyPlayedService=_recentlyPlayedService;
@property(readonly, nonatomic) id <EXP_HUBCommandHandler> commandHandler; // @synthesize commandHandler=_commandHandler;
- (void).cxx_destruct;
- (id)makeGradientImageURIContentOperation;
- (id)makeRecentlyPlayedContentOperationsCachingTestEnabled:(_Bool)arg1;
- (id)makeHubs2TargetTranslationContentOperation;
- (id)makeErrorHandlingContentOperation;
- (id)appendCommonOperationsTo:(id)arg1 includeErrorHandler:(_Bool)arg2 cachingTestEnabled:(_Bool)arg3;
- (id)commonContentOperationsIncludeErrorHandler:(_Bool)arg1 cachingTestEnabled:(_Bool)arg2;
- (id)makeRemoteContentOperationCachingTestEnabled:(_Bool)arg1;
- (id)makeRemoteViewModelLoaderCachingTestEnabled:(_Bool)arg1;
- (id)makeCachedViewModelLoader;
- (id)makeViewModelProvider;
- (id)makeCommandHandlerWithViewModelProvider:(id)arg1;
@property(readonly, nonatomic) NSDictionary *defaultCommandRegister; // @synthesize defaultCommandRegister=_defaultCommandRegister;
@property(readonly, nonatomic) EXP_HUBComponentDefaults *componentDefaults; // @synthesize componentDefaults=_componentDefaults;
- (id)makeViewController;
- (id)makeHubsRendererViewController;
- (id)initWithHubsRendererFactory:(id)arg1 hugsFactory:(id)arg2 glueTheme:(id)arg3 recentlyPlayedService:(id)arg4 dataLoaderFactory:(id)arg5 offlineModeState:(id)arg6 featureID:(id)arg7 viewURI:(id)arg8 pageIdentifier:(id)arg9 urlResolver:(id)arg10 testManager:(id)arg11 uiService:(id)arg12 feedHeartbeatManager:(id)arg13 feedFeatureFlagExposureLogger:(id)arg14 barButtonManagerFactory:(id)arg15 contentOperationFactory:(id)arg16;

@end
