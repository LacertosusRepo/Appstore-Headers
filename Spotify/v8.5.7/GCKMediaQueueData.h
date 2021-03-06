//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class GCKMediaQueueContainerMetadata, NSArray, NSString;

@interface GCKMediaQueueData : NSObject <NSCopying, NSSecureCoding>
{
    long long _queueType;
    NSString *_queueID;
    NSString *_name;
    NSString *_entity;
    long long _repeatMode;
    GCKMediaQueueContainerMetadata *_containerMetadata;
    unsigned long long _startIndex;
    double _startTime;
    NSArray *_items;
}

+ (_Bool)supportsSecureCoding;
+ (id)queueDataWithJSONObject:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) unsigned long long startIndex; // @synthesize startIndex=_startIndex;
@property(readonly, copy, nonatomic) GCKMediaQueueContainerMetadata *containerMetadata; // @synthesize containerMetadata=_containerMetadata;
@property(readonly, nonatomic) long long repeatMode; // @synthesize repeatMode=_repeatMode;
@property(readonly, copy, nonatomic) NSString *entity; // @synthesize entity=_entity;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *queueID; // @synthesize queueID=_queueID;
@property(readonly, nonatomic) long long queueType; // @synthesize queueType=_queueType;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)JSONObject;
- (id)initWithJSONObject:(id)arg1;
- (id)initWithQueueType:(long long)arg1 queueID:(id)arg2 entity:(id)arg3 name:(id)arg4 repeatMode:(long long)arg5 startIndex:(unsigned long long)arg6 startTime:(double)arg7 containerMetadata:(id)arg8;

@end

