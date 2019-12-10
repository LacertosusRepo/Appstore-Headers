//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKError, GCKMultizoneControlChannel, GCKMultizoneDevice, GCKMultizoneStatus, NSString;

@protocol GCKMultizoneControlChannelDelegate <NSObject>
- (void)multizoneControlChannel:(GCKMultizoneControlChannel *)arg1 didRemoveDeviceWithID:(NSString *)arg2;
- (void)multizoneControlChannel:(GCKMultizoneControlChannel *)arg1 didUpdateDevice:(GCKMultizoneDevice *)arg2;
- (void)multizoneControlChannel:(GCKMultizoneControlChannel *)arg1 didAddDevice:(GCKMultizoneDevice *)arg2;
- (void)multizoneControlChannel:(GCKMultizoneControlChannel *)arg1 requestDidFailWithID:(long long)arg2 reason:(GCKError *)arg3;
- (void)multizoneControlChannel:(GCKMultizoneControlChannel *)arg1 didReceiveMultizoneStatus:(GCKMultizoneStatus *)arg2;
@end

