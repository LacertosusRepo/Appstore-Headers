//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierArtistViewModelData-Protocol.h"

@class NSArray, NSAttributedString, NSNumberFormatter, NSString, SPTPlayerContext;
@protocol SPTFreeTierArtist, SPTFreeTierArtistAlbum, SPTFreeTierArtistPinnedItem;

@interface SPTFreeTierArtistOverviewModel : NSObject <SPTFreeTierArtistViewModelData>
{
    _Bool _spotlightArtist;
    _Bool _verifiedArtist;
    id <SPTFreeTierArtistPinnedItem> _pinnedItem;
    NSString *_customMessage;
    NSArray *_topTracks;
    NSArray *_albums;
    NSArray *_singles;
    NSArray *_appearsOn;
    NSArray *_compilations;
    NSArray *_upcomingConcerts;
    NSArray *_merchandise;
    unsigned long long _albumsCount;
    unsigned long long _singlesCount;
    unsigned long long _appearsOnCount;
    unsigned long long _compilationsCount;
    NSString *_biography;
    NSAttributedString *_biographyAttributedString;
    unsigned long long _monthlyListenersCount;
    unsigned long long _globalChartPosition;
    unsigned long long _playableTracksCount;
    SPTPlayerContext *_playContext;
    NSArray *_playlists;
    NSArray *_relatedArtists;
    NSArray *_images;
    id <SPTFreeTierArtist> _artist;
    id <SPTFreeTierArtistAlbum> _latestRelease;
    NSNumberFormatter *_decimalNumberFormatter;
}

@property(retain, nonatomic) NSNumberFormatter *decimalNumberFormatter; // @synthesize decimalNumberFormatter=_decimalNumberFormatter;
@property(retain, nonatomic) id <SPTFreeTierArtistAlbum> latestRelease; // @synthesize latestRelease=_latestRelease;
@property(readonly, nonatomic) id <SPTFreeTierArtist> artist; // @synthesize artist=_artist;
@property(readonly, nonatomic) NSArray *images; // @synthesize images=_images;
@property(readonly, nonatomic) NSArray *relatedArtists; // @synthesize relatedArtists=_relatedArtists;
@property(readonly, nonatomic) NSArray *playlists; // @synthesize playlists=_playlists;
@property(readonly, nonatomic, getter=isVerifiedArtist) _Bool verifiedArtist; // @synthesize verifiedArtist=_verifiedArtist;
@property(readonly, nonatomic, getter=isSpotlightArtist) _Bool spotlightArtist; // @synthesize spotlightArtist=_spotlightArtist;
@property(readonly, nonatomic) SPTPlayerContext *playContext; // @synthesize playContext=_playContext;
@property(readonly, nonatomic) unsigned long long playableTracksCount; // @synthesize playableTracksCount=_playableTracksCount;
@property(readonly, nonatomic) unsigned long long globalChartPosition; // @synthesize globalChartPosition=_globalChartPosition;
@property(readonly, nonatomic) unsigned long long monthlyListenersCount; // @synthesize monthlyListenersCount=_monthlyListenersCount;
@property(readonly, nonatomic) NSAttributedString *biographyAttributedString; // @synthesize biographyAttributedString=_biographyAttributedString;
@property(readonly, nonatomic) NSString *biography; // @synthesize biography=_biography;
@property(readonly, nonatomic) unsigned long long compilationsCount; // @synthesize compilationsCount=_compilationsCount;
@property(readonly, nonatomic) unsigned long long appearsOnCount; // @synthesize appearsOnCount=_appearsOnCount;
@property(readonly, nonatomic) unsigned long long singlesCount; // @synthesize singlesCount=_singlesCount;
@property(readonly, nonatomic) unsigned long long albumsCount; // @synthesize albumsCount=_albumsCount;
@property(readonly, nonatomic) NSArray *merchandise; // @synthesize merchandise=_merchandise;
@property(readonly, nonatomic) NSArray *upcomingConcerts; // @synthesize upcomingConcerts=_upcomingConcerts;
@property(readonly, nonatomic) NSArray *compilations; // @synthesize compilations=_compilations;
@property(readonly, nonatomic) NSArray *appearsOn; // @synthesize appearsOn=_appearsOn;
@property(readonly, nonatomic) NSArray *singles; // @synthesize singles=_singles;
@property(readonly, nonatomic) NSArray *albums; // @synthesize albums=_albums;
@property(readonly, nonatomic) NSArray *topTracks; // @synthesize topTracks=_topTracks;
@property(readonly, nonatomic) NSString *customMessage; // @synthesize customMessage=_customMessage;
@property(readonly, nonatomic) id <SPTFreeTierArtistPinnedItem> pinnedItem; // @synthesize pinnedItem=_pinnedItem;
- (void).cxx_destruct;
- (id)playContextWithData:(id)arg1;
- (id)merchandiseWithArray:(id)arg1;
- (id)tracksWithArray:(id)arg1;
- (id)albumsWithArray:(id)arg1;
- (id)albumWithDictionary:(id)arg1;
- (id)artistsWithArray:(id)arg1;
- (id)playlistsWithArray:(id)arg1;
- (id)pinnedItemWithDictionary:(id)arg1;
- (id)formattedMonthlyListenersCount;
- (id)initWithDictionary:(id)arg1 artistURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

