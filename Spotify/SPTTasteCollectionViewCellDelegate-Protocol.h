//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSIndexPath, NSString, SPTTasteCollectionItemViewCell, SPTTasteCollectionMediaItem, SPTTasteCollectionViewCell;

@protocol SPTTasteCollectionViewCellDelegate <NSObject>
- (void)tasteCollectionViewCell:(SPTTasteCollectionViewCell *)arg1 didRequestRelatedArtistsForSelectedItemWithArtistId:(NSString *)arg2;
- (void)tasteCollectionViewCell:(SPTTasteCollectionViewCell *)arg1 didExpandSelectedGenreWithArtists:(NSArray *)arg2 indexPath:(NSIndexPath *)arg3;
- (void)tasteCollectionViewCell:(SPTTasteCollectionViewCell *)arg1 didSelectCell:(SPTTasteCollectionItemViewCell *)arg2 withMediaItem:(SPTTasteCollectionMediaItem *)arg3 indexPath:(NSIndexPath *)arg4;
@end
