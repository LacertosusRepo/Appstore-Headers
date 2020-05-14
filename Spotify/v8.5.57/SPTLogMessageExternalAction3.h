//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSData, NSString;

@interface SPTLogMessageExternalAction3 : SPTLogMessage
{
    NSString *_sessionIdValue;
    NSString *_actionTypeValue;
    NSString *_userIntentValue;
    NSString *_uriValue;
    NSData *_playbackIdValue;
    NSString *_eventSourceIdentifierValue;
}

+ (id)messageWithSessionId:(id)arg1 actionType:(id)arg2 userIntent:(id)arg3 uri:(id)arg4 playbackId:(id)arg5 eventSourceIdentifier:(id)arg6;
@property(copy, nonatomic) NSString *eventSourceIdentifierValue; // @synthesize eventSourceIdentifierValue=_eventSourceIdentifierValue;
@property(copy, nonatomic) NSData *playbackIdValue; // @synthesize playbackIdValue=_playbackIdValue;
@property(copy, nonatomic) NSString *uriValue; // @synthesize uriValue=_uriValue;
@property(copy, nonatomic) NSString *userIntentValue; // @synthesize userIntentValue=_userIntentValue;
@property(copy, nonatomic) NSString *actionTypeValue; // @synthesize actionTypeValue=_actionTypeValue;
@property(copy, nonatomic) NSString *sessionIdValue; // @synthesize sessionIdValue=_sessionIdValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

