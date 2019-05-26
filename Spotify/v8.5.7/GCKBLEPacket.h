//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSString;

@interface GCKBLEPacket : NSObject
{
    unsigned short _ipAddressLowBytes;
    NSString *_BSSID;
    NSData *_token;
    NSDate *_tokenExpirationTime;
}

@property(nonatomic) unsigned short ipAddressLowBytes; // @synthesize ipAddressLowBytes=_ipAddressLowBytes;
@property(retain, nonatomic) NSDate *tokenExpirationTime; // @synthesize tokenExpirationTime=_tokenExpirationTime;
@property(retain, nonatomic) NSData *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *BSSID; // @synthesize BSSID=_BSSID;
- (void).cxx_destruct;
- (_Bool)parseManufacturerData:(id)arg1;
- (_Bool)parseServiceData:(id)arg1;
- (id)initWithAdvertisementDictionary:(id)arg1;
- (id)init;

@end

