//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, NSString;
@protocol SPTFreeTierPlaylistTrackViewModel, SPTPlaylistPlatformPlaylistTrackFields;

@protocol SPTFreeTierPlaylistItemsViewModel <NSObject>
- (NSNumber *)indexForRowId:(NSString *)arg1;
- (id <SPTPlaylistPlatformPlaylistTrackFields>)trackEntityAtIndex:(long long)arg1;
- (id <SPTFreeTierPlaylistTrackViewModel>)trackViewModelAtIndex:(long long)arg1;
@property(nonatomic, readonly) unsigned long long numberOfLoadedItems;
@property(nonatomic, readonly) unsigned long long numberOfItems;
@end

