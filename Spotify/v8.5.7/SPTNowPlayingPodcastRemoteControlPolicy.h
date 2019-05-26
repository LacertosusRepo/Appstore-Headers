//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTNowPlayingBaseRemoteControlPolicy.h"

#import "SPTNowPlayingModelObserver-Protocol.h"

@class NSString, SPTNowPlayingModel;

@interface SPTNowPlayingPodcastRemoteControlPolicy : SPTNowPlayingBaseRemoteControlPolicy <SPTNowPlayingModelObserver>
{
    SPTNowPlayingModel *_model;
}

@property(retain, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)nowPlayingModel:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)nowPlayingModelDidUpdateMetadata:(id)arg1;
- (_Bool)shouldChangePlaybackPositionCommandBeEnabled;
- (_Bool)shouldChangePlaybackPositionCommandBeAvailable;
- (void)skipForwardWithInterval:(double)arg1;
- (id)skipForwardCommandIntervals;
- (_Bool)shouldSkipForwardCommandBeEnabled;
- (_Bool)shouldSkipForwardCommandBeAvailable;
- (void)skipBackwardWithInterval:(double)arg1;
- (id)skipBackwardCommandIntervals;
- (_Bool)shouldSkipBackwardCommandBeEnabled;
- (_Bool)shouldSkipBackwardCommandBeAvailable;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
