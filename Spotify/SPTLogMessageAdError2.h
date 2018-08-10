//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageAdError2 : SPTLogMessage
{
    NSString *_requestTypeValue;
    NSString *_errorMessageValue;
    long long _httpErrorCodeValue;
    NSString *_requestUrlValue;
    NSString *_companionAdValue;
    NSString *_trackingEventValue;
}

+ (id)messageWithRequestType:(id)arg1 errorMessage:(id)arg2 httpErrorCode:(long long)arg3 requestUrl:(id)arg4 companionAd:(id)arg5 trackingEvent:(id)arg6;
@property(retain, nonatomic) NSString *trackingEventValue; // @synthesize trackingEventValue=_trackingEventValue;
@property(retain, nonatomic) NSString *companionAdValue; // @synthesize companionAdValue=_companionAdValue;
@property(retain, nonatomic) NSString *requestUrlValue; // @synthesize requestUrlValue=_requestUrlValue;
@property(nonatomic) long long httpErrorCodeValue; // @synthesize httpErrorCodeValue=_httpErrorCodeValue;
@property(retain, nonatomic) NSString *errorMessageValue; // @synthesize errorMessageValue=_errorMessageValue;
@property(retain, nonatomic) NSString *requestTypeValue; // @synthesize requestTypeValue=_requestTypeValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

