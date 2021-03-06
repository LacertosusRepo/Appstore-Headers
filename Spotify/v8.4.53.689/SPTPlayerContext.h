//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSDictionary, NSURL, SPTPlayerRestrictions;

@interface SPTPlayerContext : NSObject <NSCopying>
{
    NSURL *_URI;
    NSURL *_URL;
    NSArray *_pages;
    NSArray *_fallbackPages;
    SPTPlayerRestrictions *_restrictions;
    NSDictionary *_metadata;
}

+ (id)contextWithFormatListModel:(id)arg1;
+ (id)friendsHomePlayerTracksFromEntityList:(id)arg1;
+ (id)friendsHomeContextMetadataForEntityList:(id)arg1;
+ (id)spt_friendsHomeContextWithEntityList:(id)arg1 startTrack:(id)arg2;
+ (id)spt_friendsHomeContextWithEntityList:(id)arg1;
+ (id)spt_createAndUpdateContextWithData:(id)arg1 playlistURI:(id)arg2 player:(id)arg3 playlistDataLoader:(id)arg4;
+ (id)contextWithPlaylistURI:(id)arg1;
+ (id)playerTracksFromEntityList:(id)arg1;
+ (id)contextMetadataForEntityList:(id)arg1 requiresShuffle:(_Bool)arg2;
+ (id)spt_shuffleContextWithEntityList:(id)arg1;
+ (id)spt_contextWithEntityList:(id)arg1 optInTrack:(id)arg2 optInTrackIndex:(long long)arg3;
+ (id)spt_contextWithEntityList:(id)arg1 startTrack:(id)arg2;
+ (id)spt_contextWithEntityList:(id)arg1;
+ (id)contextWithDictionary:(id)arg1;
+ (id)contextWithPageURL:(id)arg1;
+ (id)contextWithTracks:(id)arg1;
+ (id)contextForURI:(id)arg1;
@property(copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) SPTPlayerRestrictions *restrictions; // @synthesize restrictions=_restrictions;
@property(copy, nonatomic) NSArray *fallbackPages; // @synthesize fallbackPages=_fallbackPages;
@property(copy, nonatomic) NSArray *pages; // @synthesize pages=_pages;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSURL *URI; // @synthesize URI=_URI;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)serializedDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;

@end

