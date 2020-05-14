//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageUIInteraction6 : SPTLogMessage
{
    NSString *_requestIdValue;
    NSString *_featureIdValue;
    NSString *_pageuriValue;
    NSString *_sectionIdValue;
    long long _itemIndexValue;
    NSString *_targetUriValue;
    NSString *_interactionTypeValue;
    NSString *_userIntentValue;
    double _timestampValue;
    NSString *_actionValue;
}

+ (id)messageWithRequestId:(id)arg1 featureId:(id)arg2 pageuri:(id)arg3 sectionId:(id)arg4 itemIndex:(long long)arg5 targetUri:(id)arg6 interactionType:(id)arg7 userIntent:(id)arg8 timestamp:(double)arg9 action:(id)arg10;
@property(copy, nonatomic) NSString *actionValue; // @synthesize actionValue=_actionValue;
@property(nonatomic) double timestampValue; // @synthesize timestampValue=_timestampValue;
@property(copy, nonatomic) NSString *userIntentValue; // @synthesize userIntentValue=_userIntentValue;
@property(copy, nonatomic) NSString *interactionTypeValue; // @synthesize interactionTypeValue=_interactionTypeValue;
@property(copy, nonatomic) NSString *targetUriValue; // @synthesize targetUriValue=_targetUriValue;
@property(nonatomic) long long itemIndexValue; // @synthesize itemIndexValue=_itemIndexValue;
@property(copy, nonatomic) NSString *sectionIdValue; // @synthesize sectionIdValue=_sectionIdValue;
@property(copy, nonatomic) NSString *pageuriValue; // @synthesize pageuriValue=_pageuriValue;
@property(copy, nonatomic) NSString *featureIdValue; // @synthesize featureIdValue=_featureIdValue;
@property(copy, nonatomic) NSString *requestIdValue; // @synthesize requestIdValue=_requestIdValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

