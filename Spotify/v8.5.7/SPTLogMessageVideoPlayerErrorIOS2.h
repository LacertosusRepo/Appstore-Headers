//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSData, NSString;

@interface SPTLogMessageVideoPlayerErrorIOS2 : SPTLogMessage
{
    NSData *_fileIdValue;
    NSString *_uriValue;
    NSData *_playbackIdValue;
    NSString *_sessionIdValue;
    long long _localTimeValue;
    long long _errorCodeValue;
    NSString *_errorDomainValue;
    NSString *_errorCommentValue;
    long long _underlyingErrorCodeValue;
    NSString *_underlyingErrorDomainValue;
    NSString *_underlyingErrorCommentValue;
}

+ (id)messageWithFileId:(id)arg1 uri:(id)arg2 playbackId:(id)arg3 sessionId:(id)arg4 localTime:(long long)arg5 errorCode:(long long)arg6 errorDomain:(id)arg7 errorComment:(id)arg8 underlyingErrorCode:(long long)arg9 underlyingErrorDomain:(id)arg10 underlyingErrorComment:(id)arg11;
@property(copy, nonatomic) NSString *underlyingErrorCommentValue; // @synthesize underlyingErrorCommentValue=_underlyingErrorCommentValue;
@property(copy, nonatomic) NSString *underlyingErrorDomainValue; // @synthesize underlyingErrorDomainValue=_underlyingErrorDomainValue;
@property(nonatomic) long long underlyingErrorCodeValue; // @synthesize underlyingErrorCodeValue=_underlyingErrorCodeValue;
@property(copy, nonatomic) NSString *errorCommentValue; // @synthesize errorCommentValue=_errorCommentValue;
@property(copy, nonatomic) NSString *errorDomainValue; // @synthesize errorDomainValue=_errorDomainValue;
@property(nonatomic) long long errorCodeValue; // @synthesize errorCodeValue=_errorCodeValue;
@property(nonatomic) long long localTimeValue; // @synthesize localTimeValue=_localTimeValue;
@property(copy, nonatomic) NSString *sessionIdValue; // @synthesize sessionIdValue=_sessionIdValue;
@property(copy, nonatomic) NSData *playbackIdValue; // @synthesize playbackIdValue=_playbackIdValue;
@property(copy, nonatomic) NSString *uriValue; // @synthesize uriValue=_uriValue;
@property(copy, nonatomic) NSData *fileIdValue; // @synthesize fileIdValue=_fileIdValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

