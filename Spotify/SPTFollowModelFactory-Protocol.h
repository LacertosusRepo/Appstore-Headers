//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FollowData, FollowModel, MultipleFollowModel, NSArray, NSURL;

@protocol SPTFollowModelFactory <NSObject>
- (void)provideFollowModelForTargetURI:(NSURL *)arg1 completion:(void (^)(FollowModel *, NSError *))arg2;
- (MultipleFollowModel *)createMultipleFollowModelForFollowDataList:(NSArray *)arg1;
- (FollowModel *)createFollowModelForFollowData:(FollowData *)arg1;
@end
