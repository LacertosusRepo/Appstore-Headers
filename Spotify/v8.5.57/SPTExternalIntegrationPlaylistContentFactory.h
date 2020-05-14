//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPTExternalIntegrationPlaylistContentFactory : NSObject
{
}

+ (id)skipToTrackForTrackUID:(id)arg1;
+ (id)trackSubtitleFromMetadata:(id)arg1;
+ (id)playlistSubtitleFromMetadata:(id)arg1;
+ (id)folderItemsContentFromFolderItems:(id)arg1 requestOptions:(id)arg2 onDemandSet:(id)arg3 testManager:(id)arg4;
+ (id)folderContentFromMetadata:(id)arg1 requestOptions:(id)arg2;
+ (id)trackListContentFromMetadata:(id)arg1 playlistURI:(id)arg2 requestOptions:(id)arg3 podcastStringFormatter:(id)arg4;
+ (id)episodeFromMetadata:(id)arg1 playlistURI:(id)arg2 requestOptions:(id)arg3 podcastStringFormatter:(id)arg4;
+ (id)playlistTrackFromMetadata:(id)arg1 playlistURI:(id)arg2 requestOptions:(id)arg3;
+ (id)playlistContentFromMetadata:(id)arg1 requestOptions:(id)arg2 onDemandSet:(id)arg3 testManager:(id)arg4;

@end
