//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingDurationUnitViewModel-Protocol.h"
#import "SPTNowPlayingTrackMetadataQueueObserver-Protocol.h"
#import "SPTNowPlayingTrackPositionObserver-Protocol.h"

@class NSString, SPTNowPlayingLogger, SPTNowPlayingTrackMetadataQueue, SPTNowPlayingTrackPosition;
@protocol SPTLocalSettings, SPTNowPlayingDurationUnitViewModelDelegate, SPTPlayer;

@interface SPTNowPlayingDurationUnitViewModelImplementation : NSObject <SPTNowPlayingTrackPositionObserver, SPTNowPlayingTrackMetadataQueueObserver, SPTNowPlayingDurationUnitViewModel>
{
    _Bool _showLabels;
    _Bool _scrubbing;
    _Bool _visible;
    id <SPTNowPlayingDurationUnitViewModelDelegate> _delegate;
    SPTNowPlayingTrackPosition *_trackPosition;
    SPTNowPlayingTrackMetadataQueue *_trackMetadataQueue;
    SPTNowPlayingLogger *_logger;
    id <SPTPlayer> _player;
    id <SPTLocalSettings> _localSettings;
}

@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(readonly, nonatomic) SPTNowPlayingLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTNowPlayingTrackMetadataQueue *trackMetadataQueue; // @synthesize trackMetadataQueue=_trackMetadataQueue;
@property(readonly, nonatomic) SPTNowPlayingTrackPosition *trackPosition; // @synthesize trackPosition=_trackPosition;
@property(nonatomic) _Bool scrubbing; // @synthesize scrubbing=_scrubbing;
@property(nonatomic) _Bool showLabels; // @synthesize showLabels=_showLabels;
@property(nonatomic) __weak id <SPTNowPlayingDurationUnitViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(nonatomic) _Bool timeRemainingLabelShowsDuration;
- (void)updateObservers:(_Bool)arg1;
- (void)trackMetadataQueueDidFinishUpdating:(id)arg1;
- (void)trackMetadataQueue:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)nowPlayingTrackPositionDidChange:(id)arg1;
- (void)scrubbedToPosition:(double)arg1;
- (_Bool)disallowsSeeking;
- (double)animationSpeed;
- (id)currentTimeRemainingTextWithSliderValue:(float)arg1;
- (id)currentTrackProgressTextWithSliderValue:(float)arg1;
- (double)currentTrackLength;
- (double)currentTrackProgress;
- (void)dealloc;
- (id)initWithTrackPosition:(id)arg1 player:(id)arg2 trackMetadataQueue:(id)arg3 localSettings:(id)arg4 logger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

