//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTStepScrollView;

@protocol SPTStepScrollViewDelegate <NSObject>
- (void)stepScrollViewDidScroll:(SPTStepScrollView *)arg1;
- (void)stepScrollView:(SPTStepScrollView *)arg1 didScrollToRelativeIndex:(long long)arg2;

@optional
- (void)stepScrollView:(SPTStepScrollView *)arg1 didAttemptScrollToRelativeIndex:(long long)arg2;
@end

