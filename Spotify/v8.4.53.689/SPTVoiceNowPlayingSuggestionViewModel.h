//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SPTVoiceNowPlayingSuggestionViewModel : NSObject
{
    NSString *_suggestionText;
    id <SPTVoiceNowPlayingSuggestionViewModelDelegate> _delegate;
    id <SPTVoiceLoggerProtocol> _logger;
    id <SPTVoiceSession> _voiceSession;
}

@property(retain, nonatomic) id <SPTVoiceSession> voiceSession; // @synthesize voiceSession=_voiceSession;
@property(retain, nonatomic) id <SPTVoiceLoggerProtocol> logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SPTVoiceNowPlayingSuggestionViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *suggestionText; // @synthesize suggestionText=_suggestionText;
- (void).cxx_destruct;
- (void)logSuggestionImpression;
- (void)didUpdateQuerySuggestion:(id)arg1;
- (void)didAppear;
- (id)initWithSession:(id)arg1 logger:(id)arg2;

@end

