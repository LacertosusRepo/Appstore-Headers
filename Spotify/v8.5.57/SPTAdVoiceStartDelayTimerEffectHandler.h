//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface SPTAdVoiceStartDelayTimerEffectHandler : NSObject
{
    NSMutableSet *_timers;
}

@property(retain, nonatomic) NSMutableSet *timers; // @synthesize timers=_timers;
- (void).cxx_destruct;
- (void)delayElapsed:(id)arg1;
- (void)handleEffect:(id)arg1 eventSink:(CDUnknownBlockType)arg2;
- (id)init;

@end

