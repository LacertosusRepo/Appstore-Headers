//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTFreeTierPlaylistModelEntityTrackFields;

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

