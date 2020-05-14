//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, WrappedSenderKey;

@interface EncryptedBroadcastMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *ciphertextPayload; // @dynamic ciphertextPayload;
@property(nonatomic) _Bool hasCiphertextPayload; // @dynamic hasCiphertextPayload;
@property(nonatomic) _Bool hasNonce; // @dynamic hasNonce;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) _Bool hasWrappedSenderKey; // @dynamic hasWrappedSenderKey;
@property(copy, nonatomic) NSData *nonce; // @dynamic nonce;
@property(nonatomic) int type; // @dynamic type;
@property(retain, nonatomic) WrappedSenderKey *wrappedSenderKey; // @dynamic wrappedSenderKey;

@end
