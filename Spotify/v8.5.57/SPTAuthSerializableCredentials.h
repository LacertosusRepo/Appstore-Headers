//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface SPTAuthSerializableCredentials : NSObject
{
    struct SerializableCredentials _credentials;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *authBlob;
@property(readonly, nonatomic) NSString *username;
- (const struct SerializableCredentials *)cpp;
- (id)credentialsByTransferringToDeviceID:(id)arg1;
- (id)initWithSerializableCredentials:(struct SerializableCredentials)arg1;
- (id)initWithUsername:(id)arg1 authBlob:(id)arg2 deviceID:(id)arg3;

@end

