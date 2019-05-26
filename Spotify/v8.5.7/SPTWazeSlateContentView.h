//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTThemableView-Protocol.h"

@class GLUEButton, NSString, SPTWazeSlateViewModel, UIImageView, UILabel;
@protocol GLUETheme, SPTThemableViewLayoutDelegate;

@interface SPTWazeSlateContentView : UIView <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    SPTWazeSlateViewModel *_viewModel;
    id <GLUETheme> _glueTheme;
    UIImageView *_backgroundImageView;
    UIImageView *_wazeLogoImageView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    GLUEButton *_acceptButton;
}

@property(retain, nonatomic) GLUEButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *wazeLogoImageView; // @synthesize wazeLogoImageView=_wazeLogoImageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(readonly, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(readonly, nonatomic) SPTWazeSlateViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)updateWithViewModel:(id)arg1;
- (void)applyThemeLayout;
- (void)setupLayout;
- (void)setupSubviews;
- (id)initWithViewModel:(id)arg1 glueTheme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

