//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageInAppMessageFeedbackSubmission1 : SPTLogMessage
{
    NSString *_creativeIdValue;
    NSString *_uuidValue;
    NSString *_feedbackSelectionTextValue;
}

+ (id)messageWithCreativeId:(id)arg1 uuid:(id)arg2 feedbackSelectionText:(id)arg3;
@property(copy, nonatomic) NSString *feedbackSelectionTextValue; // @synthesize feedbackSelectionTextValue=_feedbackSelectionTextValue;
@property(copy, nonatomic) NSString *uuidValue; // @synthesize uuidValue=_uuidValue;
@property(copy, nonatomic) NSString *creativeIdValue; // @synthesize creativeIdValue=_creativeIdValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

