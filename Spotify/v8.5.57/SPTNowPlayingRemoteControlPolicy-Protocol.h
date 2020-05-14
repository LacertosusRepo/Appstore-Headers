//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, SPTPlayerState;
@protocol SPTNowPlayingRemoteControlPolicyUpdateObserver;

@protocol SPTNowPlayingRemoteControlPolicy <NSObject>
@property(retain, nonatomic) SPTPlayerState *playerState;
@property(readonly, nonatomic) _Bool shouldPlaybackSpeedControlBeEnabled;
@property(readonly, nonatomic) _Bool shouldPlaybackSpeedControlBeAvailable;
@property(readonly, nonatomic) NSString *localizedTitleForBookmarkCommand;
@property(readonly, nonatomic) _Bool shouldBookmarkCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldBookmarkCommandBeAvailable;
@property(readonly, nonatomic) _Bool shouldShuffleCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldShuffleCommandBeAvailable;
@property(readonly, nonatomic) _Bool shouldRepeatCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldRepeatCommandBeAvailable;
@property(readonly, nonatomic) NSString *localizedTitleForDislikeCommand;
@property(readonly, nonatomic) _Bool shouldDislikeCommandBeSelected;
@property(readonly, nonatomic) _Bool shouldDislikeCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldDislikeCommandBeAvailable;
@property(readonly, nonatomic) NSString *localizedTitleForLikeCommand;
@property(readonly, nonatomic) _Bool shouldLikeCommandBeSelected;
@property(readonly, nonatomic) _Bool shouldLikeCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldLikeCommandBeAvailable;
@property(readonly, nonatomic) _Bool shouldChangePlaybackPositionCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldChangePlaybackPositionCommandBeAvailable;
@property(readonly, nonatomic) _Bool shouldPauseCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldSkipPodcastEpisodeInsteadOfSeeking;
@property(readonly, nonatomic) _Bool shouldSeekBackwardCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldSeekBackwardCommandBeAvailable;
@property(readonly, nonatomic) _Bool shouldSeekForwardCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldSeekForwardCommandBeAvailable;
@property(readonly, nonatomic) NSArray *skipForwardCommandIntervals;
@property(readonly, nonatomic) _Bool shouldSkipForwardCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldSkipForwardCommandBeAvailable;
@property(readonly, nonatomic) NSArray *skipBackwardCommandIntervals;
@property(readonly, nonatomic) _Bool shouldSkipBackwardCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldSkipBackwardCommandBeAvailable;
@property(readonly, nonatomic) _Bool shouldPreviousTrackCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldPreviousTrackCommandBeAvailable;
@property(readonly, nonatomic) _Bool shouldNextTrackCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldNextTrackCommandBeAvailable;
- (void)removeRemoteControlStateUpdateObserver:(id <SPTNowPlayingRemoteControlPolicyUpdateObserver>)arg1;
- (void)addRemoteControlStateUpdateObserver:(id <SPTNowPlayingRemoteControlPolicyUpdateObserver>)arg1;
- (void)bookmarkButtonPressedWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (_Bool)shuffleButtonPressedWithShuffleType:(long long)arg1;
- (_Bool)repeatButtonPressedWithRepeatType:(long long)arg1;
- (void)dislikeButtonPressedWithCompletion:(void (^)(_Bool, NSError *))arg1 identifier:(NSString *)arg2;
- (void)likeButtonPressedWithCompletion:(void (^)(_Bool, NSError *))arg1 identifier:(NSString *)arg2;
- (void)skipForwardWithInterval:(double)arg1;
- (void)skipBackwardWithInterval:(double)arg1;
@end

