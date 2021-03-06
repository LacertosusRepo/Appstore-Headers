//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTPlaylistEntityListTrackItem.h"

@class NSString, NSURL;

@interface SPTPlaylistCosmosViewModelSongItem : NSObject <SPTPlaylistEntityListTrackItem>
{
    _Bool _isOffline;
    _Bool _includeAddedBy;
    NSString *_subtitle;
    NSString *_artistName;
    NSURL *_imageURL;
    id <SPTPlaylistCosmosViewModelSongItemDataLoaderFields> _track;
}

@property(nonatomic) _Bool includeAddedBy; // @synthesize includeAddedBy=_includeAddedBy;
@property(nonatomic) _Bool isOffline; // @synthesize isOffline=_isOffline;
@property(retain, nonatomic) id <SPTPlaylistCosmosViewModelSongItemDataLoaderFields> track; // @synthesize track=_track;
- (void).cxx_destruct;
- (id)setupSubtitleWithOwnerName:(id)arg1 artistName:(id)arg2 albumName:(id)arg3;
- (id)offlineURL;
@property(readonly, nonatomic, getter=isRatedExplicit) _Bool ratedExplicit;
@property(readonly, nonatomic, getter=isPremiumOnly) _Bool premiumOnly;
@property(readonly, copy, nonatomic) NSURL *artistURL;
@property(readonly, copy, nonatomic) NSURL *albumURL;
@property(readonly, copy, nonatomic) NSString *albumName;
@property(readonly, copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSURL *trackURL;
- (id)initWithTracksFields:(id)arg1 isOffline:(_Bool)arg2 includeAddedBy:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

