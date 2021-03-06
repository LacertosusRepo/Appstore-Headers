//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKError, GCKRequest;

@protocol GCKRequestDelegate <NSObject>

@optional
- (void)request:(GCKRequest *)arg1 didAbortWithReason:(long long)arg2;
- (void)request:(GCKRequest *)arg1 didFailWithError:(GCKError *)arg2;
- (void)requestDidComplete:(GCKRequest *)arg1;
@end

