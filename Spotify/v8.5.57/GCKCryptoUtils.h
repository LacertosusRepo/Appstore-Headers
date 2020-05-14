//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GCKCryptoUtils : NSObject
{
}

+ (id)hmacSHA256HashCipherData:(id)arg1 withHMACKey:(id)arg2 nonce:(id)arg3 additionalData:(id)arg4;
+ (id)hmacSHA256HashMessage:(id)arg1 hmacKey:(id)arg2;
+ (id)constructHMACSHA256Message:(id)arg1 withNonce:(id)arg2 additionalData:(id)arg3;
+ (id)encryptWithAES128CTR:(id)arg1 aesKey:(id)arg2 nonce:(id)arg3 error:(id *)arg4;
+ (id)generateCryptoNonceWithError:(id *)arg1;

@end
