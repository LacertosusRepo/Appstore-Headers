//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDAudioPlayerProgressBarTouch : NSObject
{
    float _progress;
    unsigned long long _phase;
}

+ (id)new;
@property(readonly) float progress; // @synthesize progress=_progress;
@property(readonly) unsigned long long phase; // @synthesize phase=_phase;
- (_Bool)isEqualToAudioPlayerProgressBarTouch:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithPhase:(unsigned long long)arg1 progress:(float)arg2;

@end
