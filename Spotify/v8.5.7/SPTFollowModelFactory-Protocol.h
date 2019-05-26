//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FollowData, FollowModel, MultipleFollowModel, NSArray, NSString, NSURL;

@protocol SPTFollowModelFactory <NSObject>
- (void)provideFollowModelForTargetURI:(NSURL *)arg1 logContext:(NSString *)arg2 completion:(void (^)(FollowModel *, NSError *))arg3;
- (MultipleFollowModel *)createMultipleFollowModelForFollowDataList:(NSArray *)arg1 logContext:(NSString *)arg2;
- (FollowModel *)createFollowModelForFollowData:(FollowData *)arg1 logContext:(NSString *)arg2;
@end

