//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageTasteOnboardingInteraction1 : SPTLogMessage
{
    NSString *_pageIdentifierValue;
    NSString *_targetUriValue;
    NSString *_intentValue;
    NSString *_contentSourceValue;
    NSString *_contentSourceUriValue;
    NSString *_sectionValue;
    long long _positionIndexValue;
    long long _maxPositionIndexValue;
    long long _sequenceNumberValue;
    NSString *_sessionIdValue;
    NSString *_interactionIdValue;
}

+ (id)messageWithPageIdentifier:(id)arg1 targetUri:(id)arg2 intent:(id)arg3 contentSource:(id)arg4 contentSourceUri:(id)arg5 section:(id)arg6 positionIndex:(long long)arg7 maxPositionIndex:(long long)arg8 sequenceNumber:(long long)arg9 sessionId:(id)arg10 interactionId:(id)arg11;
@property(retain, nonatomic) NSString *interactionIdValue; // @synthesize interactionIdValue=_interactionIdValue;
@property(retain, nonatomic) NSString *sessionIdValue; // @synthesize sessionIdValue=_sessionIdValue;
@property(nonatomic) long long sequenceNumberValue; // @synthesize sequenceNumberValue=_sequenceNumberValue;
@property(nonatomic) long long maxPositionIndexValue; // @synthesize maxPositionIndexValue=_maxPositionIndexValue;
@property(nonatomic) long long positionIndexValue; // @synthesize positionIndexValue=_positionIndexValue;
@property(retain, nonatomic) NSString *sectionValue; // @synthesize sectionValue=_sectionValue;
@property(retain, nonatomic) NSString *contentSourceUriValue; // @synthesize contentSourceUriValue=_contentSourceUriValue;
@property(retain, nonatomic) NSString *contentSourceValue; // @synthesize contentSourceValue=_contentSourceValue;
@property(retain, nonatomic) NSString *intentValue; // @synthesize intentValue=_intentValue;
@property(retain, nonatomic) NSString *targetUriValue; // @synthesize targetUriValue=_targetUriValue;
@property(retain, nonatomic) NSString *pageIdentifierValue; // @synthesize pageIdentifierValue=_pageIdentifierValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

