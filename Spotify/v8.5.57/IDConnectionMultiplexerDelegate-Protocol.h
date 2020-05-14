//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IDConnectionMultiplexer, NSError, NSString;

@protocol IDConnectionMultiplexerDelegate <NSObject>
- (void)connectionMultiplexerDidReceiveEndOfStreamFromA4AConnection:(IDConnectionMultiplexer *)arg1;
- (void)connectionMultiplexerDidFinishHandshake:(IDConnectionMultiplexer *)arg1;
- (void)connectionMultiplexer:(IDConnectionMultiplexer *)arg1 errorOccurred:(NSError *)arg2;

@optional
- (void)connectionMultiplexer:(IDConnectionMultiplexer *)arg1 didReceiveBroadcast:(NSString *)arg2;
- (void)connectionMultiplexerDidReceiveHangup:(IDConnectionMultiplexer *)arg1;
@end
