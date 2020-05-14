//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTAdVoiceEffect.h"

@interface SPTAdVoiceEffectSpeechRecognitionCommand : SPTAdVoiceEffect
{
    long long _commandType;
    double _microphoneListeningPeriod;
    long long _intent;
}

@property(readonly, nonatomic) long long intent; // @synthesize intent=_intent;
@property(readonly, nonatomic) double microphoneListeningPeriod; // @synthesize microphoneListeningPeriod=_microphoneListeningPeriod;
@property(readonly, nonatomic) long long commandType; // @synthesize commandType=_commandType;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCommandType:(long long)arg1 microphoneListeningPeriod:(double)arg2 intent:(long long)arg3;

@end
