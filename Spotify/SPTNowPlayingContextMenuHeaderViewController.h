//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTContextMenuSectionHeaderDelegate.h"
#import "SPTNowPlayingPlaybackActionsHandlerObserver.h"

@class NSString, SPTNowPlayingAuxiliaryActionsHandler, SPTNowPlayingButton<SPTNowPlayingRepeatButton>, SPTNowPlayingButton<SPTNowPlayingShuffleButton>, SPTNowPlayingModel, SPTNowPlayingPlaybackActionsHandler, SPTTheme, UIButton, UILabel;

@interface SPTNowPlayingContextMenuHeaderViewController : UIViewController <SPTNowPlayingPlaybackActionsHandlerObserver, SPTContextMenuSectionHeaderDelegate>
{
    SPTNowPlayingModel *_model;
    SPTNowPlayingPlaybackActionsHandler *_playbackActionsHandler;
    SPTNowPlayingAuxiliaryActionsHandler *_auxiliaryActionsHandler;
    SPTTheme *_theme;
    SPTNowPlayingButton<SPTNowPlayingShuffleButton> *_shuffleButton;
    SPTNowPlayingButton<SPTNowPlayingRepeatButton> *_repeatButton;
    UIButton *_queueButton;
    UILabel *_shuffleLabel;
    UILabel *_repeatLabel;
    UILabel *_queueLabel;
}

@property(retain, nonatomic) UILabel *queueLabel; // @synthesize queueLabel=_queueLabel;
@property(retain, nonatomic) UILabel *repeatLabel; // @synthesize repeatLabel=_repeatLabel;
@property(retain, nonatomic) UILabel *shuffleLabel; // @synthesize shuffleLabel=_shuffleLabel;
@property(retain, nonatomic) UIButton *queueButton; // @synthesize queueButton=_queueButton;
@property(retain, nonatomic) SPTNowPlayingButton<SPTNowPlayingRepeatButton> *repeatButton; // @synthesize repeatButton=_repeatButton;
@property(retain, nonatomic) SPTNowPlayingButton<SPTNowPlayingShuffleButton> *shuffleButton; // @synthesize shuffleButton=_shuffleButton;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTNowPlayingAuxiliaryActionsHandler *auxiliaryActionsHandler; // @synthesize auxiliaryActionsHandler=_auxiliaryActionsHandler;
@property(readonly, nonatomic) SPTNowPlayingPlaybackActionsHandler *playbackActionsHandler; // @synthesize playbackActionsHandler=_playbackActionsHandler;
@property(readonly, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)playbackActionsHandlerDidToggleRepeat:(id)arg1;
- (void)playbackActionsHandlerDidToggleShuffle:(id)arg1;
- (void)playbackActionsHandlerDidPlayPause:(id)arg1;
- (id)contextMenuViewForSectionHeader;
- (double)contextMenuHeightForSectionHeader;
- (void)setupViewConstraints;
- (void)setupQueueLabel;
- (void)setupRepeatLabel;
- (void)setupShuffleLabel;
- (id)createButtonLabel;
- (void)setupQueueButton;
- (void)updateRepeatButton;
- (void)setupRepeatButton;
- (void)updateShuffleButton;
- (void)setupShuffleButton;
- (void)viewDidLoad;
- (id)initWithModel:(id)arg1 playbackActionsHandler:(id)arg2 auxiliaryActionsHandler:(id)arg3 theme:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

