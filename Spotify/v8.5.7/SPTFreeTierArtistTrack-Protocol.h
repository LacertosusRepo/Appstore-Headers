//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTFreeTierArtistEntity-Protocol.h"

@protocol SPTFreeTierArtistAlbum;

@protocol SPTFreeTierArtistTrack <SPTFreeTierArtistEntity>
@property(readonly, nonatomic, getter=isPremiumOnly) _Bool premiumOnly;
@property(readonly, nonatomic, getter=isRatedExplicit) _Bool ratedExplicit;
@property(readonly, nonatomic) unsigned long long playcount;
@property(readonly, nonatomic) id <SPTFreeTierArtistAlbum> album;
@end

