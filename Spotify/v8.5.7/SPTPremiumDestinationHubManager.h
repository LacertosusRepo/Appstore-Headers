//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EXP_HUBComponentDefaults, SPTPremiumDestinationHubManagerConfiguration;
@protocol EXP_HUBIconImageResolver, EXP_SPTHubCommandHandlerFactory;

@interface SPTPremiumDestinationHubManager : NSObject
{
    EXP_HUBComponentDefaults *_componentDefaults;
    id <EXP_HUBIconImageResolver> _iconImageResolver;
    id <EXP_SPTHubCommandHandlerFactory> _commandHandlerFactory;
    SPTPremiumDestinationHubManagerConfiguration *_configuration;
}

+ (id)provideLocalPremiumDestinationHubsResponseURL;
@property(retain, nonatomic) SPTPremiumDestinationHubManagerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) id <EXP_SPTHubCommandHandlerFactory> commandHandlerFactory; // @synthesize commandHandlerFactory=_commandHandlerFactory;
@property(readonly, nonatomic) id <EXP_HUBIconImageResolver> iconImageResolver; // @synthesize iconImageResolver=_iconImageResolver;
@property(readonly, nonatomic) EXP_HUBComponentDefaults *componentDefaults; // @synthesize componentDefaults=_componentDefaults;
- (void).cxx_destruct;
- (id)provideViewControllerForURL:(id)arg1 referrerIdentifier:(id)arg2 viewModelProvider:(id)arg3;
- (id)createCommandDispatcherForURL:(id)arg1 referrerIdentifier:(id)arg2 interactionLogger:(id)arg3;
- (id)createViewModelProviderWithContentOperations:(id)arg1;
- (id)createRemoteContentOperationsWithContentURLResolver:(id)arg1;
- (id)createLocalContentOperations;
- (id)createContentOperations;
- (id)providePremiumDestinationHubsRemoteURLResolver;
- (id)providePremiumDestinationComponentLayoutManager;
- (id)provideViewControllerForURL:(id)arg1 referrerIdentifier:(id)arg2;
- (id)initWithHubManagerConfiguration:(id)arg1;

@end

