//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PDLTopNCache.h"

@class GPCPromise, NSDate, NSMutableDictionary, NSNumber, NSObject<OS_dispatch_queue>, NSString, NSTimer;

@interface PDLTopNStore : NSObject <PDLTopNCache>
{
    _Bool containsPartialResults;
    _Bool _offlineMode;
    _Bool _openAutomaticallyIfClosed;
    _Bool _closed;
    _Bool _cacheReady;
    double _invalidateInterval;
    double _refreshInterval;
    NSNumber *_latestAffinityVersion;
    NSNumber *_latestAffinityThreshold;
    long long _cacheSyncState;
    struct NSMutableDictionary *_personAutocompletions;
    NSMutableDictionary *_groupAutocompletions;
    NSMutableDictionary *_personIDByFieldValueLookup;
    NSDate *_lastModifiedDate;
    NSString *_lastModifiedKey;
    NSString *_latestAffinityVersionKey;
    NSString *_latestAffinityThresholdKey;
    NSString *_containsPartialResultsKey;
    NSString *_cacheSyncStateKey;
    id <GSCEntityStore> _store;
    GPCPromise *_storeOpenedPromise;
    GPCPromise *_cacheReadyPromise;
    NSTimer *_storeOpenTimeout;
    NSObject<OS_dispatch_queue> *_topNQueue;
    NSObject<OS_dispatch_queue> *_openQueue;
}

@property(nonatomic) _Bool cacheReady; // @synthesize cacheReady=_cacheReady;
@property(nonatomic, getter=isClosed) _Bool closed; // @synthesize closed=_closed;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *openQueue; // @synthesize openQueue=_openQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *topNQueue; // @synthesize topNQueue=_topNQueue;
@property(retain, nonatomic) NSTimer *storeOpenTimeout; // @synthesize storeOpenTimeout=_storeOpenTimeout;
@property(retain, nonatomic) GPCPromise *cacheReadyPromise; // @synthesize cacheReadyPromise=_cacheReadyPromise;
@property(retain, nonatomic) GPCPromise *storeOpenedPromise; // @synthesize storeOpenedPromise=_storeOpenedPromise;
@property(retain, nonatomic) id <GSCEntityStore> store; // @synthesize store=_store;
@property(retain, nonatomic) NSString *cacheSyncStateKey; // @synthesize cacheSyncStateKey=_cacheSyncStateKey;
@property(readonly, nonatomic) NSString *containsPartialResultsKey; // @synthesize containsPartialResultsKey=_containsPartialResultsKey;
@property(readonly, nonatomic) NSString *latestAffinityThresholdKey; // @synthesize latestAffinityThresholdKey=_latestAffinityThresholdKey;
@property(readonly, nonatomic) NSString *latestAffinityVersionKey; // @synthesize latestAffinityVersionKey=_latestAffinityVersionKey;
@property(readonly, nonatomic) NSString *lastModifiedKey; // @synthesize lastModifiedKey=_lastModifiedKey;
@property(retain, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(retain, nonatomic) NSMutableDictionary *personIDByFieldValueLookup; // @synthesize personIDByFieldValueLookup=_personIDByFieldValueLookup;
@property(retain, nonatomic) NSMutableDictionary *groupAutocompletions; // @synthesize groupAutocompletions=_groupAutocompletions;
@property(retain, nonatomic) NSMutableDictionary *personAutocompletions; // @synthesize personAutocompletions=_personAutocompletions;
@property(nonatomic) _Bool openAutomaticallyIfClosed; // @synthesize openAutomaticallyIfClosed=_openAutomaticallyIfClosed;
@property(readonly, nonatomic) long long cacheSyncState; // @synthesize cacheSyncState=_cacheSyncState;
@property(retain, nonatomic) NSNumber *latestAffinityThreshold; // @synthesize latestAffinityThreshold=_latestAffinityThreshold;
@property(retain, nonatomic) NSNumber *latestAffinityVersion; // @synthesize latestAffinityVersion=_latestAffinityVersion;
@property(nonatomic) _Bool offlineMode; // @synthesize offlineMode=_offlineMode;
@property(nonatomic) double refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(nonatomic) double invalidateInterval; // @synthesize invalidateInterval=_invalidateInterval;
@property(nonatomic) _Bool containsPartialResults; // @synthesize containsPartialResults;
- (void).cxx_destruct;
- (struct NSMutableDictionary *)loadPersonAutocompletions:(id)arg1;
- (void)removeMethodFieldValueLookup:(id)arg1 personID:(id)arg2;
- (void)removeMethodFieldLookupForAutocompletions:(id)arg1 personID:(id)arg2;
- (void)addOrUpdateMethodFieldValueLookup:(id)arg1 personID:(id)arg2;
- (void)addOrUpdateMethodFieldLookupForAutocompletions:(id)arg1 personID:(id)arg2;
- (_Bool)isOnlineAndCacheExpired;
- (void)saveMetadata;
- (void)finishedOpening;
- (_Bool)isCacheReady;
- (_Bool)isCacheCold;
- (_Bool)isCacheStale;
- (_Bool)isCacheExpired;
- (_Bool)isCacheErased;
- (_Bool)isCacheAgeLessThan:(double)arg1;
- (_Bool)isEmpty;
- (id)allGroupAutocompletions;
- (id)allPersonAutocompletions;
- (id)allAutocompletions;
- (void)dropAutocompletionForGroupIDs:(id)arg1;
- (void)dropAutocompletionsForPersonIDs:(id)arg1;
- (void)finishedAddingOrUpdatingAutocompletions;
- (void)addOrUpdateAutocompletion:(id)arg1 groupID:(id)arg2;
- (void)addOrUpdateAutocompletions:(id)arg1 personID:(id)arg2;
- (id)saveAll;
- (void)drop;
- (void)open;
- (void)close;
- (id)autocompletionsWithMethodFieldValues:(id)arg1;
- (id)autocompletionWithGroupID:(id)arg1;
- (id)autocompletionsWithPersonID:(id)arg1;
- (id)initWithStore:(id)arg1 accountID:(id)arg2;

@end
