//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTFreeTierPlaylistReorderParams : NSObject
{
    _Bool _before;
    id <SPTFreeTierPlaylistModelEntityTrackFields> _sourceTrack;
    id <SPTFreeTierPlaylistModelEntityTrackFields> _targetTrack;
}

@property(readonly, nonatomic) _Bool before; // @synthesize before=_before;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistModelEntityTrackFields> targetTrack; // @synthesize targetTrack=_targetTrack;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistModelEntityTrackFields> sourceTrack; // @synthesize sourceTrack=_sourceTrack;
- (void).cxx_destruct;
- (id)initWithSourceTrack:(id)arg1 targetTrack:(id)arg2 before:(_Bool)arg3;

@end
