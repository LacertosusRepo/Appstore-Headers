//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface SPTTasteCollectionCellItem : NSObject
{
    int _genreIndex;
    NSString *_itemId;
    NSMutableArray *_artists;
    long long _itemType;
    NSMutableArray *_expandedArtists;
}

@property(retain, nonatomic) NSMutableArray *expandedArtists; // @synthesize expandedArtists=_expandedArtists;
@property long long itemType; // @synthesize itemType=_itemType;
@property int genreIndex; // @synthesize genreIndex=_genreIndex;
@property(retain, nonatomic) NSMutableArray *artists; // @synthesize artists=_artists;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isCellItemEqual:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)returnExpandedItems;
- (_Bool)findAndReplaceArtist:(id)arg1;
- (void)insertRelatedArtistsForGenreData:(id)arg1;
- (id)initWithArtistData:(id)arg1;
- (id)initWithGenreData:(id)arg1;

@end

