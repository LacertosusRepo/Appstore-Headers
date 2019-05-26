//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol SPTCollectionArtistModel;

@protocol SPTCollectionArtistModelDelegate <NSObject>

@optional
- (void)artistModelOfflineStateChanged:(id <SPTCollectionArtistModel>)arg1;
- (void)artistModelFailedToLoad:(id <SPTCollectionArtistModel>)arg1 withError:(NSError *)arg2;
- (void)artistModelDidLoadMetadata:(id <SPTCollectionArtistModel>)arg1;
- (void)artistModelDidUpdateSessionOfflineStatus:(id <SPTCollectionArtistModel>)arg1;
- (void)artistModelDidUpdatePlayingRow:(id <SPTCollectionArtistModel>)arg1;
- (void)artistModelDidUpdate:(id <SPTCollectionArtistModel>)arg1;
@end

