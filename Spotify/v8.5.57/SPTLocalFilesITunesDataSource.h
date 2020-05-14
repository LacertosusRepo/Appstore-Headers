//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLocalFilesPlaylistsDataSource-Protocol.h"
#import "SPTLocalFilesTracksDataSource-Protocol.h"

@class NSString;

@interface SPTLocalFilesITunesDataSource : NSObject <SPTLocalFilesTracksDataSource, SPTLocalFilesPlaylistsDataSource>
{
}

- (id)retrievePlaylists;
- (id)retrieveSongs;
- (id)retrieveTrackFromMediaItem:(id)arg1;
- (id)localFileURLForTrackInfo:(id)arg1;
- (void)enumerateLocalFilesPlaylists:(CDUnknownBlockType)arg1;
- (void)enumerateLocalFileTracks:(CDUnknownBlockType)arg1;
- (id)imageURLForTrackAssetURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
