//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageInAppMessageClientParserError1 : SPTLogMessage
{
    NSString *_errorTypeValue;
    NSString *_errorKeyValue;
    NSString *_errorValueValue;
    NSString *_triggerIdValue;
    NSString *_triggerMessageFormatValue;
}

+ (id)messageWithErrorType:(id)arg1 errorKey:(id)arg2 errorValue:(id)arg3 triggerId:(id)arg4 triggerMessageFormat:(id)arg5;
@property(retain, nonatomic) NSString *triggerMessageFormatValue; // @synthesize triggerMessageFormatValue=_triggerMessageFormatValue;
@property(retain, nonatomic) NSString *triggerIdValue; // @synthesize triggerIdValue=_triggerIdValue;
@property(retain, nonatomic) NSString *errorValueValue; // @synthesize errorValueValue=_errorValueValue;
@property(retain, nonatomic) NSString *errorKeyValue; // @synthesize errorKeyValue=_errorKeyValue;
@property(retain, nonatomic) NSString *errorTypeValue; // @synthesize errorTypeValue=_errorTypeValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end
