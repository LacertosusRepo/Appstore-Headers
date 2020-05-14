//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HUBComponentRegistry;
@protocol HUBComponentFallbackHandler, HUBComponentLayoutManager, HUBIconImageResolver, HUGSStyleOverrider, SPTHubComponentModelURIResolver;

@protocol SPTHugsFactory <NSObject>
- (id <HUBComponentFallbackHandler>)provideSimpleComponentFallbackHandler;
- (id <HUBComponentFallbackHandler>)provideComponentFallbackHandler;
- (id <HUBComponentLayoutManager>)provideComponentLayoutManager;
- (id <HUBIconImageResolver>)provideIconImageResolver;
- (id <HUGSStyleOverrider>)createStyleOverriderWithComponentModelURIResolver:(id <SPTHubComponentModelURIResolver>)arg1;
- (HUBComponentRegistry *)createComponentRegistryWithComponentModelURIResolver:(id <SPTHubComponentModelURIResolver>)arg1 fallbackHandler:(id <HUBComponentFallbackHandler>)arg2;
- (HUBComponentRegistry *)createComponentRegistryWithComponentModelURIResolver:(id <SPTHubComponentModelURIResolver>)arg1;
@end
