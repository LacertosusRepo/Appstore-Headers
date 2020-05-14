//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTFreeTierArtistEntityImpl.h"

#import "SPTFreeTierArtistPlaylist-Protocol.h"

@class NSString, NSURL;
@protocol SPTFreeTierArtistImage;

@interface SPTFreeTierArtistPlaylistImpl : SPTFreeTierArtistEntityImpl <SPTFreeTierArtistPlaylist>
{
    NSString *_subtitle;
    unsigned long long _numberOfFollowers;
}

@property(nonatomic) unsigned long long numberOfFollowers; // @synthesize numberOfFollowers=_numberOfFollowers;
- (void).cxx_destruct;
- (_Bool)isPreviewable;
@property(readonly, nonatomic) NSURL *imageURL;
- (id)actionURL;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *fileId;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <SPTFreeTierArtistImage> headerImage;
@property(readonly, nonatomic) id <SPTFreeTierArtistImage> image;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSURL *uri;

@end

