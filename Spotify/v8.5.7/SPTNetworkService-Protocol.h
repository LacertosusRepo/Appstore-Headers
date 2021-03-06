//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTService-Protocol.h"

@class SPTDataLoaderFactory, SPTDataLoaderService, SPTHTTPService, SPTHermesController, SPTImageLoaderService, SPTImageLoaderServiceManager, SPTNetworkConnectivityController;
@protocol SPTImageLoaderFactory, SPTReachabilityMonitor, SPTVideoURLAssetLoader;

@protocol SPTNetworkService <SPTService>
- (void)invalidateSessionFactories;
- (SPTHermesController *)provideHermesController;
- (id <SPTReachabilityMonitor>)provideReachabilityForInternetConnection;
- (SPTHTTPService *)provideHTTPService;
- (SPTDataLoaderService *)provideDataLoaderService;
- (SPTImageLoaderServiceManager *)provideImageLoaderServiceManager;
- (id <SPTVideoURLAssetLoader>)provideVideoAssetLoader;
- (SPTImageLoaderService *)provideImageLoaderService;
- (SPTNetworkConnectivityController *)provideNetworkConnectivityController;
- (id <SPTImageLoaderFactory>)provideImageLoaderFactory;
- (SPTDataLoaderFactory *)provideDataLoaderFactory;
@end

