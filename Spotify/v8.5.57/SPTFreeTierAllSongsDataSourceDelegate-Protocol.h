//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol SPTFreeTierAllSongsDataSource;

@protocol SPTFreeTierAllSongsDataSourceDelegate <NSObject>
- (void)freeTierAllSongsRequireReloadModelWithDataSource:(id <SPTFreeTierAllSongsDataSource>)arg1;
- (void)freeTierAllSongsDataSource:(id <SPTFreeTierAllSongsDataSource>)arg1 didFailToloadModelWithError:(NSError *)arg2;
- (void)freeTierAllSongsDidLoadModelWithDataSource:(id <SPTFreeTierAllSongsDataSource>)arg1;
@end

