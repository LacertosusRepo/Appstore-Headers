//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTService-Protocol.h"

@protocol SPTCanvasCacheManager, SPTCanvasMetadataResolverFactory, SPTCanvasTrackChecker, SPTCanvasVideoLoaderFactory, SPTCanvasViewControllerFactory;

@protocol SPTCanvasService <SPTService>
- (id <SPTCanvasCacheManager>)provideCanvasCacheManager;
- (id <SPTCanvasViewControllerFactory>)provideCanvasViewControllerFactory;
- (id <SPTCanvasMetadataResolverFactory>)provideCanvasMetadataResolverFactory;
- (id <SPTCanvasVideoLoaderFactory>)provideCanvasVideoLoaderFactory;
- (id <SPTCanvasTrackChecker>)provideCanvasTrackChecker;
@end
