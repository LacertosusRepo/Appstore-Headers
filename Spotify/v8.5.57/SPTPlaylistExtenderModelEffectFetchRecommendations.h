//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlaylistExtenderModelEffect-Protocol.h"

@class NSArray, NSString, NSURL;

@interface SPTPlaylistExtenderModelEffectFetchRecommendations : NSObject <SPTPlaylistExtenderModelEffect>
{
    NSURL *_playlistURL;
    unsigned long long _numberOfRecs;
    NSArray *_playlistTracks;
}

@property(readonly, nonatomic) NSArray *playlistTracks; // @synthesize playlistTracks=_playlistTracks;
@property(readonly, nonatomic) unsigned long long numberOfRecs; // @synthesize numberOfRecs=_numberOfRecs;
@property(readonly, nonatomic) NSURL *playlistURL; // @synthesize playlistURL=_playlistURL;
- (void).cxx_destruct;
- (void)processWithLoop:(id)arg1;
- (id)initWithPlaylistURL:(id)arg1 numberOfRecs:(unsigned long long)arg2 playlistTracks:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
