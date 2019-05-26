//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKApplicationStatus, GCKError, GCKReceiverControlChannel, GCKReceiverStatus, NSDictionary;

@protocol GCKReceiverControlChannelDelegate <NSObject>
- (void)receiverControlChannel:(GCKReceiverControlChannel *)arg1 didReceiveAppAvailability:(NSDictionary *)arg2 requestID:(long long)arg3;
- (void)receiverControlChannel:(GCKReceiverControlChannel *)arg1 didReceiveReceiverStatus:(GCKReceiverStatus *)arg2 applicationStatus:(GCKApplicationStatus *)arg3 requestID:(long long)arg4;
- (void)receiverControlChannel:(GCKReceiverControlChannel *)arg1 didReplaceRequestWithID:(long long)arg2;
- (void)receiverControlChannel:(GCKReceiverControlChannel *)arg1 requestDidFailWithID:(long long)arg2 error:(GCKError *)arg3;
- (void)receiverControlChannelDidStopApplication:(GCKReceiverControlChannel *)arg1;
- (void)receiverControlChannel:(GCKReceiverControlChannel *)arg1 didFailToLaunchApplicationWithError:(GCKError *)arg2;
- (void)receiverControlChannel:(GCKReceiverControlChannel *)arg1 didLaunchApplication:(GCKApplicationStatus *)arg2;
@end

