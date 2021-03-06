//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingDurationViewDataSource-Protocol.h"

@class NSString, SPTNowPlayingTrackPosition;

@interface SPTNowPlayingDurationDataSource : NSObject <SPTNowPlayingDurationViewDataSource>
{
    _Bool _visible;
    _Bool _disallowSeeking;
    SPTNowPlayingTrackPosition *_trackPositionModel;
}

@property(nonatomic, getter=shouldDisallowSeeking) _Bool disallowSeeking; // @synthesize disallowSeeking=_disallowSeeking;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(readonly, nonatomic) SPTNowPlayingTrackPosition *trackPositionModel; // @synthesize trackPositionModel=_trackPositionModel;
- (void).cxx_destruct;
- (void)updateDisallowSeeking:(_Bool)arg1;
- (void)updateIsContainingViewisVisible:(_Bool)arg1;
- (_Bool)durationViewDisallowSeeking:(id)arg1;
- (double)durationViewAnimationSpeed:(id)arg1;
- (double)durationViewCurrentDuration:(id)arg1;
- (double)durationViewCurrentPosition:(id)arg1;
- (id)initWithTrackPositionModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

