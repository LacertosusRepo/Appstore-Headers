//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SPTSeekOptions : NSObject <NSCopying>
{
    _Bool _overrideRestrictions;
    _Bool _systemInitiated;
}

@property(nonatomic) _Bool systemInitiated; // @synthesize systemInitiated=_systemInitiated;
@property(nonatomic) _Bool overrideRestrictions; // @synthesize overrideRestrictions=_overrideRestrictions;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializedDictionary;

@end

