//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTVideoPlayerMessage.h"

@class NSString;

@interface SPTVideoPreferredSubtitleMessage : SPTVideoPlayerMessage
{
    _Bool _isClosedCaption;
    NSString *_locale;
}

@property(nonatomic) _Bool isClosedCaption; // @synthesize isClosedCaption=_isClosedCaption;
@property(copy, nonatomic) NSString *locale; // @synthesize locale=_locale;
- (void).cxx_destruct;
- (id)serializedDictionary;
- (id)languageTagSuffix;
@property(readonly, copy, nonatomic) NSString *languageTag;
- (id)initWithLocale:(id)arg1 isClosedCaption:(_Bool)arg2;

@end

