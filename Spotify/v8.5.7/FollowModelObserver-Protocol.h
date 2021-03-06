//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FollowData, FollowModel, NSError;

@protocol FollowModelObserver <NSObject>
- (void)followModel:(FollowModel *)arg1 followDataDidChange:(FollowData *)arg2;

@optional
- (void)followModel:(FollowModel *)arg1 remoteFollowDataDidChange:(FollowData *)arg2;
- (void)followModel:(FollowModel *)arg1 updateDidFailWithError:(NSError *)arg2;
@end

