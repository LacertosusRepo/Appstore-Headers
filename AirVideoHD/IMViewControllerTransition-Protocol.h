//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol IMViewControllerTransition <NSObject>
@property(readonly, nonatomic) _Bool transitionCancelled;
@property(readonly, nonatomic) double animationDuration;
@property(readonly, nonatomic) _Bool interactive;
@property(readonly, nonatomic) _Bool animated;
- (void)scheduleAnimation:(void (^)(void))arg1;
@end

