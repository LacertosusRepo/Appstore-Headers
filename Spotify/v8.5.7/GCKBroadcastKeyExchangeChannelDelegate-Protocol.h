//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKBroadcastKeyExchangeChannel, GCKError, NSData, WrappedSenderKey;

@protocol GCKBroadcastKeyExchangeChannelDelegate <NSObject>
- (void)broadcastKeyExchangeChannel:(GCKBroadcastKeyExchangeChannel *)arg1 didFailToReceiveWrappedSenderKeyForSenderKey:(NSData *)arg2 withError:(GCKError *)arg3;
- (void)broadcastKeyExchangeChannel:(GCKBroadcastKeyExchangeChannel *)arg1 didReceiveWrappedSenderKey:(WrappedSenderKey *)arg2 forSenderKey:(NSData *)arg3;
@end

