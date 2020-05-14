//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSearchOfflinePlaylistDataLoader-Protocol.h"

@class NSString;
@protocol SPTPlaylistPlatformPlaylistDataLoader;

@interface SPTSearchOfflinePlaylistDataLoaderImplementation : NSObject <SPTSearchOfflinePlaylistDataLoader>
{
    id <SPTPlaylistPlatformPlaylistDataLoader> _playlistDataLoader;
}

@property(readonly, nonatomic) id <SPTPlaylistPlatformPlaylistDataLoader> playlistDataLoader; // @synthesize playlistDataLoader=_playlistDataLoader;
- (void).cxx_destruct;
- (CDUnknownBlockType)itemToPlaylistBlock;
- (void)fetchPlaylistsForQuery:(id)arg1 limit:(unsigned long long)arg2 onCompletion:(CDUnknownBlockType)arg3;
- (id)initWithPlaylistPlatformPlaylistDataLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
