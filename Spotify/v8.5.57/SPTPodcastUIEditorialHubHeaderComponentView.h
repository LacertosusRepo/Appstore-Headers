//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HUGSThemableComponentView.h"

#import "HUBComponentViewContentOffsetObserver-Protocol.h"
#import "HUBComponentViewWithChildren-Protocol.h"
#import "HUBComponentViewWithEvents-Protocol.h"
#import "HUBComponentViewWithImageHandling-Protocol.h"

@class NSLayoutConstraint, NSURL, SPTPodcastUIEditorialHeaderStyle, SPTPodcastUIEditorialHeaderViewController, SPTPodcastUIHubsChildCollectionViewController;
@protocol HUBComponentEventHandler, HUBComponentViewChildDelegate;

@interface SPTPodcastUIEditorialHubHeaderComponentView : HUGSThemableComponentView <HUBComponentViewWithImageHandling, HUBComponentViewWithEvents, HUBComponentViewContentOffsetObserver, HUBComponentViewWithChildren>
{
    id <HUBComponentEventHandler> _eventHandler;
    id <HUBComponentViewChildDelegate> _childDelegate;
    SPTPodcastUIEditorialHeaderStyle *_style;
    SPTPodcastUIEditorialHeaderViewController *_headerController;
    SPTPodcastUIHubsChildCollectionViewController *_childController;
    NSLayoutConstraint *_heightConstraint;
    NSURL *_lastImageURL;
    double _currentWidth;
    double _contentHeight;
    double _bodyHeight;
    double _statusBarHeight;
    struct CGPoint _currentContentOffset;
}

+ (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewWidth:(double)arg2 theme:(id)arg3;
@property(nonatomic) double statusBarHeight; // @synthesize statusBarHeight=_statusBarHeight;
@property(nonatomic) struct CGPoint currentContentOffset; // @synthesize currentContentOffset=_currentContentOffset;
@property(nonatomic) double bodyHeight; // @synthesize bodyHeight=_bodyHeight;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(nonatomic) double currentWidth; // @synthesize currentWidth=_currentWidth;
@property(retain, nonatomic) NSURL *lastImageURL; // @synthesize lastImageURL=_lastImageURL;
@property(readonly, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) SPTPodcastUIHubsChildCollectionViewController *childController; // @synthesize childController=_childController;
@property(retain, nonatomic) SPTPodcastUIEditorialHeaderViewController *headerController; // @synthesize headerController=_headerController;
@property(copy, nonatomic) SPTPodcastUIEditorialHeaderStyle *style; // @synthesize style=_style;
@property(nonatomic) __weak id <HUBComponentViewChildDelegate> childDelegate; // @synthesize childDelegate=_childDelegate;
@property(retain, nonatomic) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateViewForChangedContentOffset:(struct CGPoint)arg1;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (void)configureWithModel:(id)arg1;
- (double)getImageHeight;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)setUpViewHierarchy;
- (void)setUpViews;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;

@end
