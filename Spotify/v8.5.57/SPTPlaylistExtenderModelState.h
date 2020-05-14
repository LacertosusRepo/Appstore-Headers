//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlaylistExtenderModelState-Protocol.h"

@class NSArray, NSError, NSString, NSURL;

@interface SPTPlaylistExtenderModelState : NSObject <SPTPlaylistExtenderModelState>
{
    _Bool _replaceCurrentItems;
    _Bool _loading;
    _Bool _gotSubscription;
    _Bool _offline;
    unsigned long long _preferredNumberOfTracks;
    NSURL *_playlistURL;
    NSString *_playlistName;
    NSArray *_playlistTracks;
    NSArray *_recommendations;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool offline; // @synthesize offline=_offline;
@property(nonatomic) _Bool gotSubscription; // @synthesize gotSubscription=_gotSubscription;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) _Bool replaceCurrentItems; // @synthesize replaceCurrentItems=_replaceCurrentItems;
@property(retain, nonatomic) NSArray *recommendations; // @synthesize recommendations=_recommendations;
@property(retain, nonatomic) NSArray *playlistTracks; // @synthesize playlistTracks=_playlistTracks;
@property(copy, nonatomic) NSString *playlistName; // @synthesize playlistName=_playlistName;
@property(copy, nonatomic) NSURL *playlistURL; // @synthesize playlistURL=_playlistURL;
@property(nonatomic) unsigned long long preferredNumberOfTracks; // @synthesize preferredNumberOfTracks=_preferredNumberOfTracks;
- (void).cxx_destruct;
- (id)initWithPlaylistName:(id)arg1 playlistTracks:(id)arg2 recommendations:(id)arg3 replaceCurrentItems:(_Bool)arg4 loading:(_Bool)arg5 gotSubscription:(_Bool)arg6 preferredNumberOfTracks:(unsigned long long)arg7 playlistURL:(id)arg8 error:(id)arg9 offline:(_Bool)arg10;
- (id)initWithState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

