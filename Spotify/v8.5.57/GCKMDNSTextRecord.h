//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GCKMDNSDataRecord.h"

@class NSMutableDictionary, NSString;

@interface GCKMDNSTextRecord : GCKMDNSDataRecord
{
    NSMutableDictionary *_attributes;
    NSString *_attributeList;
}

+ (id)recordWithName:(id)arg1 attributes:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isDataEqualTo:(id)arg1;
- (id)attributeKeys;
- (id)attributeForKey:(id)arg1;
@property(readonly, copy, nonatomic) NSString *attributeList;
- (_Bool)writeDataWith:(id)arg1;
- (_Bool)readDataWith:(id)arg1;
- (id)initWithName:(id)arg1 recordClass:(unsigned short)arg2;

@end

