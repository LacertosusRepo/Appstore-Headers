//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableData, NSString;

@interface MMKMutableData : NSObject <NSCopying>
{
    NSMutableData *_data;
    NSString *_taskId;
}

+ (id)dataWithData:(id)arg1;
@property(readonly, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(readonly, nonatomic) NSMutableData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)subdataWithRange:(struct _NSRange)arg1;
@property(readonly, nonatomic) unsigned long long length;
- (id)initWithData:(id)arg1 taskId:(id)arg2;

@end

