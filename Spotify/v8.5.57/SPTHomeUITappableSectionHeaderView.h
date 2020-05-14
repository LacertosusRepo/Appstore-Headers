//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class GLUEImageView, GLUELabel, UIImage;
@protocol GLUETheme;

@interface SPTHomeUITappableSectionHeaderView : UIView
{
    id <GLUETheme> _theme;
    GLUELabel *_upperLabel;
    GLUELabel *_lowerLabel;
    GLUEImageView *_imageView;
}

+ (struct CGSize)preferredSizeForImage;
+ (double)preferredHeightForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2 theme:(id)arg3;
@property(readonly, nonatomic) GLUEImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) GLUELabel *lowerLabel; // @synthesize lowerLabel=_lowerLabel;
@property(readonly, nonatomic) GLUELabel *upperLabel; // @synthesize upperLabel=_upperLabel;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *image;
- (void)activateConstraints;
- (id)imageStyleWithModel:(id)arg1;
- (id)lowerLabelStyle;
- (id)upperLabelStyle;
- (void)applyGlueStyleWithModel:(id)arg1;
- (void)addAccessibilityWithModel:(id)arg1;
- (id)createImageWithModel:(id)arg1;
- (void)configureWithModel:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)prepareForReuse;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;

@end

