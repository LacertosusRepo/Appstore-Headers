//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SPTPlaylistPlatformPlaylistTracksFetchOptions;
@protocol SPTFreeTierPlaylistSortingFilteringDelegate;

@protocol SPTFreeTierPlaylistSortingFiltering <NSObject>
@property(readonly, nonatomic, getter=isSorted) _Bool sorted;
@property(copy, nonatomic) NSString *textFilter;
@property(nonatomic) __weak id <SPTFreeTierPlaylistSortingFilteringDelegate> delegate;
- (void)resetFilters;
- (void)applySortingAndFilteringToFetchOptions:(SPTPlaylistPlatformPlaylistTracksFetchOptions *)arg1;
- (void)loadSavedSettings;
@end
