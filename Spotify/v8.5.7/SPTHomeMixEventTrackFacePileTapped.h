//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTHomeMixEvent.h"

@class NSURL;

@interface SPTHomeMixEventTrackFacePileTapped : SPTHomeMixEvent
{
    NSURL *_trackURI;
    long long _trackIndex;
}

@property(readonly, nonatomic) long long trackIndex; // @synthesize trackIndex=_trackIndex;
@property(readonly, nonatomic) NSURL *trackURI; // @synthesize trackURI=_trackURI;
- (void).cxx_destruct;
- (id)initWithTrackURI:(id)arg1 trackIndex:(long long)arg2;

@end

