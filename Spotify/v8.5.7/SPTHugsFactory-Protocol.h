//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EXP_HUBComponentRegistry;
@protocol EXP_HUBComponentFallbackHandler, EXP_HUBComponentLayoutManager, EXP_HUBIconImageResolver, EXP_HUGSStyleOverrider, EXP_SPTHubComponentModelURIResolver;

@protocol SPTHugsFactory <NSObject>
- (id <EXP_HUBComponentFallbackHandler>)provideSimpleComponentFallbackHandler;
- (id <EXP_HUBComponentFallbackHandler>)provideComponentFallbackHandler;
- (id <EXP_HUBComponentLayoutManager>)provideComponentLayoutManager;
- (id <EXP_HUBIconImageResolver>)provideIconImageResolver;
- (id <EXP_HUGSStyleOverrider>)createStyleOverriderWithComponentModelURIResolver:(id <EXP_SPTHubComponentModelURIResolver>)arg1;
- (EXP_HUBComponentRegistry *)createComponentRegistryWithComponentModelURIResolver:(id <EXP_SPTHubComponentModelURIResolver>)arg1 fallbackHandler:(id <EXP_HUBComponentFallbackHandler>)arg2;
- (EXP_HUBComponentRegistry *)createComponentRegistryWithComponentModelURIResolver:(id <EXP_SPTHubComponentModelURIResolver>)arg1;
@end

