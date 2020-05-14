//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;
@protocol SPTPlaylistExtenderItem;

@interface SPTFreeTierPlaylistExtenderTrackViewModelImplementation : NSObject
{
    _Bool _isPlayingTrack;
    _Bool _isPlexLoading;
    NSURL *_imageURL;
    id <SPTPlaylistExtenderItem> _playlistExtenderItem;
}

@property(nonatomic) _Bool isPlexLoading; // @synthesize isPlexLoading=_isPlexLoading;
@property(nonatomic) _Bool isPlayingTrack; // @synthesize isPlayingTrack=_isPlayingTrack;
@property(retain, nonatomic) id <SPTPlaylistExtenderItem> playlistExtenderItem; // @synthesize playlistExtenderItem=_playlistExtenderItem;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isImageEnabled) _Bool imageEnabled;
@property(readonly, nonatomic) long long offlineSyncStatus;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, nonatomic) unsigned long long restriction;
@property(readonly, nonatomic, getter=isPremiumOnly) _Bool premiumOnly;
- (id)artistNames;
@property(readonly, nonatomic) long long contextMenuIcon;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, copy, nonatomic) NSString *glueAudioTrackSubtitle;
@property(readonly, copy, nonatomic) NSString *title;
- (id)initWithPlaylistExtenderItem:(id)arg1 isPlayingTrack:(_Bool)arg2 isPlexLoading:(_Bool)arg3;

@end
