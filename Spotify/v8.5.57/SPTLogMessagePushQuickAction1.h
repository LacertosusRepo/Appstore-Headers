//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessagePushQuickAction1 : SPTLogMessage
{
    NSString *_actionIdValue;
    NSString *_actionInfoValue;
    NSString *_campaignIdValue;
    NSString *_pushMessageIdValue;
    NSString *_actionTitleValue;
    NSString *_errorValue;
}

+ (id)messageWithActionId:(id)arg1 actionInfo:(id)arg2 campaignId:(id)arg3 pushMessageId:(id)arg4 actionTitle:(id)arg5 error:(id)arg6;
@property(copy, nonatomic) NSString *errorValue; // @synthesize errorValue=_errorValue;
@property(copy, nonatomic) NSString *actionTitleValue; // @synthesize actionTitleValue=_actionTitleValue;
@property(copy, nonatomic) NSString *pushMessageIdValue; // @synthesize pushMessageIdValue=_pushMessageIdValue;
@property(copy, nonatomic) NSString *campaignIdValue; // @synthesize campaignIdValue=_campaignIdValue;
@property(copy, nonatomic) NSString *actionInfoValue; // @synthesize actionInfoValue=_actionInfoValue;
@property(copy, nonatomic) NSString *actionIdValue; // @synthesize actionIdValue=_actionIdValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end
