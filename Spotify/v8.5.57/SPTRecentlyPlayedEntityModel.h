//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, NSMutableArray, SPTRecentlyPlayedDataLoader;
@protocol SPTCollectionPlatformTestManager, SPTLinkDispatcher, SPTLocalSettings, SPTOfflineModeState;

@interface SPTRecentlyPlayedEntityModel : NSObject
{
    _Bool _dataLoaded;
    _Bool _evaluateOfflineSyncStatus;
    SPTRecentlyPlayedDataLoader *_dataLoader;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    id <SPTOfflineModeState> _offlineNotifier;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTLocalSettings> _localSettings;
    NSMutableArray *_allEntities;
    NSHashTable *_observers;
}

@property(nonatomic) _Bool evaluateOfflineSyncStatus; // @synthesize evaluateOfflineSyncStatus=_evaluateOfflineSyncStatus;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSMutableArray *allEntities; // @synthesize allEntities=_allEntities;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(nonatomic) __weak id <SPTOfflineModeState> offlineNotifier; // @synthesize offlineNotifier=_offlineNotifier;
@property(nonatomic) __weak id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(retain, nonatomic) SPTRecentlyPlayedDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) _Bool dataLoaded; // @synthesize dataLoaded=_dataLoaded;
- (void).cxx_destruct;
- (void)enableEntityListContentType:(unsigned long long)arg1;
- (_Bool)removeItem:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)notifyObservers;
@property(readonly, nonatomic) NSArray *recentlyPlayedEntities;
- (void)subscribe;
- (id)initWithDataLoader:(id)arg1 collectionTestManager:(id)arg2 offlineNotifier:(id)arg3 linkDispatcher:(id)arg4 localSetting:(id)arg5 evaluateOfflineSyncStatus:(_Bool)arg6;

@end

