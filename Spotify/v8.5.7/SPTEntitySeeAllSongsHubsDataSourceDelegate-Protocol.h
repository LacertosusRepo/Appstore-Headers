//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol SPTEntitySeeAllSongsHubsDataSource;

@protocol SPTEntitySeeAllSongsHubsDataSourceDelegate <NSObject>
- (void)entitySeeAllSongsRequireReloadModelWithDataSource:(id <SPTEntitySeeAllSongsHubsDataSource>)arg1;
- (void)entitySeeAllSongsDataSource:(id <SPTEntitySeeAllSongsHubsDataSource>)arg1 didFailToloadModelWithError:(NSError *)arg2;
- (void)entitySeeAllSongsDidLoadModelWithDataSource:(id <SPTEntitySeeAllSongsHubsDataSource>)arg1;
@end

