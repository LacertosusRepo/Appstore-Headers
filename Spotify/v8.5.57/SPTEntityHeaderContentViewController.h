//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTEntityHeaderContentController-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, SPTEntityHeaderBackgroundImageView, UIImage, UIView;

@interface SPTEntityHeaderContentViewController : UIViewController <SPTEntityHeaderContentController>
{
    _Bool _stickyContent;
    UIImage *_backgroundImage;
    UIView *_contentView;
    double _minimumHeight;
    UIView *_supplementaryView;
    SPTEntityHeaderBackgroundImageView *_backgroundImageView;
    UIView *_providedContentView;
    NSArray *_layoutConstraints;
    NSLayoutConstraint *_topOffsetConstraint;
    UIViewController *_contentViewController;
}

@property(readonly, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) __weak NSLayoutConstraint *topOffsetConstraint; // @synthesize topOffsetConstraint=_topOffsetConstraint;
@property(copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) UIView *providedContentView; // @synthesize providedContentView=_providedContentView;
@property(retain, nonatomic) SPTEntityHeaderBackgroundImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) _Bool stickyContent; // @synthesize stickyContent=_stickyContent;
@property(retain, nonatomic) UIView *supplementaryView; // @synthesize supplementaryView=_supplementaryView;
@property(nonatomic) double minimumHeight; // @synthesize minimumHeight=_minimumHeight;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
- (void).cxx_destruct;
- (double)defaultHeaderMinimumHeight;
- (id)supplementaryViewForEntityHeaderViewController:(id)arg1;
- (double)entityHeaderViewControllerMinimumHeight:(id)arg1;
- (void)entityHeaderViewController:(id)arg1 didReachMinimumHeight:(_Bool)arg2;
- (void)entityHeaderViewController:(id)arg1 didUpdateBounceOffsets:(struct UIEdgeInsets)arg2;
- (void)entityHeaderViewController:(id)arg1 didUpdateVisibleRect:(struct CGRect)arg2;
- (void)entityHeaderViewController:(id)arg1 didAttachToScrollView:(id)arg2 inViewController:(id)arg3;
- (id)contentControllerRespondingTo:(SEL)arg1;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (id)initWithContentView:(id)arg1;
- (id)initWithContentViewController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

