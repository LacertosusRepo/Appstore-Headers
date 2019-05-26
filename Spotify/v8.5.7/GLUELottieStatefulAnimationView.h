//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "LOTAnimationView.h"

#import "GLUEStatefulAnimationControlling-Protocol.h"
#import "GLUEStatefulAnimationLoading-Protocol.h"

@class NSMutableDictionary, NSString;

@interface GLUELottieStatefulAnimationView : LOTAnimationView <GLUEStatefulAnimationLoading, GLUEStatefulAnimationControlling>
{
    _Bool _isAnimating;
    NSMutableDictionary *_transitionAnimations;
    NSMutableDictionary *_stateAnimations;
}

@property(retain, nonatomic) NSMutableDictionary *stateAnimations; // @synthesize stateAnimations=_stateAnimations;
@property(retain, nonatomic) NSMutableDictionary *transitionAnimations; // @synthesize transitionAnimations=_transitionAnimations;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
- (void).cxx_destruct;
- (void)setAnimationPath:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (_Bool)transitionToState:(unsigned long long)arg1;
- (_Bool)transitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (_Bool)hasAnimations;
- (void)setAnimationPath:(id)arg1 forLoopedState:(unsigned long long)arg2;
- (void)setAnimationPath:(id)arg1 forState:(unsigned long long)arg2 progress:(double)arg3;
- (void)setAnimationPath:(id)arg1 fromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
