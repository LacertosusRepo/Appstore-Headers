//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKBroadcastKeyManager, NSData, WrappedSenderKey;

@protocol GCKBroadcastKeyManagerDelegate <NSObject>
- (void)broadcastKeyManager:(GCKBroadcastKeyManager *)arg1 didReceiveWrappedSenderKey:(WrappedSenderKey *)arg2 forSenderKey:(NSData *)arg3;
@end

