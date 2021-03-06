//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GLUEHeaderViewDelegate.h"
#import "HUBComponentActionObserver.h"
#import "HUBComponentActionPerformer.h"
#import "HUBComponentContentOffsetObserver.h"
#import "HUBComponentWithChildren.h"
#import "HUBComponentWithImageHandling.h"

@class NSSet, NSString, UIView;

@interface SPTHubHeaderViewComponent : NSObject <GLUEHeaderViewDelegate, HUBComponentWithImageHandling, HUBComponentContentOffsetObserver, HUBComponentWithChildren, HUBComponentActionPerformer, HUBComponentActionObserver>
{
    UIView *_view;
    id <HUBComponentChildDelegate> _childDelegate;
    id <HUBActionPerformer> _actionPerformer;
    id <HUBComponentModel> _model;
}

@property(retain, nonatomic) id <HUBComponentModel> model; // @synthesize model=_model;
@property(nonatomic) __weak id <HUBActionPerformer> actionPerformer; // @synthesize actionPerformer=_actionPerformer;
@property(nonatomic) __weak id <HUBComponentChildDelegate> childDelegate; // @synthesize childDelegate=_childDelegate;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)glueHeaderView:(id)arg1 collapsed:(_Bool)arg2;
- (void)glueHeaderView:(id)arg1 imageViewTapped:(id)arg2;
- (void)actionPerformedWithContext:(id)arg1;
- (void)headerAccessoryButtonTapped:(id)arg1;
- (void)headerButtonTapped:(id)arg1;
- (id)collectionBarButtonModelFromModel:(id)arg1;
- (id)contextMenuBarButtonModelFromModel:(id)arg1;
- (id)accessoryButtonModelFromModel:(id)arg1;
- (id)buttonModelFromModel:(id)arg1;
- (unsigned long long)headerViewStyleFromComponentModel:(id)arg1;
- (id)createPrimaryActionButton;
- (void)updateViewForChangedContentOffset:(struct CGPoint)arg1;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (void)configureViewWithModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (void)prepareViewForReuse;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (double)preferredHeightForDisplayingModel:(id)arg1;
- (void)loadView;
@property(readonly, nonatomic) NSSet *layoutTraits;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

