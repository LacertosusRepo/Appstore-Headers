//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EXP_HUBComponentDefaults, EXP_HUBComponentRegistry, SPTFreeTierArtistBarButtonFactory, SPTFreeTierArtistCommandHandlerFactory, SPTFreeTierArtistContentOperationFactory;
@protocol EXP_SPTHubsRendererFactory, GLUETheme, SPTBarButtonItemManager, SPTHugsFactory, SPTPermissionsOnDemandState, SPTShelves, SPTVISREFFlagsService;

@interface SPTFreeTierArtistHubManager : NSObject
{
    EXP_HUBComponentRegistry *_componentRegistry;
    id <EXP_SPTHubsRendererFactory> _hubsRendererFactory;
    id <SPTHugsFactory> _hugsFactory;
    SPTFreeTierArtistContentOperationFactory *_contentOperationFactory;
    SPTFreeTierArtistCommandHandlerFactory *_commandHandlerFactory;
    SPTFreeTierArtistBarButtonFactory *_barButtonFactory;
    id <GLUETheme> _glueTheme;
    id <SPTPermissionsOnDemandState> _onDemandState;
    EXP_HUBComponentDefaults *_componentDefaults;
    id <SPTBarButtonItemManager> _barButtonItemManager;
    id <SPTShelves> _shelves;
    id <SPTVISREFFlagsService> _visualRefreshService;
}

@property(nonatomic) __weak id <SPTVISREFFlagsService> visualRefreshService; // @synthesize visualRefreshService=_visualRefreshService;
@property(readonly, nonatomic) id <SPTShelves> shelves; // @synthesize shelves=_shelves;
@property(readonly, nonatomic) id <SPTBarButtonItemManager> barButtonItemManager; // @synthesize barButtonItemManager=_barButtonItemManager;
@property(readonly, nonatomic) EXP_HUBComponentDefaults *componentDefaults; // @synthesize componentDefaults=_componentDefaults;
@property(readonly, nonatomic) id <SPTPermissionsOnDemandState> onDemandState; // @synthesize onDemandState=_onDemandState;
@property(readonly, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(readonly, nonatomic) SPTFreeTierArtistBarButtonFactory *barButtonFactory; // @synthesize barButtonFactory=_barButtonFactory;
@property(readonly, nonatomic) SPTFreeTierArtistCommandHandlerFactory *commandHandlerFactory; // @synthesize commandHandlerFactory=_commandHandlerFactory;
@property(readonly, nonatomic) SPTFreeTierArtistContentOperationFactory *contentOperationFactory; // @synthesize contentOperationFactory=_contentOperationFactory;
@property(readonly, nonatomic) id <SPTHugsFactory> hugsFactory; // @synthesize hugsFactory=_hugsFactory;
@property(readonly, nonatomic) id <EXP_SPTHubsRendererFactory> hubsRendererFactory; // @synthesize hubsRendererFactory=_hubsRendererFactory;
@property(readonly, nonatomic) EXP_HUBComponentRegistry *componentRegistry; // @synthesize componentRegistry=_componentRegistry;
- (void).cxx_destruct;
- (id)createViewModelLoaderForViewURI:(id)arg1 referrerIdentifier:(id)arg2 reloadPageSignal:(id)arg3;
- (id)createReleasesViewControllerForViewURI:(id)arg1 referrerIdentifier:(id)arg2;
- (id)createArtistViewControllerForViewURI:(id)arg1 referrerIdentifier:(id)arg2;
- (id)createViewControllerForViewURI:(id)arg1 referrerIdentifier:(id)arg2;
- (_Bool)canCreateViewControllerForViewURI:(id)arg1;
- (id)initWithComponentRegistry:(id)arg1 hubsRendererFactory:(id)arg2 hugsFactory:(id)arg3 contentOperationFactory:(id)arg4 commandHandlerFactory:(id)arg5 barButtonFactory:(id)arg6 glueTheme:(id)arg7 artistHubComponentsFactory:(id)arg8 onDemandState:(id)arg9 barButtonItemManager:(id)arg10 shelves:(id)arg11 visualRefreshService:(id)arg12;

@end
