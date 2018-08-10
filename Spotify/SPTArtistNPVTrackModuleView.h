//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GLUEStyleable.h"

@class GLUEGradientView, GLUEImageView, GLUELabel, NSLayoutConstraint, NSString, UIButton;

@interface SPTArtistNPVTrackModuleView : UIView <GLUEStyleable>
{
    GLUEImageView *_imageView;
    GLUELabel *_nameLabel;
    GLUELabel *_biographyLabel;
    UIButton *_button;
    GLUEGradientView *_gradientView;
    UIView *_contentView;
    NSLayoutConstraint *_contentBottomEdgeConstraint;
    NSLayoutConstraint *_contentLeftEdgeConstraint;
    NSLayoutConstraint *_contentRightEdgeConstraint;
    NSLayoutConstraint *_contentTopEdgeConstraint;
    NSLayoutConstraint *_biographyBottomEdgeConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *biographyBottomEdgeConstraint; // @synthesize biographyBottomEdgeConstraint=_biographyBottomEdgeConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentTopEdgeConstraint; // @synthesize contentTopEdgeConstraint=_contentTopEdgeConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentRightEdgeConstraint; // @synthesize contentRightEdgeConstraint=_contentRightEdgeConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentLeftEdgeConstraint; // @synthesize contentLeftEdgeConstraint=_contentLeftEdgeConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentBottomEdgeConstraint; // @synthesize contentBottomEdgeConstraint=_contentBottomEdgeConstraint;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) GLUEGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(readonly, nonatomic) UIButton *button; // @synthesize button=_button;
@property(readonly, nonatomic) GLUELabel *biographyLabel; // @synthesize biographyLabel=_biographyLabel;
@property(readonly, nonatomic) GLUELabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(readonly, nonatomic) GLUEImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)activateConstraints;
- (void)applyContentPriorities;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
