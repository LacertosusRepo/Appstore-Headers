//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EXP_HUBComponentDefaults, EXP_HUBComponentRegistry, NSString, NSURL, SPTDataLoaderFactory;

@interface SPTPersonalizedSetsHubBuilder : NSObject
{
    id <EXP_SPTHubsRendererFactory> _hubsRendererFactory;
    id <SPTHugsFactory> _hugsFactory;
    id <GLUETheme> _theme;
    SPTDataLoaderFactory *_dataLoaderFactory;
    id <SPTOfflineModeState> _offlineModeState;
    id <EXP_SPTHubRemoteContentOperationURLResolver> _urlResolver;
    NSString *_featureID;
    NSURL *_viewURI;
    NSString *_pageIdentifier;
    id <EXP_SPTHubContentOperationFactory> _contentOperationFactory;
    id <EXP_SPTHubCommandHandlerFactory> _commandHandlerFactory;
    id <EXP_HUBImageLoaderFactory> _imageLoaderFactory;
    id <EXP_SPTHubLogger> _logger;
    id <EXP_HUBComponentFallbackHandler> _fallbackHandler;
    id <EXP_HUBIconImageResolver> _iconResolver;
    id <EXP_HUBComponentLayoutManager> _layoutManager;
    EXP_HUBComponentRegistry *_componentRegistry;
    EXP_HUBComponentDefaults *_componentDefaults;
}

@property(retain, nonatomic) EXP_HUBComponentDefaults *componentDefaults; // @synthesize componentDefaults=_componentDefaults;
@property(retain, nonatomic) EXP_HUBComponentRegistry *componentRegistry; // @synthesize componentRegistry=_componentRegistry;
@property(retain, nonatomic) id <EXP_HUBComponentLayoutManager> layoutManager; // @synthesize layoutManager=_layoutManager;
@property(retain, nonatomic) id <EXP_HUBIconImageResolver> iconResolver; // @synthesize iconResolver=_iconResolver;
@property(retain, nonatomic) id <EXP_HUBComponentFallbackHandler> fallbackHandler; // @synthesize fallbackHandler=_fallbackHandler;
@property(retain, nonatomic) id <EXP_SPTHubLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <EXP_HUBImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(retain, nonatomic) id <EXP_SPTHubCommandHandlerFactory> commandHandlerFactory; // @synthesize commandHandlerFactory=_commandHandlerFactory;
@property(retain, nonatomic) id <EXP_SPTHubContentOperationFactory> contentOperationFactory; // @synthesize contentOperationFactory=_contentOperationFactory;
@property(readonly, nonatomic) NSString *pageIdentifier; // @synthesize pageIdentifier=_pageIdentifier;
@property(readonly, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
@property(readonly, nonatomic) NSString *featureID; // @synthesize featureID=_featureID;
@property(readonly, nonatomic) id <EXP_SPTHubRemoteContentOperationURLResolver> urlResolver; // @synthesize urlResolver=_urlResolver;
@property(readonly, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTHugsFactory> hugsFactory; // @synthesize hugsFactory=_hugsFactory;
@property(readonly, nonatomic) id <EXP_SPTHubsRendererFactory> hubsRendererFactory; // @synthesize hubsRendererFactory=_hubsRendererFactory;
- (void).cxx_destruct;
- (id)makeViewModelProvider;
- (id)makeCommandHandler;
- (id)buildPersonalizedSetsHubViewController;
- (id)initWithHubsRendererFactory:(id)arg1 hugsFactory:(id)arg2 theme:(id)arg3 dataLoaderFactory:(id)arg4 offlineModeState:(id)arg5 urlResolver:(id)arg6 featureID:(id)arg7 viewURI:(id)arg8 pageIdentifier:(id)arg9;

@end
