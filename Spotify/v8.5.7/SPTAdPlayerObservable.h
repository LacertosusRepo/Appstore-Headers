//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlayerObserver-Protocol.h"

@class CADisplayLink, NSString, SPTObserverManager;
@protocol SPTComScoreAnalyticsManager, SPTPlayer;

@interface SPTAdPlayerObservable : NSObject <SPTPlayerObserver>
{
    _Bool _active;
    id <SPTPlayer> _player;
    CADisplayLink *_displayLink;
    SPTObserverManager *_observerManager;
    id <SPTComScoreAnalyticsManager> _comScoreAnalyticsManager;
    struct SPTNowPlayingTrack _currentTrack;
}

@property(nonatomic) struct SPTNowPlayingTrack currentTrack; // @synthesize currentTrack=_currentTrack;
@property(readonly, nonatomic) id <SPTComScoreAnalyticsManager> comScoreAnalyticsManager; // @synthesize comScoreAnalyticsManager=_comScoreAnalyticsManager;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(readonly, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)onDisplayLink:(id)arg1;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 comScoreAnalyticsManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
