//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTEditPlaylistModelEntityTrackFields;

@interface SPTEditPlaylistReorderParams : NSObject
{
    _Bool _before;
    id <SPTEditPlaylistModelEntityTrackFields> _sourceTrack;
    id <SPTEditPlaylistModelEntityTrackFields> _targetTrack;
}

@property(readonly, nonatomic) _Bool before; // @synthesize before=_before;
@property(readonly, nonatomic) id <SPTEditPlaylistModelEntityTrackFields> targetTrack; // @synthesize targetTrack=_targetTrack;
@property(readonly, nonatomic) id <SPTEditPlaylistModelEntityTrackFields> sourceTrack; // @synthesize sourceTrack=_sourceTrack;
- (void).cxx_destruct;
- (id)initWithSourceTrack:(id)arg1 targetTrack:(id)arg2 before:(_Bool)arg3;

@end

