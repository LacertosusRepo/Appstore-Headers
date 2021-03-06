//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlaylistExtenderModelEvent-Protocol.h"

@class NSString;

@interface SPTPlaylistExtenderModelEventPlaylistUpdated : NSObject <SPTPlaylistExtenderModelEvent>
{
    NSString *_playlistName;
    unsigned long long _playlistTrackCount;
}

@property(readonly, nonatomic) unsigned long long playlistTrackCount; // @synthesize playlistTrackCount=_playlistTrackCount;
@property(readonly, nonatomic) NSString *playlistName; // @synthesize playlistName=_playlistName;
- (void).cxx_destruct;
- (void)processWithState:(id)arg1 loop:(id)arg2;
- (id)initWithPlaylistName:(id)arg1 playlistTrackCount:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

