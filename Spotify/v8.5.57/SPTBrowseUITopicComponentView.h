//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HUGSThemableComponentView.h"

@class SPTBrowseUITopicView;

@interface SPTBrowseUITopicComponentView : HUGSThemableComponentView
{
    SPTBrowseUITopicView *_topicView;
}

+ (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2 theme:(id)arg3;
@property(readonly, nonatomic) SPTBrowseUITopicView *topicView; // @synthesize topicView=_topicView;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (void)configureWithModel:(id)arg1;
- (id)accessibilityLabel;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;

@end

