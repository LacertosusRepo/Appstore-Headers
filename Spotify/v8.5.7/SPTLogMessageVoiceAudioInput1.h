//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageVoiceAudioInput1 : SPTLogMessage
{
    NSString *_utteranceIdValue;
    NSString *_portTypeValue;
    NSString *_portOrientationValue;
}

+ (id)messageWithUtteranceId:(id)arg1 portType:(id)arg2 portOrientation:(id)arg3;
@property(copy, nonatomic) NSString *portOrientationValue; // @synthesize portOrientationValue=_portOrientationValue;
@property(copy, nonatomic) NSString *portTypeValue; // @synthesize portTypeValue=_portTypeValue;
@property(copy, nonatomic) NSString *utteranceIdValue; // @synthesize utteranceIdValue=_utteranceIdValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

