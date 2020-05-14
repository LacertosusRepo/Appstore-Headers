//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTKeychainManager;

@interface SPTAuthCache : NSObject
{
    id <SPTKeychainManager> _keychainManager;
}

@property(retain, nonatomic) id <SPTKeychainManager> keychainManager; // @synthesize keychainManager=_keychainManager;
- (void).cxx_destruct;
- (void)deleteKeychainEntities;
- (id)keychainEntities;
- (void)saveEntitiesToKeychain:(id)arg1;
- (void)removeAllEntitiesFromCache;
- (id)allCachedEntities;
- (id)existingOrSupersetEntityInCacheForEntity:(id)arg1;
- (id)existingEqualEntityInCacheForEntity:(id)arg1;
- (_Bool)containsOutdatedEntryForEntity:(id)arg1;
- (_Bool)containsValidEntryForEntity:(id)arg1;
- (void)removeEntityFromCache:(id)arg1;
- (void)writeEntityToCache:(id)arg1;
- (void)updateCacheWithEntity:(id)arg1 shouldUpdateLastUsed:(_Bool)arg2;
- (id)initWithKeychainManager:(id)arg1;

@end

