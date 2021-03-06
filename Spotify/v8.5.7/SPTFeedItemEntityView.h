//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class GLUEImageView, GLUEShuffleBadgeLabelView, NSArray, NSString, SPTFeedPreviewPlayButtonView, UILabel, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface SPTFeedItemEntityView : UIView <UIGestureRecognizerDelegate>
{
    GLUEImageView *_entityImageView;
    UILabel *_entityTitleLabel;
    UILabel *_entitySubtitleLabel;
    SPTFeedPreviewPlayButtonView *_circularPlayButtonView;
    NSArray *_layoutConstraints;
    UIView *_containerView;
    UIView *_labelContainerView;
    UIView *_highlightView;
    GLUEShuffleBadgeLabelView *_shuffleBadgeView;
    UILongPressGestureRecognizer *_highlightGestureRecognizer;
    UITapGestureRecognizer *_selectionGestureRecognizer;
}

@property(retain, nonatomic) UITapGestureRecognizer *selectionGestureRecognizer; // @synthesize selectionGestureRecognizer=_selectionGestureRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *highlightGestureRecognizer; // @synthesize highlightGestureRecognizer=_highlightGestureRecognizer;
@property(retain, nonatomic) GLUEShuffleBadgeLabelView *shuffleBadgeView; // @synthesize shuffleBadgeView=_shuffleBadgeView;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) UIView *labelContainerView; // @synthesize labelContainerView=_labelContainerView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) SPTFeedPreviewPlayButtonView *circularPlayButtonView; // @synthesize circularPlayButtonView=_circularPlayButtonView;
@property(retain, nonatomic) UILabel *entitySubtitleLabel; // @synthesize entitySubtitleLabel=_entitySubtitleLabel;
@property(retain, nonatomic) UILabel *entityTitleLabel; // @synthesize entityTitleLabel=_entityTitleLabel;
@property(retain, nonatomic) GLUEImageView *entityImageView; // @synthesize entityImageView=_entityImageView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)addSelectionTarget:(id)arg1 action:(SEL)arg2 forItemAtIndex:(unsigned long long)arg3;
- (void)updateConstraints;
- (id)setupNFTConstraints;
- (void)addViewConstraints;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)highlightGestureRecognizerChangedState:(id)arg1;
- (void)setupGestureRecognizers;
- (void)setupLabelContainerView;
- (void)setupPlayButton;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

