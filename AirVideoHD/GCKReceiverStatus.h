//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface GCKReceiverStatus : NSObject <NSCopying>
{
    _Bool _hasVolume;
    _Bool _muted;
    float _volume;
    long long _activeInputStatus;
    long long _standbyStatus;
}

@property(readonly, nonatomic) long long standbyStatus; // @synthesize standbyStatus=_standbyStatus;
@property(readonly, nonatomic) long long activeInputStatus; // @synthesize activeInputStatus=_activeInputStatus;
@property(readonly, nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(readonly, nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) _Bool hasVolume; // @synthesize hasVolume=_hasVolume;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithJSONObject:(id)arg1;
- (id)initWithVolume:(float)arg1 muted:(_Bool)arg2 hasVolume:(_Bool)arg3 activeInputStatus:(long long)arg4 standbyStatus:(long long)arg5;
- (id)init;

@end

