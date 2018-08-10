//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageInteraction1 : SPTLogMessage
{
    NSString *_interactionIdValue;
    NSString *_itemIdValue;
    NSString *_typeValue;
    NSString *_intentValue;
    NSString *_pageIdentifierValue;
    NSString *_pageUriValue;
}

+ (id)messageWithInteractionId:(id)arg1 itemId:(id)arg2 type:(id)arg3 intent:(id)arg4 pageIdentifier:(id)arg5 pageUri:(id)arg6;
@property(retain, nonatomic) NSString *pageUriValue; // @synthesize pageUriValue=_pageUriValue;
@property(retain, nonatomic) NSString *pageIdentifierValue; // @synthesize pageIdentifierValue=_pageIdentifierValue;
@property(retain, nonatomic) NSString *intentValue; // @synthesize intentValue=_intentValue;
@property(retain, nonatomic) NSString *typeValue; // @synthesize typeValue=_typeValue;
@property(retain, nonatomic) NSString *itemIdValue; // @synthesize itemIdValue=_itemIdValue;
@property(retain, nonatomic) NSString *interactionIdValue; // @synthesize interactionIdValue=_interactionIdValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

