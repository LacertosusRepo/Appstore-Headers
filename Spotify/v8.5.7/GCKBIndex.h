//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface GCKBIndex : NSObject <NSCopying>
{
    unsigned long long _value;
}

@property(nonatomic) unsigned long long value; // @synthesize value=_value;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithValue:(unsigned long long)arg1;
- (id)init;

@end

