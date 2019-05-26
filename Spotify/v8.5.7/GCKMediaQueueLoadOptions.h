//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@interface GCKMediaQueueLoadOptions : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _startIndex;
    double _playPosition;
    long long _repeatMode;
    id _customData;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) id customData; // @synthesize customData=_customData;
@property(nonatomic) long long repeatMode; // @synthesize repeatMode=_repeatMode;
@property(nonatomic) double playPosition; // @synthesize playPosition=_playPosition;
@property(nonatomic) unsigned long long startIndex; // @synthesize startIndex=_startIndex;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
