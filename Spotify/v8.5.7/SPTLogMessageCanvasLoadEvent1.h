//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageCanvasLoadEvent1 : SPTLogMessage
{
    NSString *_canvasIdValue;
    NSString *_entityUriValue;
    NSString *_eventValue;
    NSString *_errorReasonValue;
    NSString *_errorDetailValue;
}

+ (id)messageWithCanvasId:(id)arg1 entityUri:(id)arg2 event:(id)arg3 errorReason:(id)arg4 errorDetail:(id)arg5;
@property(copy, nonatomic) NSString *errorDetailValue; // @synthesize errorDetailValue=_errorDetailValue;
@property(copy, nonatomic) NSString *errorReasonValue; // @synthesize errorReasonValue=_errorReasonValue;
@property(copy, nonatomic) NSString *eventValue; // @synthesize eventValue=_eventValue;
@property(copy, nonatomic) NSString *entityUriValue; // @synthesize entityUriValue=_entityUriValue;
@property(copy, nonatomic) NSString *canvasIdValue; // @synthesize canvasIdValue=_canvasIdValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

