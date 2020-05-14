//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SPTPlaylistPlatformOptions : NSObject
{
    _Bool _showsOnlyOfflinedContent;
    _Bool _showOnlyLocalFiles;
    _Bool _showOnlyPlayableTracks;
    _Bool _hideBannedTracks;
    _Bool _hideTracksFromBannedArtists;
    NSString *_textFilter;
    NSArray *_sort;
    struct _NSRange _range;
}

@property(copy, nonatomic) NSArray *sort; // @synthesize sort=_sort;
@property(nonatomic) _Bool hideTracksFromBannedArtists; // @synthesize hideTracksFromBannedArtists=_hideTracksFromBannedArtists;
@property(nonatomic) _Bool hideBannedTracks; // @synthesize hideBannedTracks=_hideBannedTracks;
@property(nonatomic) _Bool showOnlyPlayableTracks; // @synthesize showOnlyPlayableTracks=_showOnlyPlayableTracks;
@property(nonatomic) _Bool showOnlyLocalFiles; // @synthesize showOnlyLocalFiles=_showOnlyLocalFiles;
@property(nonatomic) _Bool showsOnlyOfflinedContent; // @synthesize showsOnlyOfflinedContent=_showsOnlyOfflinedContent;
@property(copy, nonatomic) NSString *textFilter; // @synthesize textFilter=_textFilter;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end
