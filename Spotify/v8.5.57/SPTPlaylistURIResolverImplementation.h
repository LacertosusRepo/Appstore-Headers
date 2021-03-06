//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlaylistURIResolver-Protocol.h"

@class NSString;
@protocol SPTPlaylistPlatformPlaylistDataLoader;

@interface SPTPlaylistURIResolverImplementation : NSObject <SPTPlaylistURIResolver>
{
    id <SPTPlaylistPlatformPlaylistDataLoader> _playlistDataLoader;
}

@property(retain, nonatomic) id <SPTPlaylistPlatformPlaylistDataLoader> playlistDataLoader; // @synthesize playlistDataLoader=_playlistDataLoader;
- (void).cxx_destruct;
- (void)resolvePlaylistV1URIForPlaylistURI:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPlaylistPlatformDataLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

