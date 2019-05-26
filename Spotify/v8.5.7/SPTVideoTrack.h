//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTVideoPlayerMessage.h"

@class NSString, SPTPlayOrigin, SPTPlayerTrack;

@interface SPTVideoTrack : SPTVideoPlayerMessage
{
    SPTPlayerTrack *_track;
    SPTPlayOrigin *_origin;
    NSString *_playbackID;
    NSString *_contextURI;
}

@property(readonly, nonatomic) NSString *contextURI; // @synthesize contextURI=_contextURI;
@property(readonly, nonatomic) NSString *playbackID; // @synthesize playbackID=_playbackID;
@property(readonly, nonatomic) SPTPlayOrigin *origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) SPTPlayerTrack *track; // @synthesize track=_track;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isBackgroundable;
- (unsigned long long)hash;
- (id)serializedDictionary;
- (id)initWithTrack:(id)arg1 origin:(id)arg2 playbackID:(id)arg3 contextURI:(id)arg4;
- (id)initWithDictionary:(id)arg1;

@end

