//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface GCKX509Certificate : NSObject
{
    unsigned long long _serialNumber;
    NSData *_issuer;
    NSData *_subject;
    NSData *_spki;
    double _validityNotBefore;
    double _validityNotAfter;
}

@property(nonatomic) double validityNotAfter; // @synthesize validityNotAfter=_validityNotAfter;
@property(nonatomic) double validityNotBefore; // @synthesize validityNotBefore=_validityNotBefore;
@property(retain, nonatomic) NSData *spki; // @synthesize spki=_spki;
@property(retain, nonatomic) NSData *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) NSData *issuer; // @synthesize issuer=_issuer;
@property(nonatomic) unsigned long long serialNumber; // @synthesize serialNumber=_serialNumber;
- (void).cxx_destruct;
- (unsigned long long)parseUint64FromData:(id)arg1;
- (id)parseGeneralizedTimeFromString:(id)arg1;
- (id)parseUTCTimeFromData:(id)arg1;
- (id)initWithDERCertificateData:(id)arg1;

@end

