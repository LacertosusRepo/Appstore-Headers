//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EXP_HUBComponentDefaults, EXP_HUBComponentRegistry, NSString;
@protocol EXP_HUBIconImageResolver, EXP_SPTHubCommandHandlerFactory, EXP_SPTHubsRendererFactory, GLUETheme, SPTHomeUIService, SPTHugsFactory, SPTPodcastUIService;

@interface SPTPodcastUITestHubManager : NSObject
{
    NSString *_serviceIdentifier;
    id <EXP_SPTHubsRendererFactory> _hubsRendererFactory;
    id <SPTHugsFactory> _hugsFactory;
    id <GLUETheme> _GLUETheme;
    EXP_HUBComponentDefaults *_componentDefaults;
    id <EXP_HUBIconImageResolver> _iconImageResolver;
    id <EXP_SPTHubCommandHandlerFactory> _commandHandlerFactory;
    id <SPTHomeUIService> _homeUIService;
    id <SPTPodcastUIService> _podcastUIService;
    EXP_HUBComponentRegistry *_componentRegistry;
}

@property(retain, nonatomic) EXP_HUBComponentRegistry *componentRegistry; // @synthesize componentRegistry=_componentRegistry;
@property(nonatomic) __weak id <SPTPodcastUIService> podcastUIService; // @synthesize podcastUIService=_podcastUIService;
@property(nonatomic) __weak id <SPTHomeUIService> homeUIService; // @synthesize homeUIService=_homeUIService;
@property(readonly, nonatomic) id <EXP_SPTHubCommandHandlerFactory> commandHandlerFactory; // @synthesize commandHandlerFactory=_commandHandlerFactory;
@property(readonly, nonatomic) id <EXP_HUBIconImageResolver> iconImageResolver; // @synthesize iconImageResolver=_iconImageResolver;
@property(readonly, nonatomic) EXP_HUBComponentDefaults *componentDefaults; // @synthesize componentDefaults=_componentDefaults;
@property(readonly, nonatomic) id <GLUETheme> GLUETheme; // @synthesize GLUETheme=_GLUETheme;
@property(readonly, nonatomic) id <SPTHugsFactory> hugsFactory; // @synthesize hugsFactory=_hugsFactory;
@property(readonly, nonatomic) id <EXP_SPTHubsRendererFactory> hubsRendererFactory; // @synthesize hubsRendererFactory=_hubsRendererFactory;
@property(readonly, copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
- (void).cxx_destruct;
- (void)unregisterTestUIComponents;
- (id)provideViewControllerForURL:(id)arg1 referrerIdentifier:(id)arg2;
- (id)createCommandDispatcherForURL:(id)arg1 referrerIdentifier:(id)arg2 interactionLogger:(id)arg3;
- (id)createViewModelProvider;
- (id)createContentOperation;
- (id)initWithServiceIdentifier:(id)arg1 hubsRendererFactory:(id)arg2 hugsFactory:(id)arg3 GLUETheme:(id)arg4 homeUIService:(id)arg5 podcastUIService:(id)arg6;

@end

