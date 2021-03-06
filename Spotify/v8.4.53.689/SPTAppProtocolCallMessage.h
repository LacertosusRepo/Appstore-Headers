//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTAppProtocolWAMPMessage.h"

#import "SPTWAMPCallMessage.h"

@class NSArray, NSDictionary, NSString;

@interface SPTAppProtocolCallMessage : SPTAppProtocolWAMPMessage <SPTWAMPCallMessage>
{
    unsigned long long _requestID;
    NSDictionary *_options;
    NSString *_procedure;
    NSArray *_arguments;
    NSDictionary *_namedArguments;
}

+ (_Bool)rawMessageFormatIsValid:(id)arg1;
@property(readonly, nonatomic) NSDictionary *namedArguments; // @synthesize namedArguments=_namedArguments;
@property(readonly, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
@property(readonly, copy, nonatomic) NSString *procedure; // @synthesize procedure=_procedure;
@property(readonly, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(readonly, nonatomic) unsigned long long requestID; // @synthesize requestID=_requestID;
- (void).cxx_destruct;
- (_Bool)populateWithRawMessage:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSArray *rawMessage;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long messageType;
@property(readonly, nonatomic) NSDictionary *parameters;
- (id)initWithRequestID:(unsigned long long)arg1 options:(id)arg2 procedure:(id)arg3 arguments:(id)arg4 namedArguments:(id)arg5;
- (id)initWithRequestID:(unsigned long long)arg1 procedure:(id)arg2 parameters:(id)arg3;
@property(readonly, nonatomic) _Bool setShuffle_hasShuffleParameter;
@property(readonly, nonatomic) _Bool setShuffle_shouldShuffle;
@property(readonly, copy, nonatomic) NSString *setSaved_itemID;
@property(readonly, nonatomic) _Bool setSaved_hasSaveParameter;
@property(readonly, nonatomic) _Bool setSaved_shouldSave;
@property(readonly, copy, nonatomic) NSString *getSaved_itemURI;
@property(readonly, nonatomic) _Bool setRating_hasRatingParameter;
@property(readonly, nonatomic) long long setRating_rating;
@property(readonly, nonatomic) _Bool setPlaybackSpeed_hasPlaybackSpeedParameter;
@property(readonly, nonatomic) long long setPlaybackSpeed_playbackSpeed;
- (_Bool)seekToPosition_hasPositionParameter;
- (long long)seekToPosition_position;
@property(readonly, nonatomic) _Bool setRepeat_hasRepeatParameter;
@property(readonly, nonatomic) long long setRepeat_repeat;
@property(readonly, copy, nonatomic) NSString *getRecommendedItems_contentType;
@property(readonly, copy, nonatomic) NSString *getRootItem_itemURI;
@property(readonly, nonatomic) _Bool getChildrenOfItem_hasPageLengthParameter;
@property(readonly, nonatomic) unsigned long long getChildrenOfItem_pageLength;
@property(readonly, nonatomic) _Bool getChildrenOfItem_hasPageOffsetParameter;
@property(readonly, nonatomic) unsigned long long getChildrenOfItem_pageOffset;
@property(readonly, copy, nonatomic) NSString *getChildrenOfItem_parentItemURI;
@property(readonly, copy, nonatomic) NSString *playItem_itemURI;
@property(readonly, copy, nonatomic) NSString *queueItem_itemURI;
@property(readonly, nonatomic) _Bool searchQuery_hasOffsetParameter;
@property(readonly, nonatomic) unsigned long long searchQuery_offset;
@property(readonly, nonatomic) _Bool searchQuery_hasLimitParameter;
@property(readonly, nonatomic) unsigned long long searchQuery_limit;
@property(readonly, copy, nonatomic) NSString *searchQuery_query;
@property(readonly, nonatomic) _Bool getImage_hasImageHeightParameter;
@property(readonly, nonatomic) unsigned long long getImage_imageHeight;
@property(readonly, nonatomic) _Bool getImage_hasImageWidthParameter;
@property(readonly, nonatomic) unsigned long long getImage_imageWidth;
@property(readonly, copy, nonatomic) NSString *getImage_imageType;
@property(readonly, copy, nonatomic) NSString *getImage_itemURI;
@property(readonly, nonatomic) _Bool logMessage_hasSeverityParameter;
@property(readonly, copy, nonatomic) NSString *logMessage_message;
@property(readonly, copy, nonatomic) NSString *logMessage_title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *jsonRepresentation;
@property(readonly) Class superclass;

@end

