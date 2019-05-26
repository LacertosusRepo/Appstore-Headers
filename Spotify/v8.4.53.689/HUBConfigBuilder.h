//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HUBConfigBuilder : NSObject
{
    id <HUBJSONSchema> _jsonSchema;
    id <HUBContentReloadPolicy> _contentReloadPolicy;
    id <HUBImageLoaderFactory> _imageLoaderFactory;
    id <HUBConnectivityStateResolver> _connectivityStateResolver;
    id <HUBIconImageResolver> _iconImageResolver;
    id <HUBViewControllerScrollHandler> _viewControllerScrollHandler;
    id <HUBAction> _selectionAction;
    id <HUBComponentLayoutManager> _componentLayoutManager;
    id <HUBComponentFallbackHandler> _componentFallbackHandler;
}

@property(retain, nonatomic) id <HUBComponentFallbackHandler> componentFallbackHandler; // @synthesize componentFallbackHandler=_componentFallbackHandler;
@property(retain, nonatomic) id <HUBComponentLayoutManager> componentLayoutManager; // @synthesize componentLayoutManager=_componentLayoutManager;
@property(retain, nonatomic) id <HUBAction> selectionAction; // @synthesize selectionAction=_selectionAction;
@property(retain, nonatomic) id <HUBViewControllerScrollHandler> viewControllerScrollHandler; // @synthesize viewControllerScrollHandler=_viewControllerScrollHandler;
@property(retain, nonatomic) id <HUBIconImageResolver> iconImageResolver; // @synthesize iconImageResolver=_iconImageResolver;
@property(retain, nonatomic) id <HUBConnectivityStateResolver> connectivityStateResolver; // @synthesize connectivityStateResolver=_connectivityStateResolver;
@property(retain, nonatomic) id <HUBImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(retain, nonatomic) id <HUBContentReloadPolicy> contentReloadPolicy; // @synthesize contentReloadPolicy=_contentReloadPolicy;
@property(retain, nonatomic) id <HUBJSONSchema> jsonSchema; // @synthesize jsonSchema=_jsonSchema;
- (void).cxx_destruct;
- (id)build;
- (id)initWithComponentLayoutManager:(id)arg1 componentFallbackHandler:(id)arg2;
- (id)initWithComponentMargin:(double)arg1 componentFallbackHandler:(id)arg2;

@end
