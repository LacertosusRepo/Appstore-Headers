//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTVoicePlayerEventsObserver.h"
#import "SPTVoiceSessionObserver.h"

@class NSString, SPTVoiceNowPlayingArtworkViewModel, SPTVoiceNowPlayingContentInfoViewModel, SPTVoiceNowPlayingControlViewModel, SPTVoiceNowPlayingSuggestionViewModel, SPTVoiceNowPlayingTrackInfoViewModel;

@interface SPTVoiceNowPlayingViewModel : NSObject <SPTVoicePlayerEventsObserver, SPTVoiceSessionObserver>
{
    SPTVoiceNowPlayingControlViewModel *_controlViewModel;
    SPTVoiceNowPlayingTrackInfoViewModel *_trackInfoViewModel;
    SPTVoiceNowPlayingSuggestionViewModel *_suggestionViewModel;
    SPTVoiceNowPlayingContentInfoViewModel *_contentInfoViewModel;
    SPTVoiceNowPlayingArtworkViewModel *_artworkViewModel;
    id <SPTVoiceNowPlayingViewModelPresentationDelegate> _presentationDelegate;
    id <SPTVoiceLoggerProtocol> _logger;
    id <SPTVoicePlayerEventsListener> _playerEventListener;
    id <SPTVoiceCommandAudioCuePlayer> _audioCuePlayer;
    id <SPTVoiceSession> _voiceSession;
}

@property(readonly, nonatomic) id <SPTVoiceSession> voiceSession; // @synthesize voiceSession=_voiceSession;
@property(readonly, nonatomic) id <SPTVoiceCommandAudioCuePlayer> audioCuePlayer; // @synthesize audioCuePlayer=_audioCuePlayer;
@property(readonly, nonatomic) id <SPTVoicePlayerEventsListener> playerEventListener; // @synthesize playerEventListener=_playerEventListener;
@property(readonly, nonatomic) id <SPTVoiceLoggerProtocol> logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SPTVoiceNowPlayingViewModelPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property(retain, nonatomic) SPTVoiceNowPlayingArtworkViewModel *artworkViewModel; // @synthesize artworkViewModel=_artworkViewModel;
@property(retain, nonatomic) SPTVoiceNowPlayingContentInfoViewModel *contentInfoViewModel; // @synthesize contentInfoViewModel=_contentInfoViewModel;
@property(retain, nonatomic) SPTVoiceNowPlayingSuggestionViewModel *suggestionViewModel; // @synthesize suggestionViewModel=_suggestionViewModel;
@property(retain, nonatomic) SPTVoiceNowPlayingTrackInfoViewModel *trackInfoViewModel; // @synthesize trackInfoViewModel=_trackInfoViewModel;
@property(retain, nonatomic) SPTVoiceNowPlayingControlViewModel *controlViewModel; // @synthesize controlViewModel=_controlViewModel;
- (void).cxx_destruct;
- (void)voiceSession:(id)arg1 didUpdateQuerySuggestion:(id)arg2;
- (void)voiceSession:(id)arg1 didFailVoiceCommand:(id)arg2 withError:(id)arg3;
- (void)voiceSession:(id)arg1 didHandleVoiceCommand:(id)arg2;
- (void)voiceSession:(id)arg1 didReceiveVoiceCommand:(id)arg2;
- (void)playerEventsListener:(id)arg1 didFailWithError:(id)arg2;
- (void)playerEventsListener:(id)arg1 didUpdatePlayerState:(id)arg2;
- (void)didAppear;
- (void)didTapMicButton;
- (void)didTapCloseButton;
- (void)dealloc;
- (id)initWithSession:(id)arg1 logger:(id)arg2 playerEventListener:(id)arg3 audioCuePlayer:(id)arg4 entityDecorationController:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

