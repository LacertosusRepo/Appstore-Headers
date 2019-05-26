//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GCKMDNSDataRecord.h"

@class NSArray, NSString;

@interface GCKMDNSPointerRecord : GCKMDNSDataRecord
{
    NSArray *_pointer;
}

+ (id)recordWithName:(id)arg1 pointer:(id)arg2;
@property(retain, nonatomic) NSArray *pointer; // @synthesize pointer=_pointer;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isDataEqualTo:(id)arg1;
@property(readonly, copy, nonatomic) NSString *subtype;
@property(readonly, nonatomic) _Bool hasSubtype;
- (_Bool)writeDataWith:(id)arg1;
- (_Bool)readDataWith:(id)arg1;
- (id)initWithName:(id)arg1 recordClass:(unsigned short)arg2;

@end

