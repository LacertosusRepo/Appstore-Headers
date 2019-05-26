//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageInAppMessageClientMessageDiscarded1 : SPTLogMessage
{
    NSString *_reasonValue;
    NSString *_triggerPatternValue;
    NSString *_triggerTypeValue;
    NSString *_messageFormatValue;
    NSString *_messageIdentifierValue;
}

+ (id)messageWithReason:(id)arg1 triggerPattern:(id)arg2 triggerType:(id)arg3 messageFormat:(id)arg4 messageIdentifier:(id)arg5;
@property(copy, nonatomic) NSString *messageIdentifierValue; // @synthesize messageIdentifierValue=_messageIdentifierValue;
@property(copy, nonatomic) NSString *messageFormatValue; // @synthesize messageFormatValue=_messageFormatValue;
@property(copy, nonatomic) NSString *triggerTypeValue; // @synthesize triggerTypeValue=_triggerTypeValue;
@property(copy, nonatomic) NSString *triggerPatternValue; // @synthesize triggerPatternValue=_triggerPatternValue;
@property(copy, nonatomic) NSString *reasonValue; // @synthesize reasonValue=_reasonValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

