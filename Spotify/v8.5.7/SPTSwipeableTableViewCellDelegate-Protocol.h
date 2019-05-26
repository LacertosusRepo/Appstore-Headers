//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTSwipeableTableViewCell;

@protocol SPTSwipeableTableViewCellDelegate <NSObject>

@optional
- (void)swipeableTableViewCell:(SPTSwipeableTableViewCell *)arg1 didActivateGesture:(long long)arg2;
- (void)swipeableTableViewCell:(SPTSwipeableTableViewCell *)arg1 didCompleteGesture:(long long)arg2 withHorizontalVelocity:(double)arg3 triggerOffset:(double)arg4;
- (void)swipeableTableViewCell:(SPTSwipeableTableViewCell *)arg1 didCompleteGesture:(long long)arg2;
@end

