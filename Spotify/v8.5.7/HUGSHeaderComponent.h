//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HUGSThemableComponent.h"

#import "GLUEHeaderViewDelegate-Protocol.h"
#import "HUBComponentActionObserver-Protocol.h"
#import "HUBComponentActionPerformer-Protocol.h"
#import "HUBComponentContentOffsetObserver-Protocol.h"
#import "HUBComponentWithChildren-Protocol.h"
#import "HUBComponentWithImageHandling-Protocol.h"

@class NSSet, NSString, UIView;
@protocol HUBActionPerformer, HUBComponentChildDelegate, HUBComponentModel;

@interface HUGSHeaderComponent : HUGSThemableComponent <GLUEHeaderViewDelegate, HUBComponentWithImageHandling, HUBComponentContentOffsetObserver, HUBComponentWithChildren, HUBComponentActionPerformer, HUBComponentActionObserver>
{
    UIView *_view;
    id <HUBComponentChildDelegate> _childDelegate;
    id <HUBActionPerformer> _actionPerformer;
    id <HUBComponentModel> _model;
}

+ (id)bouncePrimaryButtonActionIdentifier;
@property(retain, nonatomic) id <HUBComponentModel> model; // @synthesize model=_model;
@property(nonatomic) __weak id <HUBActionPerformer> actionPerformer; // @synthesize actionPerformer=_actionPerformer;
@property(nonatomic) __weak id <HUBComponentChildDelegate> childDelegate; // @synthesize childDelegate=_childDelegate;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (id)collectionBarButtonModelFromModel:(id)arg1;
- (id)contextMenuBarButtonModelFromModel:(id)arg1;
- (id)accessoryButtonModelFromModel:(id)arg1;
- (id)buttonModelFromModel:(id)arg1;
- (unsigned long long)headerViewStyleFromComponentModel:(id)arg1;
- (id)createPrimaryActionButton;
- (void)glueHeaderView:(id)arg1 collapsed:(_Bool)arg2;
- (void)glueHeaderView:(id)arg1 imageViewTapped:(id)arg2;
- (void)actionPerformedWithContext:(id)arg1;
- (void)headerAccessoryButtonTapped:(id)arg1;
- (void)headerButtonTapped:(id)arg1;
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

