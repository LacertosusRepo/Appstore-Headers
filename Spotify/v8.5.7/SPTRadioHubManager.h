//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EXP_HUBComponentDefaults, NSString, SPTRadioLogger, SPTRadioPlaybackService;
@protocol EXP_HUBIconImageResolver, EXP_SPTHubCommandHandlerFactory, EXP_SPTHubsRendererFactory, GLUETheme, SPTBarButtonItemManager, SPTHugsFactory, SPTLinkDispatcher, SPTRadioTestManager;

@interface SPTRadioHubManager : NSObject
{
    NSString *_serviceIdentifier;
    id <EXP_SPTHubsRendererFactory> _hubsRendererFactory;
    id <SPTHugsFactory> _hugsFactory;
    id <GLUETheme> _GLUETheme;
    EXP_HUBComponentDefaults *_componentDefaults;
    id <EXP_HUBIconImageResolver> _iconImageResolver;
    id <EXP_SPTHubCommandHandlerFactory> _commandHandlerFactory;
    SPTRadioLogger *_logger;
    id <SPTRadioTestManager> _radioTestManager;
    SPTRadioPlaybackService *_playbackService;
    id <SPTBarButtonItemManager> _barButtonItemManager;
    id <SPTLinkDispatcher> _linkDispatcher;
}

@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) __weak id <SPTBarButtonItemManager> barButtonItemManager; // @synthesize barButtonItemManager=_barButtonItemManager;
@property(readonly, nonatomic) __weak SPTRadioPlaybackService *playbackService; // @synthesize playbackService=_playbackService;
@property(readonly, nonatomic) __weak id <SPTRadioTestManager> radioTestManager; // @synthesize radioTestManager=_radioTestManager;
@property(retain, nonatomic) SPTRadioLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <EXP_SPTHubCommandHandlerFactory> commandHandlerFactory; // @synthesize commandHandlerFactory=_commandHandlerFactory;
@property(readonly, nonatomic) id <EXP_HUBIconImageResolver> iconImageResolver; // @synthesize iconImageResolver=_iconImageResolver;
@property(readonly, nonatomic) EXP_HUBComponentDefaults *componentDefaults; // @synthesize componentDefaults=_componentDefaults;
@property(readonly, nonatomic) id <GLUETheme> GLUETheme; // @synthesize GLUETheme=_GLUETheme;
@property(readonly, nonatomic) id <SPTHugsFactory> hugsFactory; // @synthesize hugsFactory=_hugsFactory;
@property(readonly, nonatomic) id <EXP_SPTHubsRendererFactory> hubsRendererFactory; // @synthesize hubsRendererFactory=_hubsRendererFactory;
@property(readonly, copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
- (void).cxx_destruct;
- (id)componentRegistry;
- (id)createCommandDispatcherForURL:(id)arg1 referrerIdentifier:(id)arg2 interactionLogger:(id)arg3;
- (id)createViewModelProvider;
- (id)createContentOperations;
- (id)provideViewControllerForURL:(id)arg1 referrerIdentifier:(id)arg2;
- (id)initWithServiceIdentifier:(id)arg1 hubsRendererFactory:(id)arg2 hugsFactory:(id)arg3 GLUETheme:(id)arg4 logger:(id)arg5 radioTestManager:(id)arg6 playbackService:(id)arg7 barButtonItemManager:(id)arg8 linkDispatcher:(id)arg9;

@end

