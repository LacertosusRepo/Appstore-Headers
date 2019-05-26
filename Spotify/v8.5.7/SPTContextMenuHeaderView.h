//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTThemableView-Protocol.h"

@class NSLayoutConstraint, NSString, UIImage, UIImageView, UILabel;
@protocol SPTThemableViewLayoutDelegate;

@interface SPTContextMenuHeaderView : UIView <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    NSString *_subtitle;
    long long _subtitleStyle;
    long long _imageStyle;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_metadataLabel;
    UIView *_labelsView;
    NSLayoutConstraint *_contentToLeadingImageViewConstraint;
    NSLayoutConstraint *_contentToTopViewConstraint;
}

+ (struct CGSize)preferredImageSize;
@property(retain, nonatomic) NSLayoutConstraint *contentToTopViewConstraint; // @synthesize contentToTopViewConstraint=_contentToTopViewConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentToLeadingImageViewConstraint; // @synthesize contentToLeadingImageViewConstraint=_contentToLeadingImageViewConstraint;
@property(retain, nonatomic) UIView *labelsView; // @synthesize labelsView=_labelsView;
@property(retain, nonatomic) UILabel *metadataLabel; // @synthesize metadataLabel=_metadataLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) long long imageStyle; // @synthesize imageStyle=_imageStyle;
@property(nonatomic) long long subtitleStyle; // @synthesize subtitleStyle=_subtitleStyle;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)applyThemeLayout;
- (void)applySubtitleStyle;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIImage *image;
@property(retain, nonatomic) NSString *metadataTitle;
@property(retain, nonatomic) NSString *title;
- (void)updateConstraints;
- (void)addViewConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

