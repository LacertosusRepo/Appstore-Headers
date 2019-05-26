//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTKaraokeFooterModelDelegate-Protocol.h"

@class GLUEButton, NSString, SPTKaraokeFooterModel, UIImageView;
@protocol GLUETheme;

@interface SPTKaraokeFooterView : UIView <SPTKaraokeFooterModelDelegate>
{
    id <GLUETheme> _glueTheme;
    SPTKaraokeFooterModel *_model;
    GLUEButton *_button;
    UIImageView *_iconImageView;
}

@property(readonly, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(readonly, nonatomic) GLUEButton *button; // @synthesize button=_button;
@property(readonly, nonatomic) SPTKaraokeFooterModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
- (void).cxx_destruct;
- (void)karaokeButtonDidTouchUpInside:(id)arg1;
- (void)karaokeFooterModelDidChangeOffline:(id)arg1;
- (void)karaokeFooterModelDidChangeMode:(id)arg1;
- (void)layoutSubviews;
- (void)offlineView;
- (void)dispatchTooltipWhenViewSettled;
- (void)createTitle;
- (id)initWithGlueTheme:(id)arg1 model:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
