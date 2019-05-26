//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSData, NSString;

@interface SPTLogMessageExternalAccessory4 : SPTLogMessage
{
    NSString *_sessionIdValue;
    NSString *_clientIdValue;
    NSString *_integrationTypeValue;
    NSString *_transportTypeValue;
    NSData *_playbackIdValue;
    NSString *_eventTypeValue;
    NSString *_categoryValue;
    NSString *_companyValue;
    NSString *_modelValue;
    NSString *_nameValue;
    NSString *_versionValue;
}

+ (id)messageWithSessionId:(id)arg1 clientId:(id)arg2 integrationType:(id)arg3 transportType:(id)arg4 playbackId:(id)arg5 eventType:(id)arg6 category:(id)arg7 company:(id)arg8 model:(id)arg9 name:(id)arg10 version:(id)arg11;
@property(copy, nonatomic) NSString *versionValue; // @synthesize versionValue=_versionValue;
@property(copy, nonatomic) NSString *nameValue; // @synthesize nameValue=_nameValue;
@property(copy, nonatomic) NSString *modelValue; // @synthesize modelValue=_modelValue;
@property(copy, nonatomic) NSString *companyValue; // @synthesize companyValue=_companyValue;
@property(copy, nonatomic) NSString *categoryValue; // @synthesize categoryValue=_categoryValue;
@property(copy, nonatomic) NSString *eventTypeValue; // @synthesize eventTypeValue=_eventTypeValue;
@property(copy, nonatomic) NSData *playbackIdValue; // @synthesize playbackIdValue=_playbackIdValue;
@property(copy, nonatomic) NSString *transportTypeValue; // @synthesize transportTypeValue=_transportTypeValue;
@property(copy, nonatomic) NSString *integrationTypeValue; // @synthesize integrationTypeValue=_integrationTypeValue;
@property(copy, nonatomic) NSString *clientIdValue; // @synthesize clientIdValue=_clientIdValue;
@property(copy, nonatomic) NSString *sessionIdValue; // @synthesize sessionIdValue=_sessionIdValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end
