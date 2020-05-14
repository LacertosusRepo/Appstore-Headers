//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class GPBUInt32Array, GPBUInt64Array, NSArray, NSMutableArray;

@interface GPBUnknownField : NSObject <NSCopying>
{
    int number_;
    GPBUInt64Array *mutableVarintList_;
    GPBUInt32Array *mutableFixed32List_;
    GPBUInt64Array *mutableFixed64List_;
    NSMutableArray *mutableLengthDelimitedList_;
    NSMutableArray *mutableGroupList_;
}

@property(readonly, nonatomic) NSArray *groupList; // @synthesize groupList=mutableGroupList_;
@property(readonly, nonatomic) NSArray *lengthDelimitedList; // @synthesize lengthDelimitedList=mutableLengthDelimitedList_;
@property(readonly, nonatomic) GPBUInt64Array *fixed64List; // @synthesize fixed64List=mutableFixed64List_;
@property(readonly, nonatomic) GPBUInt32Array *fixed32List; // @synthesize fixed32List=mutableFixed32List_;
@property(readonly, nonatomic) GPBUInt64Array *varintList; // @synthesize varintList=mutableVarintList_;
@property(readonly, nonatomic) int number; // @synthesize number=number_;
- (void)addGroup:(id)arg1;
- (void)addLengthDelimited:(id)arg1;
- (void)addFixed64:(unsigned long long)arg1;
- (void)addFixed32:(unsigned int)arg1;
- (void)addVarint:(unsigned long long)arg1;
- (void)mergeFromField:(id)arg1;
- (id)description;
- (unsigned long long)serializedSizeAsMessageSetExtension;
- (void)writeAsMessageSetExtensionToOutput:(id)arg1;
- (unsigned long long)serializedSize;
- (void)writeToOutput:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithNumber:(int)arg1;

@end

