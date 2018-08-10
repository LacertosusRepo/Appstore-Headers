//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface SPTCollectionPlatformFetchOptions : NSObject <NSCopying>
{
    _Bool _showsOnlyOfflinedContent;
    _Bool _showOnlyLocalFiles;
    _Bool _showOnlyPlayable;
    _Bool _showsOnlyCompleteContainers;
    _Bool _showsOnlySavedAlbums;
    _Bool _showsOnlyFollowedArtists;
    _Bool _groupByName;
    _Bool _showOnlyTracksNotInAlbums;
    double _minimumUpdateInterval;
    NSArray *_sort;
    NSString *_textFilter;
    unsigned long long _mediaType;
    struct _NSRange _range;
}

@property(nonatomic) _Bool showOnlyTracksNotInAlbums; // @synthesize showOnlyTracksNotInAlbums=_showOnlyTracksNotInAlbums;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) _Bool groupByName; // @synthesize groupByName=_groupByName;
@property(nonatomic) _Bool showsOnlyFollowedArtists; // @synthesize showsOnlyFollowedArtists=_showsOnlyFollowedArtists;
@property(nonatomic) _Bool showsOnlySavedAlbums; // @synthesize showsOnlySavedAlbums=_showsOnlySavedAlbums;
@property(nonatomic) _Bool showsOnlyCompleteContainers; // @synthesize showsOnlyCompleteContainers=_showsOnlyCompleteContainers;
@property(nonatomic) _Bool showOnlyPlayable; // @synthesize showOnlyPlayable=_showOnlyPlayable;
@property(nonatomic) _Bool showOnlyLocalFiles; // @synthesize showOnlyLocalFiles=_showOnlyLocalFiles;
@property(nonatomic) _Bool showsOnlyOfflinedContent; // @synthesize showsOnlyOfflinedContent=_showsOnlyOfflinedContent;
@property(copy, nonatomic) NSString *textFilter; // @synthesize textFilter=_textFilter;
@property(copy, nonatomic) NSArray *sort; // @synthesize sort=_sort;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(nonatomic) double minimumUpdateInterval; // @synthesize minimumUpdateInterval=_minimumUpdateInterval;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
