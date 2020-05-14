//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSAttributedString, NSString, SPTPlayerContext;
@protocol SPTFreeTierArtist, SPTFreeTierArtistAlbum, SPTFreeTierArtistPinnedItem;

@protocol SPTFreeTierArtistViewModelData <NSObject>
@property(readonly, nonatomic) unsigned long long globalChartPosition;
@property(readonly, nonatomic) unsigned long long monthlyListenersCount;
@property(readonly, nonatomic, getter=isVerifiedArtist) _Bool verifiedArtist;
@property(readonly, nonatomic, getter=isSpotlightArtist) _Bool spotlightArtist;
@property(readonly, nonatomic) SPTPlayerContext *playContext;
@property(readonly, nonatomic) NSArray *playlists;
@property(readonly, nonatomic) NSAttributedString *biographyAttributedString;
@property(readonly, nonatomic) NSString *biography;
@property(readonly, nonatomic) unsigned long long playableTracksCount;
@property(readonly, nonatomic) unsigned long long compilationsCount;
@property(readonly, nonatomic) unsigned long long appearsOnCount;
@property(readonly, nonatomic) unsigned long long singlesCount;
@property(readonly, nonatomic) unsigned long long albumsCount;
@property(readonly, nonatomic) NSArray *images;
@property(readonly, nonatomic) NSArray *merchandise;
@property(readonly, nonatomic) NSArray *upcomingConcerts;
@property(readonly, nonatomic) NSArray *compilations;
@property(readonly, nonatomic) NSArray *appearsOn;
@property(readonly, nonatomic) NSArray *singles;
@property(readonly, nonatomic) NSArray *albums;
@property(readonly, nonatomic) NSArray *topTracks;
@property(readonly, nonatomic) NSArray *relatedArtists;
@property(readonly, nonatomic) NSString *customMessage;
@property(readonly, nonatomic) id <SPTFreeTierArtistAlbum> latestRelease;
@property(readonly, nonatomic) id <SPTFreeTierArtistPinnedItem> pinnedItem;
@property(readonly, nonatomic) id <SPTFreeTierArtist> artist;
- (NSString *)formattedMonthlyListenersCount;
@end

