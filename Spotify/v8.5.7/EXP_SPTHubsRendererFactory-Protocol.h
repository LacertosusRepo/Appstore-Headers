//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol EXP_HUBImageLoaderFactory, EXP_SPTHubCommandHandlerFactory, EXP_SPTHubContentOperationFactory, EXP_SPTHubImageLoadingLogger, EXP_SPTHubLoggerFactory;

@protocol EXP_SPTHubsRendererFactory <NSObject>
- (id <EXP_SPTHubCommandHandlerFactory>)createCommandHandlerFactoryWithFeatureIdentifier:(NSString *)arg1 contextMenuLogContext:(NSString *)arg2;
- (id <EXP_SPTHubCommandHandlerFactory>)createCommandHandlerFactoryWithFeatureIdentifier:(NSString *)arg1 contextMenuLogContextIphone:(NSString *)arg2 contextMenuLogContextIpad:(NSString *)arg3;
- (id <EXP_SPTHubLoggerFactory>)provideLoggerFactory;
- (id <EXP_SPTHubContentOperationFactory>)provideContentOperationFactory;
- (id <EXP_HUBImageLoaderFactory>)createImageLoaderFactoryWithLogger:(id <EXP_SPTHubImageLoadingLogger>)arg1;
- (id <EXP_HUBImageLoaderFactory>)provideImageLoaderFactory;
@end

