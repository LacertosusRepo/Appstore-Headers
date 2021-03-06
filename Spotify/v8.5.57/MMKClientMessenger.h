//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MMKAES256Cipher, MMKMessageCoder;
@protocol MMKLogging;

@interface MMKClientMessenger : NSObject
{
    MMKMessageCoder *_messageCoder;
    MMKAES256Cipher *_cipher;
    id <MMKLogging> _logger;
}

@property(nonatomic) __weak id <MMKLogging> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) MMKAES256Cipher *cipher; // @synthesize cipher=_cipher;
@property(retain, nonatomic) MMKMessageCoder *messageCoder; // @synthesize messageCoder=_messageCoder;
- (void).cxx_destruct;
- (id)encodeMessage:(id)arg1 transactionId:(id)arg2 encrypted:(_Bool)arg3;
- (void)sendMessage:(id)arg1 transactionId:(id)arg2 connection:(id)arg3 sharedSecret:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sendMessage:(id)arg1 transactionId:(id)arg2 connection:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;
- (id)initWithLogger:(id)arg1;

@end

