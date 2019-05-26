//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IDA4AConnection, IDA4APacket, NSError;

@protocol IDA4AConnectionDelegate <NSObject>
- (void)connectionDidCloseUnderlyingStreams:(IDA4AConnection *)arg1;
- (void)connection:(IDA4AConnection *)arg1 errorOccured:(NSError *)arg2;
- (void)connection:(IDA4AConnection *)arg1 didReceivePacket:(IDA4APacket *)arg2;

@optional
- (void)connection:(IDA4AConnection *)arg1 didSendBytes:(long long)arg2;
- (void)connection:(IDA4AConnection *)arg1 willSendBytes:(long long)arg2;
@end
