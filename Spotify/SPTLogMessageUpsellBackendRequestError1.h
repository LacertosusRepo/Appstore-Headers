//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageUpsellBackendRequestError1 : SPTLogMessage
{
    NSString *_requestTypeValue;
    NSString *_errorTypeValue;
    NSString *_requestUriValue;
    long long _statusCodeValue;
    NSString *_errorLocalizeddescriptionValue;
}

+ (id)messageWithRequestType:(id)arg1 errorType:(id)arg2 requestUri:(id)arg3 statusCode:(long long)arg4 errorLocalizeddescription:(id)arg5;
@property(retain, nonatomic) NSString *errorLocalizeddescriptionValue; // @synthesize errorLocalizeddescriptionValue=_errorLocalizeddescriptionValue;
@property(nonatomic) long long statusCodeValue; // @synthesize statusCodeValue=_statusCodeValue;
@property(retain, nonatomic) NSString *requestUriValue; // @synthesize requestUriValue=_requestUriValue;
@property(retain, nonatomic) NSString *errorTypeValue; // @synthesize errorTypeValue=_errorTypeValue;
@property(retain, nonatomic) NSString *requestTypeValue; // @synthesize requestTypeValue=_requestTypeValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

