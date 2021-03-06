//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTVoiceSessionObserver.h"

@class NSString, NSTimer, SPTVoiceConfirmationContentViewModel, SPTVoiceConfirmationControlViewModel;

@interface SPTVoiceConfirmationViewModel : NSObject <SPTVoiceSessionObserver>
{
    _Bool _confirmationContentViewHidden;
    _Bool _confirmationControlViewHidden;
    id <SPTVoiceConfirmationViewModelPresentationDelegate> _presentationDelegate;
    SPTVoiceConfirmationContentViewModel *_contentViewModel;
    SPTVoiceConfirmationControlViewModel *_controlViewModel;
    id <SPTVoiceSession> _voiceSession;
    id <SPTVoiceLoggerProtocol> _logger;
    NSTimer *_dismissalTimer;
    unsigned long long _confirmationMode;
    double _dismissalTime;
}

@property(nonatomic, setter=setDismissalTime:) double dismissalTime; // @synthesize dismissalTime=_dismissalTime;
@property(nonatomic) unsigned long long confirmationMode; // @synthesize confirmationMode=_confirmationMode;
@property(retain, nonatomic) NSTimer *dismissalTimer; // @synthesize dismissalTimer=_dismissalTimer;
@property(nonatomic) _Bool confirmationControlViewHidden; // @synthesize confirmationControlViewHidden=_confirmationControlViewHidden;
@property(nonatomic) _Bool confirmationContentViewHidden; // @synthesize confirmationContentViewHidden=_confirmationContentViewHidden;
@property(readonly, nonatomic) id <SPTVoiceLoggerProtocol> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTVoiceSession> voiceSession; // @synthesize voiceSession=_voiceSession;
@property(readonly, nonatomic) SPTVoiceConfirmationControlViewModel *controlViewModel; // @synthesize controlViewModel=_controlViewModel;
@property(readonly, nonatomic) SPTVoiceConfirmationContentViewModel *contentViewModel; // @synthesize contentViewModel=_contentViewModel;
@property(nonatomic) __weak id <SPTVoiceConfirmationViewModelPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
- (void).cxx_destruct;
- (void)didAppear;
- (void)didTapMicrophoneButton;
- (void)didTapCloseButton;
- (void)dismissConfirmationView;
- (void)dismissalTimerFired:(id)arg1;
- (void)startConfirmationDismissalTimer;
- (id)createUnknownVoiceIntent;
- (void)updateViewModelWithConfirmationMode:(unsigned long long)arg1 voiceCommand:(id)arg2;
- (unsigned long long)confirmationModeForCommand:(id)arg1;
- (void)voiceSession:(id)arg1 didHandleVoiceCommand:(id)arg2;
- (void)voiceSession:(id)arg1 didReceiveVoiceCommand:(id)arg2;
- (id)initWithSession:(id)arg1 audioCuePlayer:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

