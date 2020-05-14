//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPTShareDescriptionFactory : NSObject
{
}

+ (id)legacyShareItemTypeStringForShareType:(long long)arg1;
+ (id)customShareDescriptionWithTitle:(id)arg1 leadingSubtitle:(id)arg2 trailingSubtitle:(id)arg3;
+ (id)concertShareDescriptionWithConcertTitle:(id)arg1 venueName:(id)arg2 dateText:(id)arg3;
+ (id)profileShareDescriptionWithProfileName:(id)arg1;
+ (id)episodeShareDescriptionWithEpisodeName:(id)arg1 publisherName:(id)arg2 showName:(id)arg3;
+ (id)showShareDescriptionWithShowName:(id)arg1 publisherName:(id)arg2;
+ (id)trackShareDescriptionWithTrackName:(id)arg1 artistName:(id)arg2 albumName:(id)arg3;
+ (id)playlistShareDescriptionWithPlaylistName:(id)arg1 ownerName:(id)arg2;
+ (id)artistShareDescriptionWithArtistName:(id)arg1;
+ (id)albumShareDescriptionWithAlbumName:(id)arg1 artistName:(id)arg2;
+ (id)shareDescriptionWithShareType:(long long)arg1 itemName:(id)arg2 creatorName:(id)arg3 sourceName:(id)arg4;

@end
