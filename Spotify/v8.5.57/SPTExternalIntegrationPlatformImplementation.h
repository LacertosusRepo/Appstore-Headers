//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTExternalIntegrationPlatform-Protocol.h"

@class NSString;
@protocol SPTExternalIntegrationCollectionController, SPTExternalIntegrationContentController, SPTExternalIntegrationDriverDistractionController, SPTExternalIntegrationPlatformLogging, SPTExternalIntegrationPlaybackController, SPTExternalIntegrationQueueController, SPTExternalIntegrationRadioController, SPTExternalIntegrationSearchController;

@interface SPTExternalIntegrationPlatformImplementation : NSObject <SPTExternalIntegrationPlatform>
{
    id <SPTExternalIntegrationCollectionController> _collectionController;
    id <SPTExternalIntegrationContentController> _contentController;
    id <SPTExternalIntegrationDriverDistractionController> _driverDistractionController;
    id <SPTExternalIntegrationPlaybackController> _playbackController;
    id <SPTExternalIntegrationRadioController> _radioController;
    id <SPTExternalIntegrationSearchController> _searchController;
    id <SPTExternalIntegrationQueueController> _queueController;
    id <SPTExternalIntegrationPlatformLogging> _platformLogging;
}

@property(readonly, nonatomic) id <SPTExternalIntegrationPlatformLogging> platformLogging; // @synthesize platformLogging=_platformLogging;
@property(readonly, nonatomic) id <SPTExternalIntegrationQueueController> queueController; // @synthesize queueController=_queueController;
@property(readonly, nonatomic) id <SPTExternalIntegrationSearchController> searchController; // @synthesize searchController=_searchController;
@property(readonly, nonatomic) id <SPTExternalIntegrationRadioController> radioController; // @synthesize radioController=_radioController;
@property(readonly, nonatomic) id <SPTExternalIntegrationPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
@property(readonly, nonatomic) id <SPTExternalIntegrationDriverDistractionController> driverDistractionController; // @synthesize driverDistractionController=_driverDistractionController;
@property(readonly, nonatomic) id <SPTExternalIntegrationContentController> contentController; // @synthesize contentController=_contentController;
@property(readonly, nonatomic) id <SPTExternalIntegrationCollectionController> collectionController; // @synthesize collectionController=_collectionController;
- (void).cxx_destruct;
- (id)initWithCollectionController:(id)arg1 contentController:(id)arg2 driverDistractionController:(id)arg3 playbackController:(id)arg4 radioController:(id)arg5 searchController:(id)arg6 queueController:(id)arg7 platformLogging:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

