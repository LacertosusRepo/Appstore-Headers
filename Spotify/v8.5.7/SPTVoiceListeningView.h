//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTVoiceListeningViewModelDelegate-Protocol.h"

@class NSString, SPTVoiceInteractionAnimator, SPTVoiceListeningViewModel, SPTVoiceMicrophoneView, SPTVoiceTooltipView, UIButton, UILabel;

@interface SPTVoiceListeningView : UIView <SPTVoiceListeningViewModelDelegate>
{
    _Bool _isRunningVoiceOver;
    SPTVoiceListeningViewModel *_listeningViewModel;
    UIButton *_closeButton;
    UIButton *_microphoneButton;
    UILabel *_listeningLabel;
    UILabel *_trySayingLabel;
    UILabel *_transcriptsLabel;
    SPTVoiceInteractionAnimator *_animator;
    SPTVoiceMicrophoneView *_microphoneGlowView;
    SPTVoiceTooltipView *_suggestionsTooltipView;
}

@property(nonatomic) _Bool isRunningVoiceOver; // @synthesize isRunningVoiceOver=_isRunningVoiceOver;
@property(retain, nonatomic) SPTVoiceTooltipView *suggestionsTooltipView; // @synthesize suggestionsTooltipView=_suggestionsTooltipView;
@property(retain, nonatomic) SPTVoiceMicrophoneView *microphoneGlowView; // @synthesize microphoneGlowView=_microphoneGlowView;
@property(retain, nonatomic) SPTVoiceInteractionAnimator *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) UILabel *transcriptsLabel; // @synthesize transcriptsLabel=_transcriptsLabel;
@property(retain, nonatomic) UILabel *trySayingLabel; // @synthesize trySayingLabel=_trySayingLabel;
@property(retain, nonatomic) UILabel *listeningLabel; // @synthesize listeningLabel=_listeningLabel;
@property(retain, nonatomic) UIButton *microphoneButton; // @synthesize microphoneButton=_microphoneButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, nonatomic) SPTVoiceListeningViewModel *listeningViewModel; // @synthesize listeningViewModel=_listeningViewModel;
- (void).cxx_destruct;
- (void)listeningViewModel:(id)arg1 didUpdateAudioInteractionMode:(unsigned long long)arg2;
- (void)listeningViewModelDidStopListening:(id)arg1;
- (void)listeningViewModelDidUpdate:(id)arg1;
- (void)setupLayout;
- (void)updateViewWithViewModel:(id)arg1;
- (void)setupViews;
- (void)didTapMicrophoneButton;
- (void)close;
- (void)layoutSubviews;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
