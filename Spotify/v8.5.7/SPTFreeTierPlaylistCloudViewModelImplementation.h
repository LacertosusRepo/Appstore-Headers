//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistCloudViewModel-Protocol.h"

@class NSArray, NSString;

@interface SPTFreeTierPlaylistCloudViewModelImplementation : NSObject <SPTFreeTierPlaylistCloudViewModel>
{
    _Bool _offline;
    NSArray *_tracks;
    NSString *_title;
    NSArray *_trackCloudData;
}

@property(nonatomic, getter=isOffline) _Bool offline; // @synthesize offline=_offline;
@property(copy, nonatomic) NSArray *trackCloudData; // @synthesize trackCloudData=_trackCloudData;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
- (void).cxx_destruct;
- (id)trackCloudDataIncludeBannedTracks:(_Bool)arg1;
- (id)initWithPlaylistTracks:(id)arg1 title:(id)arg2 isOffline:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

