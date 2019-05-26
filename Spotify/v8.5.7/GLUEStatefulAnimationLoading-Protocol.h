//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GLUEAnimationPath;

@protocol GLUEStatefulAnimationLoading <NSObject>
- (_Bool)hasAnimations;
- (void)setAnimationPath:(GLUEAnimationPath *)arg1 forLoopedState:(unsigned long long)arg2;
- (void)setAnimationPath:(GLUEAnimationPath *)arg1 forState:(unsigned long long)arg2 progress:(double)arg3;
- (void)setAnimationPath:(GLUEAnimationPath *)arg1 fromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
@end

