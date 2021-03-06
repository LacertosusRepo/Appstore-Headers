//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTExternalIntegrationCollectionController, SPTExternalIntegrationContentController, SPTExternalIntegrationDriverDistractionController, SPTExternalIntegrationPlatformLogging, SPTExternalIntegrationPlaybackController, SPTExternalIntegrationRadioController, SPTExternalIntegrationSearchController;

@protocol SPTExternalIntegrationPlatform <NSObject>
@property(readonly, nonatomic) id <SPTExternalIntegrationPlatformLogging> platformLogging;
@property(readonly, nonatomic) id <SPTExternalIntegrationSearchController> searchController;
@property(readonly, nonatomic) id <SPTExternalIntegrationRadioController> radioController;
@property(readonly, nonatomic) id <SPTExternalIntegrationPlaybackController> playbackController;
@property(readonly, nonatomic) id <SPTExternalIntegrationDriverDistractionController> driverDistractionController;
@property(readonly, nonatomic) id <SPTExternalIntegrationContentController> contentController;
@property(readonly, nonatomic) id <SPTExternalIntegrationCollectionController> collectionController;
@end

