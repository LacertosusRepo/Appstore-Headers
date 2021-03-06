//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EXP_HUGSThemableComponentView.h"

#import "EXP_HUBComponentViewWithEvents-Protocol.h"
#import "EXP_HUBComponentViewWithImageHandling-Protocol.h"

@class GLUEEntityRowView, GLUEImageView, GLUELabel, HUGSCustomViewControl, NSLayoutConstraint, SPTTheme;
@protocol EXP_HUBComponentEventHandler;

@interface SPTPodcastUIIndexedImageRowComponentView : EXP_HUGSThemableComponentView <EXP_HUBComponentViewWithImageHandling, EXP_HUBComponentViewWithEvents>
{
    id <EXP_HUBComponentEventHandler> _eventHandler;
    GLUELabel *_indexLabel;
    GLUEEntityRowView *_rowView;
    GLUEImageView *_imageView;
    HUGSCustomViewControl *_control;
    NSLayoutConstraint *_indexLabelWidthConstraint;
    SPTTheme *_sptTheme;
}

+ (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2 theme:(id)arg3;
@property(readonly, nonatomic) SPTTheme *sptTheme; // @synthesize sptTheme=_sptTheme;
@property(retain, nonatomic) NSLayoutConstraint *indexLabelWidthConstraint; // @synthesize indexLabelWidthConstraint=_indexLabelWidthConstraint;
@property(readonly, nonatomic) HUGSCustomViewControl *control; // @synthesize control=_control;
@property(readonly, nonatomic) GLUEImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) GLUEEntityRowView *rowView; // @synthesize rowView=_rowView;
@property(readonly, nonatomic) GLUELabel *indexLabel; // @synthesize indexLabel=_indexLabel;
@property(retain, nonatomic) id <EXP_HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (double)maximumLabelWidth;
- (double)preferedLeadingAccessoriesWidth;
- (struct CGSize)imageViewSize;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (void)configureWithModel:(id)arg1;
- (void)sendSelectionEvent;
- (void)applyThemeLayout;
- (id)provideLeadingAccessoryView;
- (void)setupConstraints;
- (void)applyStyle;
- (void)setupAccessoryViews;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;

@end

