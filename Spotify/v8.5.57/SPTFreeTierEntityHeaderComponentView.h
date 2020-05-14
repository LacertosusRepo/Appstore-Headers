//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HUGSThemableComponentView.h"

#import "HUBComponentViewContentOffsetObserver-Protocol.h"
#import "HUBComponentViewWithEvents-Protocol.h"
#import "HUBComponentViewWithImageHandling-Protocol.h"

@class SPTFreeTierEntityHeaderView;
@protocol HUBComponentEventHandler;

@interface SPTFreeTierEntityHeaderComponentView : HUGSThemableComponentView <HUBComponentViewWithImageHandling, HUBComponentViewContentOffsetObserver, HUBComponentViewWithEvents>
{
    id <HUBComponentEventHandler> _eventHandler;
    SPTFreeTierEntityHeaderView *_headerView;
}

+ (unsigned long long)headerViewStyleFromComponentModel:(id)arg1;
+ (double)preferredViewHeightForDisplayingModel:(id)arg1 theme:(id)arg2;
@property(readonly, nonatomic) SPTFreeTierEntityHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateViewForChangedContentOffset:(struct CGPoint)arg1;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (void)secondaryButtonTapped:(id)arg1;
- (void)mainButtonTapped:(id)arg1;
- (id)secondaryButtonModelFromModel:(id)arg1;
- (id)mainButtonModelFromModel:(id)arg1;
- (void)configureSecondaryButtonWithModel:(id)arg1;
- (void)configureMainButtonWithModel:(id)arg1;
- (void)configurePlaceholderImageWithModel:(id)arg1;
- (void)configureWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end
