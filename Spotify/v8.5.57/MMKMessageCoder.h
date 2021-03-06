//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMKMessageCoding-Protocol.h"

@class MMKProtobufHeaderConverter, NSArray;
@protocol MMKLogging;

@interface MMKMessageCoder : NSObject <MMKMessageCoding>
{
    id <MMKLogging> _logger;
    MMKProtobufHeaderConverter *_headerConverter;
    NSArray *_protobufConverters;
}

+ (id)createWithLogger:(id)arg1;
@property(retain, nonatomic) NSArray *protobufConverters; // @synthesize protobufConverters=_protobufConverters;
@property(retain, nonatomic) MMKProtobufHeaderConverter *headerConverter; // @synthesize headerConverter=_headerConverter;
@property(nonatomic) __weak id <MMKLogging> logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (id)envelopeFromMessageObject:(id)arg1 header:(id)arg2;
- (id)convertProtoMessageToPublic:(id)arg1;
- (id)encryptedEnvelopeFromEncryptedData:(id)arg1 header:(id)arg2;
- (id)decodeMessage:(id)arg1;
- (id)decode:(id)arg1;
- (id)encodeMessage:(id)arg1;
- (id)encode:(id)arg1;
- (id)initWithLogger:(id)arg1;
- (id)init;

@end

