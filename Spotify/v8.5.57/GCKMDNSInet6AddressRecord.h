//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GCKMDNSDataRecord.h"

@class NSString;

@interface GCKMDNSInet6AddressRecord : GCKMDNSDataRecord
{
    NSString *_ipAddress;
}

+ (id)recordWithName:(id)arg1 ipAddress:(id)arg2;
@property(retain, nonatomic) NSString *ipAddress; // @synthesize ipAddress=_ipAddress;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isDataEqualTo:(id)arg1;
- (_Bool)writeDataWith:(id)arg1;
- (_Bool)readDataWith:(id)arg1;
- (id)initWithName:(id)arg1 recordClass:(unsigned short)arg2;

@end

