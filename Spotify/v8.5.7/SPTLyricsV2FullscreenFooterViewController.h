//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTNetworkConnectivityControllerObserver-Protocol.h"
#import "SPTNowPlayingDurationUnitViewModelDelegate-Protocol.h"
#import "SPTNowPlayingSliderV2DataSource-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"

@class NSString, SPTLyricsV2Configuration, SPTLyricsV2FullscreenFooterView, SPTVocalRemovalConfiguration;
@protocol SPTLyricsV2FullscreenFooterViewControllerDelegate, SPTNowPlayingDurationUnitViewModel;

@interface SPTLyricsV2FullscreenFooterViewController : UIViewController <SPTNowPlayingSliderV2DataSource, SPTNowPlayingDurationUnitViewModelDelegate, SPTPlayerObserver, SPTNetworkConnectivityControllerObserver>
{
    _Bool _didLogVocalRemovalButtonImpression;
    _Bool _forceDisablePlaybackControls;
    id <SPTLyricsV2FullscreenFooterViewControllerDelegate> _delegate;
    id <SPTNowPlayingDurationUnitViewModel> _durationViewModel;
    SPTLyricsV2Configuration *_lyricsConfiguration;
    SPTVocalRemovalConfiguration *_vocalRemovalConfiguration;
}

@property(nonatomic) _Bool forceDisablePlaybackControls; // @synthesize forceDisablePlaybackControls=_forceDisablePlaybackControls;
@property(nonatomic) _Bool didLogVocalRemovalButtonImpression; // @synthesize didLogVocalRemovalButtonImpression=_didLogVocalRemovalButtonImpression;
@property(readonly, nonatomic) SPTVocalRemovalConfiguration *vocalRemovalConfiguration; // @synthesize vocalRemovalConfiguration=_vocalRemovalConfiguration;
@property(readonly, nonatomic) SPTLyricsV2Configuration *lyricsConfiguration; // @synthesize lyricsConfiguration=_lyricsConfiguration;
@property(readonly, nonatomic) id <SPTNowPlayingDurationUnitViewModel> durationViewModel; // @synthesize durationViewModel=_durationViewModel;
@property(nonatomic) __weak id <SPTLyricsV2FullscreenFooterViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)networkConnectivityController:(id)arg1 didChangeConnectionType:(long long)arg2 oldConnectionType:(long long)arg3;
- (void)toggleVocalRemovalMode;
- (void)tapPlayPauseButton;
- (void)updateMenuButton;
- (void)updateVocalRemovalButton;
- (void)updatePlayPauseButton;
- (void)updateProgressSlider;
- (void)progressSliderValueChanged:(id)arg1;
- (_Bool)isSeekingAllowed;
- (_Bool)isResumingAllowed;
- (_Bool)isPausingAllowed;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (void)playbackActionsHandlerDidPlayPause:(id)arg1;
- (void)trackMetadataDidFinishUpdating;
- (void)trackMetadataDidMove:(_Bool)arg1;
- (void)trackPositionDidChange;
- (_Bool)nowPlayingSliderDisallowSeeking:(id)arg1;
- (double)nowPlayingSliderAnimationSpeed:(id)arg1;
- (double)nowPlayingSliderCurrentDuration:(id)arg1;
- (double)nowPlayingSliderCurrentPosition:(id)arg1;
- (void)updateControlsOnVocalRemovalStateChanged:(_Bool)arg1;
- (void)updateWithStyle:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithLyricsConfiguration:(id)arg1 vocalRemovalConfiguration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTLyricsV2FullscreenFooterView *view; // @dynamic view;

@end
