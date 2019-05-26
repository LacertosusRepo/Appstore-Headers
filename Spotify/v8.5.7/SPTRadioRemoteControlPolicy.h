//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingRemoteControlPolicy-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"
#import "SPTRadioObserver-Protocol.h"

@class NSArray, NSHashTable, NSString, SPTPlayerState, SPTRadioPlaybackService;
@protocol SPTPlayer, SPTRadioManager, SPTRadioTestManager;

@interface SPTRadioRemoteControlPolicy : NSObject <SPTPlayerObserver, SPTRadioObserver, SPTNowPlayingRemoteControlPolicy>
{
    _Bool _useThumbUpDownUI;
    _Bool _feedbackEnabled;
    SPTPlayerState *_playerState;
    id <SPTPlayer> _player;
    id <SPTRadioManager> _radioManager;
    SPTRadioPlaybackService *_playbackService;
    id <SPTRadioTestManager> _testManager;
    SPTPlayerState *_currentState;
    long long _currentFeedback;
    NSHashTable *_observers;
}

@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) long long currentFeedback; // @synthesize currentFeedback=_currentFeedback;
@property(copy, nonatomic) SPTPlayerState *currentState; // @synthesize currentState=_currentState;
@property(nonatomic, getter=isFeedbackEnabled) _Bool feedbackEnabled; // @synthesize feedbackEnabled=_feedbackEnabled;
@property(nonatomic, getter=isEnabled) _Bool useThumbUpDownUI; // @synthesize useThumbUpDownUI=_useThumbUpDownUI;
@property(retain, nonatomic) id <SPTRadioTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTRadioPlaybackService *playbackService; // @synthesize playbackService=_playbackService;
@property(retain, nonatomic) id <SPTRadioManager> radioManager; // @synthesize radioManager=_radioManager;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) SPTPlayerState *playerState; // @synthesize playerState=_playerState;
- (void).cxx_destruct;
- (_Bool)isManuallyQueued;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (void)radioManager:(id)arg1 thumbsFeedbackChangedForTrackURL:(id)arg2 trackFeedback:(long long)arg3;
- (void)notifyObserversThatPolicyDidChange;
- (void)removeRemoteControlStateUpdateObserver:(id)arg1;
- (void)addRemoteControlStateUpdateObserver:(id)arg1;
- (void)bookmarkButtonPressedWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *localizedTitleForBookmarkCommand;
@property(readonly, nonatomic) _Bool shouldBookmarkCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldBookmarkCommandBeAvailable;
- (void)dislikeButtonPressedWithCompletion:(CDUnknownBlockType)arg1 identifier:(id)arg2;
@property(readonly, nonatomic) NSString *localizedTitleForDislikeCommand;
@property(readonly, nonatomic) _Bool shouldDislikeCommandBeSelected;
@property(readonly, nonatomic) _Bool shouldDislikeCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldDislikeCommandBeAvailable;
- (void)likeButtonPressedWithCompletion:(CDUnknownBlockType)arg1 identifier:(id)arg2;
@property(readonly, nonatomic) NSString *localizedTitleForLikeCommand;
- (void)shuffleButtonPressedWithShuffleType:(long long)arg1;
@property(readonly, nonatomic) _Bool shouldShuffleCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldShuffleCommandBeAvailable;
- (void)repeatButtonPressedWithRepeatType:(long long)arg1;
@property(readonly, nonatomic) _Bool shouldRepeatCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldRepeatCommandBeAvailable;
@property(readonly, nonatomic) _Bool shouldLikeCommandBeSelected;
@property(readonly, nonatomic) _Bool shouldLikeCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldLikeCommandBeAvailable;
@property(readonly, nonatomic) _Bool shouldPauseCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldChangePlaybackPositionCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldChangePlaybackPositionCommandBeAvailable;
@property(readonly, nonatomic) _Bool shouldSeekBackwardCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldSeekBackwardCommandBeAvailable;
@property(readonly, nonatomic) _Bool shouldSeekForwardCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldSeekForwardCommandBeAvailable;
- (void)skipForwardWithInterval:(double)arg1;
@property(readonly, nonatomic) NSArray *skipForwardCommandIntervals;
@property(readonly, nonatomic) _Bool shouldSkipForwardCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldSkipForwardCommandBeAvailable;
- (void)skipBackwardWithInterval:(double)arg1;
@property(readonly, nonatomic) NSArray *skipBackwardCommandIntervals;
@property(readonly, nonatomic) _Bool shouldSkipBackwardCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldSkipBackwardCommandBeAvailable;
@property(readonly, nonatomic) _Bool shouldPreviousTrackCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldPreviousTrackCommandBeAvailable;
@property(readonly, nonatomic) _Bool shouldNextTrackCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldNextTrackCommandBeAvailable;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 radioManager:(id)arg2 playbackService:(id)arg3 testManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
