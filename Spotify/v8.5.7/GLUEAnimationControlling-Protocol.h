//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol GLUEAnimationControlling <NSObject>
@property(readonly, nonatomic) double animationDuration;
@property(nonatomic) double animationProgress;
@property(nonatomic) _Bool loopAnimation;
- (void)stop;
- (void)pause;
- (void)play;
- (void)playWithCompletion:(void (^)(_Bool))arg1;
@end
