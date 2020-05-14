//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GCKSSecurityCertificate : NSObject
{
    struct __SecCertificate *_certificateRef;
}

- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copySummary;
- (id)copyData;
- (struct __SecCertificate *)getRef;
- (void)dealloc;
- (id)initWithBase64String:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithSecCertificateRef:(struct __SecCertificate *)arg1;

@end

