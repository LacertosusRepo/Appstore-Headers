//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTAdVoiceEvent.h"

@class NSError;

@interface SPTAdVoiceEventSpeechRecognitionError : SPTAdVoiceEvent
{
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithError:(id)arg1;

@end

