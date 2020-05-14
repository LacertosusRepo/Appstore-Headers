//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GCKSKeychain, NSArray, NSData;

@interface GCKClientCertificate : NSObject
{
    GCKSKeychain *_keychain;
    NSArray *_clientIdentities;
    NSData *_TLSCertificateHash;
}

@property(readonly, nonatomic) NSData *TLSCertificateHash; // @synthesize TLSCertificateHash=_TLSCertificateHash;
- (void).cxx_destruct;
- (void)dumpKeychainItems;
- (_Bool)isCertificateStillValidInternal:(id)arg1;
- (_Bool)isCertificateStillValid;
- (id)getPublicKeyBitsFromDerCert:(id)arg1;
- (void)removeIdentityFromKeychain:(id)arg1;
- (void)importPKCS12:(id)arg1 withPassword:(id)arg2;
@property(readonly, nonatomic) NSArray *clientIdentities;
- (id)init;

@end

