//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTVoiceConfirmationViewModelPresentationDelegate.h"
#import "SPTVoiceErrorViewModelPresentationDelegate.h"
#import "SPTVoiceListeningViewModelPresentationDelegate.h"
#import "SPTVoiceNowPlayingViewModelPresentationDelegate.h"
#import "SPTVoiceSessionObserver.h"

@class NSString, SPTVoiceCommand, SPTVoiceConfirmationViewModel, SPTVoiceErrorViewModel, SPTVoiceListeningViewModel, SPTVoiceNowPlayingViewModel, SPTVoiceSessionPresentationOptions;

@interface SPTVoiceSessionViewModel : NSObject <SPTVoiceSessionObserver, SPTVoiceErrorViewModelPresentationDelegate, SPTVoiceConfirmationViewModelPresentationDelegate, SPTVoiceListeningViewModelPresentationDelegate, SPTVoiceNowPlayingViewModelPresentationDelegate>
{
    _Bool _isVoiceAssistantViewEnabled;
    _Bool _shouldShowNPVAfterError;
    id <SPTVoiceSessionViewModelDelegate> _delegate;
    SPTVoiceErrorViewModel *_errorViewModel;
    SPTVoiceListeningViewModel *_listeningViewModel;
    SPTVoiceConfirmationViewModel *_confirmationViewModel;
    SPTVoiceNowPlayingViewModel *_voiceNowPlayingViewModel;
    id <SPTVoiceSession> _voiceSession;
    SPTVoiceSessionPresentationOptions *_options;
    SPTVoiceCommand *_voiceCommand;
    id <SPTVoiceCommandHandler><SPTVoiceExternalURIDeeplinkHandler> _deeplinkHandler;
    id <SPTVoicePlayerEventsListener> _playerEventListener;
    id <SPTBannerPresentationManager> _bannerPresentationManager;
}

@property(nonatomic) _Bool shouldShowNPVAfterError; // @synthesize shouldShowNPVAfterError=_shouldShowNPVAfterError;
@property(nonatomic) _Bool isVoiceAssistantViewEnabled; // @synthesize isVoiceAssistantViewEnabled=_isVoiceAssistantViewEnabled;
@property(readonly, nonatomic) id <SPTBannerPresentationManager> bannerPresentationManager; // @synthesize bannerPresentationManager=_bannerPresentationManager;
@property(readonly, nonatomic) id <SPTVoicePlayerEventsListener> playerEventListener; // @synthesize playerEventListener=_playerEventListener;
@property(retain, nonatomic) id <SPTVoiceCommandHandler><SPTVoiceExternalURIDeeplinkHandler> deeplinkHandler; // @synthesize deeplinkHandler=_deeplinkHandler;
@property(retain, nonatomic) SPTVoiceCommand *voiceCommand; // @synthesize voiceCommand=_voiceCommand;
@property(readonly, nonatomic) SPTVoiceSessionPresentationOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) id <SPTVoiceSession> voiceSession; // @synthesize voiceSession=_voiceSession;
@property(readonly, nonatomic) SPTVoiceNowPlayingViewModel *voiceNowPlayingViewModel; // @synthesize voiceNowPlayingViewModel=_voiceNowPlayingViewModel;
@property(readonly, nonatomic) SPTVoiceConfirmationViewModel *confirmationViewModel; // @synthesize confirmationViewModel=_confirmationViewModel;
@property(readonly, nonatomic) SPTVoiceListeningViewModel *listeningViewModel; // @synthesize listeningViewModel=_listeningViewModel;
@property(readonly, nonatomic) SPTVoiceErrorViewModel *errorViewModel; // @synthesize errorViewModel=_errorViewModel;
@property(nonatomic) __weak id <SPTVoiceSessionViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (CDUnknownBlockType)provideCompletionHandler;
- (void)voiceNowPlayingWantsToPresentAdvertisement:(id)arg1;
- (void)voiceNowPlayingWantsToPresentListening:(id)arg1;
- (void)voiceNowPlayingWantsToClose:(id)arg1;
- (void)confirmationViewModelWantsToClose:(id)arg1;
- (void)listeningViewModelWantsToClose:(id)arg1;
- (void)viewModelWantsToNavigateToSettings:(id)arg1;
- (void)viewModelWantsToClose:(id)arg1;
- (void)didDismiss;
- (void)didPresent;
- (void)willPresent;
- (void)voiceSession:(id)arg1 didHandleVoiceCommand:(id)arg2;
- (void)voiceSession:(id)arg1 didReceiveVoiceCommand:(id)arg2;
- (void)voiceSession:(id)arg1 didFailVoiceCommand:(id)arg2 withError:(id)arg3;
- (void)voiceSessionDidStartListening:(id)arg1;
- (void)voiceSessionWillStartListening:(id)arg1;
- (id)initWithSession:(id)arg1 options:(id)arg2 audioCuePlayer:(id)arg3 deeplinkHandler:(id)arg4 testManager:(id)arg5 logger:(id)arg6 player:(id)arg7 entityDecorationController:(id)arg8 localSettings:(id)arg9 bannerPresentationManager:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

