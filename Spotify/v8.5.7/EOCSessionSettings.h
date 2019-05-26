//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface EOCSessionSettings : NSObject
{
    _Bool _keepAlive;
    int _keepAliveCount;
    unsigned long long _stringEncoding;
    double _synchronousEtchCallTimeout;
}

+ (id)defaultSettings;
@property(readonly) double synchronousEtchCallTimeout; // @synthesize synchronousEtchCallTimeout=_synchronousEtchCallTimeout;
@property(readonly) int keepAliveCount; // @synthesize keepAliveCount=_keepAliveCount;
@property(readonly) _Bool keepAlive; // @synthesize keepAlive=_keepAlive;
@property(readonly) unsigned long long stringEncoding; // @synthesize stringEncoding=_stringEncoding;
- (id)initWithEncoding:(unsigned long long)arg1 keepAlive:(_Bool)arg2 keepAliveCount:(int)arg3 synchronousEtchCallTimeout:(double)arg4;

@end

