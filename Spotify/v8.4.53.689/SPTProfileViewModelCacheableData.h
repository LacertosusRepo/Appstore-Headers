//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface SPTProfileViewModelCacheableData : NSObject
{
    NSArray *_artistsOverview;
    NSArray *_playlistsOverview;
    NSArray *_allArtists;
    NSArray *_allPlaylists;
}

@property(readonly, nonatomic) NSArray *allPlaylists; // @synthesize allPlaylists=_allPlaylists;
@property(readonly, nonatomic) NSArray *allArtists; // @synthesize allArtists=_allArtists;
@property(readonly, nonatomic) NSArray *playlistsOverview; // @synthesize playlistsOverview=_playlistsOverview;
@property(readonly, nonatomic) NSArray *artistsOverview; // @synthesize artistsOverview=_artistsOverview;
- (void).cxx_destruct;
- (void)setTotalPlaylistsCount:(unsigned long long)arg1;
- (_Bool)shouldAppendViewAllForDataType:(long long)arg1 count:(long long)arg2 limit:(long long)arg3;
- (id)modelObjectsOverviewWithAllModelObjectsArray:(id)arg1 viewModelDataType:(long long)arg2 limit:(long long)arg3;
- (id)allModelObjectsWithArrayOfDicts:(id)arg1 viewModelDataType:(long long)arg2;
- (id)initWithJSONDictionary:(id)arg1;

@end

