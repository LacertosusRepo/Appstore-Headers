//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTAdVoiceManagerObserver-Protocol.h"
#import "SPTNowPlayingAdUnitViewController-Protocol.h"
#import "SPTNowPlayingContainedViewController-Protocol.h"

@class GLUEButton, NSString, SPTAdVoiceMicrophoneView, SPTTheme, UITapGestureRecognizer;
@protocol SPTAdsBaseCosmosBridge, SPTAdsBaseEntity, SPTLinkDispatcher, SPTNowPlayingContainingViewController;

@interface SPTNowPlayingAudioAdFooterUnitViewController : UIViewController <SPTNowPlayingContainedViewController, SPTNowPlayingAdUnitViewController, SPTAdVoiceManagerObserver>
{
    SPTTheme *_theme;
    GLUEButton *_manageVoiceSettingsBtn;
    SPTAdVoiceMicrophoneView *_microphoneView;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTAdsBaseCosmosBridge> _cosmosBridge;
    id <SPTAdsBaseEntity> _adEntity;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) __weak id <SPTAdsBaseEntity> adEntity; // @synthesize adEntity=_adEntity;
@property(nonatomic) __weak id <SPTAdsBaseCosmosBridge> cosmosBridge; // @synthesize cosmosBridge=_cosmosBridge;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) SPTAdVoiceMicrophoneView *microphoneView; // @synthesize microphoneView=_microphoneView;
@property(retain, nonatomic) GLUEButton *manageVoiceSettingsBtn; // @synthesize manageVoiceSettingsBtn=_manageVoiceSettingsBtn;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)reloadViewControllerWithAdEntity:(id)arg1;
- (void)voiceAdMicrophoneDidStopRecording;
- (void)voiceAdMicrophoneDidStartRecording;
- (void)setupConstraints;
- (double)viewControllerPriority;
- (unsigned long long)leadingEdge;
- (struct CGSize)preferredContentSize;
- (void)didTapMicrophoneView;
- (void)didTapManageAdSettingsBtn;
- (void)updateViewWithVoiceAd:(_Bool)arg1;
- (void)setupManageAdSettingsButton;
- (void)setupMicView;
- (void)setupVoiceViews;
- (id)initWithTheme:(id)arg1 linkDispatcher:(id)arg2 cosmosBridge:(id)arg3;

// Remaining properties
@property(nonatomic) __weak UIViewController<SPTNowPlayingContainingViewController> *container;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

