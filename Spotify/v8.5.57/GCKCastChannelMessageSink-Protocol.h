//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, NSString;

@protocol GCKCastChannelMessageSink
- (long long)generateRequestID;
- (long long)sendBinaryMessage:(NSData *)arg1 withNamespace:(NSString *)arg2 toDestinationID:(NSString *)arg3;
- (long long)sendBinaryMessage:(NSData *)arg1 withNamespace:(NSString *)arg2;
- (long long)sendTextMessage:(NSString *)arg1 withNamespace:(NSString *)arg2 toDestinationID:(NSString *)arg3;
- (long long)sendTextMessage:(NSString *)arg1 withNamespace:(NSString *)arg2;
@end
