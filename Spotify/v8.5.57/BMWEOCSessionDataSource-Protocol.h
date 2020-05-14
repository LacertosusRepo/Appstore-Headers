//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BMWEOCMessage, BMWEOCSession, NSData, NSString;

@protocol BMWEOCSessionDataSource <NSObject>
- (void)didStartSession:(BMWEOCSession *)arg1;
- (_Bool)maySendMessage;
- (void)eventOccured:(NSString *)arg1;
- (void)errorDetected:(NSString *)arg1;
- (BMWEOCMessage *)receiveMessage:(BMWEOCMessage *)arg1;
- (void)writeData:(NSData *)arg1;
@end

