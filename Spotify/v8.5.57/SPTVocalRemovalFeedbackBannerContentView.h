//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class GLUEButton, GLUELabel, SPTVocalRemovalFeedbackBannerViewStyle;

@interface SPTVocalRemovalFeedbackBannerContentView : UIView
{
    GLUEButton *_closeButton;
    GLUELabel *_titleLabel;
    SPTVocalRemovalFeedbackBannerViewStyle *_style;
}

@property(retain, nonatomic) SPTVocalRemovalFeedbackBannerViewStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) GLUEButton *closeButton; // @synthesize closeButton=_closeButton;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)setupConstraints;
- (void)setupCloseButton;
- (void)setupTitleLabel;
- (id)initWithStyle:(id)arg1;

@end

