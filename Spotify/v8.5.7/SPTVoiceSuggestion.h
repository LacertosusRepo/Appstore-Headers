//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SPTVoiceSuggestion : NSObject
{
    NSString *_suggestionText;
    NSURL *_artworkURI;
}

@property(retain, nonatomic) NSURL *artworkURI; // @synthesize artworkURI=_artworkURI;
@property(retain, nonatomic) NSString *suggestionText; // @synthesize suggestionText=_suggestionText;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSuggestionText:(id)arg1 artworkURI:(id)arg2;

@end
