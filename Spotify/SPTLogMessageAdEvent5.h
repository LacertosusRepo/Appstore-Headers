//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageAdEvent5 : SPTLogMessage
{
    _Bool _inFocusValue;
    NSString *_adPlaybackIdValue;
    NSString *_appStartupIdValue;
    NSString *_adIdValue;
    NSString *_lineitemIdValue;
    NSString *_creativeIdValue;
    NSString *_adFormatValue;
    NSString *_sourceValue;
    NSString *_contextValue;
    NSString *_eventValue;
    NSString *_eventVersionValue;
    NSString *_jsondataValue;
    NSString *_sourceVersionValue;
    NSString *_slotValue;
    long long _msFromStartValue;
    NSString *_fileTypeValue;
}

+ (id)messageWithAdPlaybackId:(id)arg1 appStartupId:(id)arg2 adId:(id)arg3 lineitemId:(id)arg4 creativeId:(id)arg5 adFormat:(id)arg6 source:(id)arg7 context:(id)arg8 event:(id)arg9 eventVersion:(id)arg10 jsondata:(id)arg11 sourceVersion:(id)arg12 slot:(id)arg13 msFromStart:(long long)arg14 inFocus:(_Bool)arg15 fileType:(id)arg16;
@property(retain, nonatomic) NSString *fileTypeValue; // @synthesize fileTypeValue=_fileTypeValue;
@property(nonatomic) _Bool inFocusValue; // @synthesize inFocusValue=_inFocusValue;
@property(nonatomic) long long msFromStartValue; // @synthesize msFromStartValue=_msFromStartValue;
@property(retain, nonatomic) NSString *slotValue; // @synthesize slotValue=_slotValue;
@property(retain, nonatomic) NSString *sourceVersionValue; // @synthesize sourceVersionValue=_sourceVersionValue;
@property(retain, nonatomic) NSString *jsondataValue; // @synthesize jsondataValue=_jsondataValue;
@property(retain, nonatomic) NSString *eventVersionValue; // @synthesize eventVersionValue=_eventVersionValue;
@property(retain, nonatomic) NSString *eventValue; // @synthesize eventValue=_eventValue;
@property(retain, nonatomic) NSString *contextValue; // @synthesize contextValue=_contextValue;
@property(retain, nonatomic) NSString *sourceValue; // @synthesize sourceValue=_sourceValue;
@property(retain, nonatomic) NSString *adFormatValue; // @synthesize adFormatValue=_adFormatValue;
@property(retain, nonatomic) NSString *creativeIdValue; // @synthesize creativeIdValue=_creativeIdValue;
@property(retain, nonatomic) NSString *lineitemIdValue; // @synthesize lineitemIdValue=_lineitemIdValue;
@property(retain, nonatomic) NSString *adIdValue; // @synthesize adIdValue=_adIdValue;
@property(retain, nonatomic) NSString *appStartupIdValue; // @synthesize appStartupIdValue=_appStartupIdValue;
@property(retain, nonatomic) NSString *adPlaybackIdValue; // @synthesize adPlaybackIdValue=_adPlaybackIdValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end
