//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTHubLoadingLogger <NSObject>
- (void)logLoadingCancelledWithDataSource:(unsigned long long)arg1;
- (void)logLoadingFailedWithDataSource:(unsigned long long)arg1;
- (void)logLoadingCompletedWithDataSource:(unsigned long long)arg1;
- (void)logLoadingStartedWithReason:(unsigned long long)arg1;
@end

