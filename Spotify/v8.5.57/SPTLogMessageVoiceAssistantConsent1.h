//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageVoiceAssistantConsent1 : SPTLogMessage
{
    _Bool _acceptedValue;
    NSString *_utteranceIdValue;
    long long _timestampValue;
}

+ (id)messageWithUtteranceId:(id)arg1 timestamp:(long long)arg2 accepted:(_Bool)arg3;
@property(nonatomic) _Bool acceptedValue; // @synthesize acceptedValue=_acceptedValue;
@property(nonatomic) long long timestampValue; // @synthesize timestampValue=_timestampValue;
@property(copy, nonatomic) NSString *utteranceIdValue; // @synthesize utteranceIdValue=_utteranceIdValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

