//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "LOTAnimationView.h"

#import "GLUEAnimationControlling-Protocol.h"
#import "GLUEStatefulAnimationControlling-Protocol.h"
#import "GLUEStatefulAnimationLoading-Protocol.h"

@class NSMutableDictionary, NSString;

@interface GLUELottieStatefulAnimationView : LOTAnimationView <GLUEStatefulAnimationLoading, GLUEStatefulAnimationControlling, GLUEAnimationControlling>
{
    NSMutableDictionary *_transitionAnimations;
    NSMutableDictionary *_stateAnimations;
}

@property(retain, nonatomic) NSMutableDictionary *stateAnimations; // @synthesize stateAnimations=_stateAnimations;
@property(retain, nonatomic) NSMutableDictionary *transitionAnimations; // @synthesize transitionAnimations=_transitionAnimations;
- (void).cxx_destruct;
- (void)setAnimationPath:(id)arg1;
- (_Bool)transitionToState:(unsigned long long)arg1;
- (_Bool)transitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (_Bool)transitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)hasAnimations;
- (void)setAnimationPath:(id)arg1 forLoopedState:(unsigned long long)arg2;
- (void)setAnimationPath:(id)arg1 forState:(unsigned long long)arg2 progress:(double)arg3;
- (void)setAnimationPath:(id)arg1 fromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) double animationDuration;
@property(nonatomic) double animationProgress;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isAnimationPlaying;
@property(nonatomic) _Bool loopAnimation;
@property(readonly) Class superclass;

@end
