//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTOfflineSyncModel-Protocol.h"

@class NSString, SPTOfflineSyncData;
@protocol SPTCosmosDictionaryDataLoader, SPTCosmosDictionaryDataLoaderRequestToken, SPTOfflineSyncModelDelegate;

@interface SPTOfflineSyncModelImplementation : NSObject <SPTOfflineSyncModel>
{
    _Bool _loaded;
    id <SPTOfflineSyncModelDelegate> _delegate;
    SPTOfflineSyncData *_currentSyncData;
    id <SPTCosmosDictionaryDataLoader> _cosmosDataLoader;
    id <SPTCosmosDictionaryDataLoaderRequestToken> _requestToken;
}

@property(retain, nonatomic) id <SPTCosmosDictionaryDataLoaderRequestToken> requestToken; // @synthesize requestToken=_requestToken;
@property(retain, nonatomic) id <SPTCosmosDictionaryDataLoader> cosmosDataLoader; // @synthesize cosmosDataLoader=_cosmosDataLoader;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) SPTOfflineSyncData *currentSyncData; // @synthesize currentSyncData=_currentSyncData;
@property(nonatomic) __weak id <SPTOfflineSyncModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long syncedTracks;
@property(readonly, nonatomic) long long totalTracks;
@property(readonly, nonatomic, getter=isSyncing) _Bool syncing;
@property(readonly, nonatomic) double progress;
- (void)updateWithSyncData:(id)arg1;
- (void)loadModel;
- (id)initWithCosmosDictionaryDataLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

