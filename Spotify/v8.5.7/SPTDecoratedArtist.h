//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SPTArtist;

@interface SPTDecoratedArtist : NSObject
{
    SPTArtist *_artist;
    NSArray *_albums;
    NSArray *_singles;
    NSArray *_topTrackURLs;
}

+ (id)topTracksForArtistMetadata:(const struct ArtistMetadata *)arg1;
+ (id)albumsFromGroups:(span_c9060bd8)arg1;
+ (id)decoratedArtistWithArtist:(id)arg1;
+ (id)decoratedArtistWithMetadata:(const struct ArtistMetadata *)arg1;
@property(readonly, nonatomic) NSArray *topTrackURLs; // @synthesize topTrackURLs=_topTrackURLs;
@property(retain, nonatomic) NSArray *singles; // @synthesize singles=_singles;
@property(retain, nonatomic) NSArray *albums; // @synthesize albums=_albums;
@property(retain, nonatomic) SPTArtist *artist; // @synthesize artist=_artist;
- (void).cxx_destruct;
- (id)initWithArtist:(id)arg1 albums:(id)arg2 topTrackURLs:(id)arg3 singles:(id)arg4;

@end

