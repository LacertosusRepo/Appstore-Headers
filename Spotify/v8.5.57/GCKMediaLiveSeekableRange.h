//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@interface GCKMediaLiveSeekableRange : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isMovingWindow;
    _Bool _isLiveDone;
    double _startTime;
    double _endTime;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool isLiveDone; // @synthesize isLiveDone=_isLiveDone;
@property(nonatomic) _Bool isMovingWindow; // @synthesize isMovingWindow=_isMovingWindow;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONObject:(id)arg1;

@end

