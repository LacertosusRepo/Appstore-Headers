//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;

@protocol SPTShelf <NSObject>
- (void)execute:(NSURL *)arg1 source:(NSString *)arg2 completion:(void (^)(long long))arg3;
- (void)shelfViewModel:(void (^)(SPTSwipeableTableViewCellShelfModel *))arg1;
@end

