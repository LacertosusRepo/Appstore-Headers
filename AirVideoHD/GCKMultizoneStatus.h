//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray;

@interface GCKMultizoneStatus : NSObject <NSCopying>
{
    NSMutableArray *_devices;
}

@property(copy, nonatomic) NSMutableArray *devices; // @synthesize devices=_devices;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)parseFromJSONObject:(id)arg1;
- (id)initWithJSONObject:(id)arg1;
- (id)initWithDevices:(id)arg1;

@end

