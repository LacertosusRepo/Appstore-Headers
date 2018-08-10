//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MDXAutoplayViewProtocol.h"
#import "YTResponder.h"

@class NSString, UIButton, YTButton, YTViewGroup;

@interface MDXBasePlayerOverlayView : UIView <MDXAutoplayViewProtocol, YTResponder>
{
    _Bool _nextButtonVisible;
    _Bool _previousButtonVisible;
    id <YTResponder> _parentResponder;
    id <MDXAutoplayViewDelegate> _autoplayDelegate;
    id <MDXBasePlayerOverlayViewDelegate> _delegate;
    id <YTPlayerBarViewDelegate> _playerBarViewDelegate;
    YTButton *_videoTitleButton;
    YTViewGroup *_mainControlsViewGroup;
    UIButton *_playButton;
    UIButton *_pauseButton;
    UIButton *_overflowButton;
    UIView *_playerControlsContainerView;
}

@property(nonatomic) _Bool previousButtonVisible; // @synthesize previousButtonVisible=_previousButtonVisible;
@property(nonatomic) _Bool nextButtonVisible; // @synthesize nextButtonVisible=_nextButtonVisible;
@property(retain, nonatomic) UIView *playerControlsContainerView; // @synthesize playerControlsContainerView=_playerControlsContainerView;
@property(readonly, nonatomic) UIButton *overflowButton; // @synthesize overflowButton=_overflowButton;
@property(readonly, nonatomic) UIButton *pauseButton; // @synthesize pauseButton=_pauseButton;
@property(readonly, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) YTViewGroup *mainControlsViewGroup; // @synthesize mainControlsViewGroup=_mainControlsViewGroup;
@property(retain, nonatomic) YTButton *videoTitleButton; // @synthesize videoTitleButton=_videoTitleButton;
@property(nonatomic) __weak id <YTPlayerBarViewDelegate> playerBarViewDelegate; // @synthesize playerBarViewDelegate=_playerBarViewDelegate;
@property(nonatomic) __weak id <MDXBasePlayerOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MDXAutoplayViewDelegate> autoplayDelegate; // @synthesize autoplayDelegate=_autoplayDelegate;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)setOverflowButtonEnabled:(_Bool)arg1;
- (void)didTapOverflowButton;
- (void)didTapDismissAutoplay;
- (void)didTapPause;
- (void)didTapPlay;
- (id)thumbnailMappings;
- (void)setNowAutoplaying:(_Bool)arg1;
- (void)showPauseButton;
- (void)showPlayButton;
- (void)setTitle:(id)arg1;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

