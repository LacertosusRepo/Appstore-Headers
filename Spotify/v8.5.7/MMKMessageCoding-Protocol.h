//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class MMKMessage, MMKMessageEnvelope, NSData;

@protocol MMKMessageCoding
- (MMKMessage *)decodeMessage:(NSData *)arg1;
- (MMKMessageEnvelope *)decode:(NSData *)arg1;
- (NSData *)encodeMessage:(MMKMessage *)arg1;
- (NSData *)encode:(MMKMessageEnvelope *)arg1;
@end

