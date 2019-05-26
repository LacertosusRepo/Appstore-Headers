//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EXP_HUBComponentDefaults, EXP_HUBComponentRegistry, SPTFreeTierTrackBarButtonFactory, SPTFreeTierTrackCommandHandlerFactory, SPTFreeTierTrackContentOperationFactory;
@protocol EXP_HUBComponentLayoutManager, EXP_SPTHubsRendererFactory, GLUETheme, SPTGaiaUserInterfaceContextObserver, SPTHugsFactory;

@interface SPTFreeTierTrackHubManager : NSObject
{
    EXP_HUBComponentRegistry *_componentRegistry;
    id <EXP_SPTHubsRendererFactory> _hubsRendererFactory;
    id <SPTHugsFactory> _hugsFactory;
    SPTFreeTierTrackContentOperationFactory *_contentOperationFactory;
    SPTFreeTierTrackCommandHandlerFactory *_commandHandlerFactory;
    SPTFreeTierTrackBarButtonFactory *_barButtonFactory;
    id <GLUETheme> _glueTheme;
    id <SPTGaiaUserInterfaceContextObserver> _gaiaObserverService;
    id <EXP_HUBComponentLayoutManager> _componentLayoutManager;
    EXP_HUBComponentDefaults *_componentDefaults;
}

@property(readonly, nonatomic) EXP_HUBComponentDefaults *componentDefaults; // @synthesize componentDefaults=_componentDefaults;
@property(readonly, nonatomic) id <EXP_HUBComponentLayoutManager> componentLayoutManager; // @synthesize componentLayoutManager=_componentLayoutManager;
@property(readonly, nonatomic) id <SPTGaiaUserInterfaceContextObserver> gaiaObserverService; // @synthesize gaiaObserverService=_gaiaObserverService;
@property(readonly, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(readonly, nonatomic) SPTFreeTierTrackBarButtonFactory *barButtonFactory; // @synthesize barButtonFactory=_barButtonFactory;
@property(readonly, nonatomic) SPTFreeTierTrackCommandHandlerFactory *commandHandlerFactory; // @synthesize commandHandlerFactory=_commandHandlerFactory;
@property(readonly, nonatomic) SPTFreeTierTrackContentOperationFactory *contentOperationFactory; // @synthesize contentOperationFactory=_contentOperationFactory;
@property(readonly, nonatomic) id <SPTHugsFactory> hugsFactory; // @synthesize hugsFactory=_hugsFactory;
@property(readonly, nonatomic) id <EXP_SPTHubsRendererFactory> hubsRendererFactory; // @synthesize hubsRendererFactory=_hubsRendererFactory;
@property(readonly, nonatomic) EXP_HUBComponentRegistry *componentRegistry; // @synthesize componentRegistry=_componentRegistry;
- (void).cxx_destruct;
- (id)createViewModelLoaderForViewURI:(id)arg1 referrerIdentifier:(id)arg2 reloadPageSignal:(id)arg3;
- (id)createViewControllerForViewURI:(id)arg1 referrerIdentifier:(id)arg2;
- (_Bool)canCreateViewControllerForViewURI:(id)arg1;
- (id)initWithComponentRegistry:(id)arg1 hubsRendererFactory:(id)arg2 hugsFactory:(id)arg3 contentOperationFactory:(id)arg4 commandHandlerFactory:(id)arg5 barButtonFactory:(id)arg6 glueTheme:(id)arg7 gaiaObserverService:(id)arg8 componentLayoutManager:(id)arg9;

@end
