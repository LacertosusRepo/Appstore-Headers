//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageAdFeedbackEvent1 : SPTLogMessage
{
    NSString *_timestampValue;
    NSString *_logIdValue;
    NSString *_lineItemIdValue;
    NSString *_creativeIdValue;
    NSString *_displayedAdContentValue;
}

+ (id)messageWithTimestamp:(id)arg1 logId:(id)arg2 lineItemId:(id)arg3 creativeId:(id)arg4 displayedAdContent:(id)arg5;
@property(retain, nonatomic) NSString *displayedAdContentValue; // @synthesize displayedAdContentValue=_displayedAdContentValue;
@property(retain, nonatomic) NSString *creativeIdValue; // @synthesize creativeIdValue=_creativeIdValue;
@property(retain, nonatomic) NSString *lineItemIdValue; // @synthesize lineItemIdValue=_lineItemIdValue;
@property(retain, nonatomic) NSString *logIdValue; // @synthesize logIdValue=_logIdValue;
@property(retain, nonatomic) NSString *timestampValue; // @synthesize timestampValue=_timestampValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end
