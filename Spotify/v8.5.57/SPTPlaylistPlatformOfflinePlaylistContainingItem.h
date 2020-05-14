//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

#import "SPTPlaylistPlatformFieldName-Protocol.h"
#import "SPTPlaylistPlatformFieldURL-Protocol.h"

@class NSString, NSURL;

@interface SPTPlaylistPlatformOfflinePlaylistContainingItem : GPBMessage <SPTPlaylistPlatformFieldName, SPTPlaylistPlatformFieldURL>
{
}

+ (id)descriptor;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) NSURL *URL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *playlistLink; // @dynamic playlistLink;
@property(copy, nonatomic) NSString *playlistName; // @dynamic playlistName;
@property(readonly) Class superclass;

@end

