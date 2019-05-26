//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GPBDictionaryInternalsProtocol-Protocol.h"
#import "NSCopying-Protocol.h"

@class GPBMessage;

@interface GPBBoolUInt64Dictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;
    unsigned long long _values[2];
    _Bool _valueSet[2];
}

+ (id)dictionaryWithCapacity:(unsigned long long)arg1;
+ (id)dictionaryWithDictionary:(id)arg1;
+ (id)dictionaryWithUInt64s:(const unsigned long long *)arg1 forKeys:(const _Bool *)arg2 count:(unsigned long long)arg3;
+ (id)dictionaryWithUInt64:(unsigned long long)arg1 forKey:(_Bool)arg2;
+ (id)dictionary;
- (void)removeAll;
- (void)removeUInt64ForKey:(_Bool)arg1;
- (void)setUInt64:(unsigned long long)arg1 forKey:(_Bool)arg2;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;
- (void)enumerateKeysAndUInt64sUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;
- (_Bool)getUInt64:(unsigned long long *)arg1 forKey:(_Bool)arg2;
@property(readonly, nonatomic) unsigned long long count;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithUInt64s:(const unsigned long long *)arg1 forKeys:(const _Bool *)arg2 count:(unsigned long long)arg3;
- (id)init;

@end

