//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageUIInteraction5 : SPTLogMessage
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
}

+ (id)messageWithRequestId:(id)arg1 featureId:(id)arg2 pageuri:(id)arg3 sectionId:(id)arg4 itemIndex:(long long)arg5 targetUri:(id)arg6 interactionType:(id)arg7 userIntent:(id)arg8 timestamp:(double)arg9;
+ (id)messageWithInteractionType:(id)arg1 intent:(id)arg2 sectionID:(id)arg3 itemIndex:(long long)arg4 itemIdentifier:(id)arg5;
+ (id)messageWithInteractionType:(id)arg1 intent:(id)arg2 sectionID:(id)arg3;
+ (id)yourLikesMessageForContextMenuTappedWithArtistURI:(id)arg1 itemIndex:(long long)arg2;
+ (id)yourLikesMessageForContextMenuTappedWithTrackURI:(id)arg1 itemIndex:(long long)arg2;
+ (id)yourLikesMessageForPreviewTappedWithTrackURI:(id)arg1 itemIndex:(long long)arg2;
+ (id)yourLikesMessageForRowTappedWithArtistURI:(id)arg1 itemIndex:(long long)arg2;
+ (id)yourLikesMessageForRowTappedWithTrackURI:(id)arg1 itemIndex:(long long)arg2;
+ (id)yourLikesMessageForArtistTabTapped;
+ (id)yourLikesMessageForTracksTabTapped;
+ (id)yourLikesMessageForAddMoreTapped;
+ (id)heartsMessageWithTargetURIString:(id)arg1 sectionId:(id)arg2 userIntent:(id)arg3;
+ (id)heartsMessageForUndoPressedWithTrackURI:(id)arg1 contextURI:(id)arg2;
+ (id)heartsMessageForUnheartActionWithTrackURI:(id)arg1 contextURI:(id)arg2;
+ (id)heartsMessageForHeartActionWithTrackURI:(id)arg1 contextURI:(id)arg2;
+ (id)heartsMessageForPopupDismissedWithTrackURI:(id)arg1 contextURI:(id)arg2;
@property(nonatomic) double timestampValue; // @synthesize timestampValue=_timestampValue;
@property(retain, nonatomic) NSString *userIntentValue; // @synthesize userIntentValue=_userIntentValue;
@property(retain, nonatomic) NSString *interactionTypeValue; // @synthesize interactionTypeValue=_interactionTypeValue;
@property(retain, nonatomic) NSString *targetUriValue; // @synthesize targetUriValue=_targetUriValue;
@property(nonatomic) long long itemIndexValue; // @synthesize itemIndexValue=_itemIndexValue;
@property(retain, nonatomic) NSString *sectionIdValue; // @synthesize sectionIdValue=_sectionIdValue;
@property(retain, nonatomic) NSString *pageuriValue; // @synthesize pageuriValue=_pageuriValue;
@property(retain, nonatomic) NSString *featureIdValue; // @synthesize featureIdValue=_featureIdValue;
@property(retain, nonatomic) NSString *requestIdValue; // @synthesize requestIdValue=_requestIdValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

