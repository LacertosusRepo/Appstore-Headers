//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDXBaseMiniBarView.h"

@class NSString, UIButton, UIImageView, YTLabel;

@interface MDXMiniBarView : MDXBaseMiniBarView
{
    YTLabel *_subtitleLabel;
    UIImageView *_castOverlay;
    UIButton *_replayButton;
    UIButton *_dismissAutoplayButton;
}

- (void).cxx_destruct;
- (id)title;
- (void)removeDidTapReplayTarget:(id)arg1 action:(SEL)arg2;
- (void)addDidTapReplayTarget:(id)arg1 action:(SEL)arg2;
- (void)setNowAutoplaying:(_Bool)arg1;
- (void)didTapDismissAutoplay;
- (void)showCastConnectedIcon;
- (void)showReplayIcon;
- (void)showPauseIcon;
- (void)showPlayIcon;
@property(copy, nonatomic) NSString *subtitle;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

