//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EOCObject.h"

#import "NSCopying-Protocol.h"

@class EOCInt, NSArray;

@interface EOCArray : EOCObject <NSCopying>
{
    unsigned char _type;
    NSArray *_value;
    EOCInt *_customTypeHash;
}

@property(retain) EOCInt *customTypeHash; // @synthesize customTypeHash=_customTypeHash;
@property unsigned char type; // @synthesize type=_type;
@property(retain) NSArray *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)object;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithValue:(id)arg1;

@end

