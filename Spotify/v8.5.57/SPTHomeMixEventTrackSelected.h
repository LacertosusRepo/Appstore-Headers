//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTHomeMixEvent.h"

@class NSURL;

@interface SPTHomeMixEventTrackSelected : SPTHomeMixEvent
{
    _Bool _explicitTrack;
    NSURL *_trackURI;
    long long _trackIndex;
}

@property(readonly, nonatomic, getter=isExplicitTrack) _Bool explicitTrack; // @synthesize explicitTrack=_explicitTrack;
@property(readonly, nonatomic) long long trackIndex; // @synthesize trackIndex=_trackIndex;
@property(readonly, nonatomic) NSURL *trackURI; // @synthesize trackURI=_trackURI;
- (void).cxx_destruct;
- (id)initWithTrackURI:(id)arg1 trackIndex:(long long)arg2 explicitTrack:(_Bool)arg3;

@end

