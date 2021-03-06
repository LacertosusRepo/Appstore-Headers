//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTFreeTierAllSongsRegistration;

@protocol SPTFreeTierAllSongsRegistry <NSObject>
- (void)unregisterFallbackHandler:(id <SPTFreeTierAllSongsRegistration>)arg1;
- (void)unregisterHandler:(id <SPTFreeTierAllSongsRegistration>)arg1;
- (id <SPTFreeTierAllSongsRegistration>)registerFallbackHandler:(id <SPTFreeTierAllSongsDataSource> (^)(NSURL *, NSString *))arg1;
- (id <SPTFreeTierAllSongsRegistration>)registerHandler:(id <SPTFreeTierAllSongsDataSource> (^)(NSURL *, NSString *))arg1 predicate:(_Bool (^)(NSString *, NSDictionary *, NSURL *))arg2;
- (void)fetchDataSourceForURL:(NSURL *)arg1 withCompletion:(void (^)(id <SPTFreeTierAllSongsDataSource>))arg2;
@end

