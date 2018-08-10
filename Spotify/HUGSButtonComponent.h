//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HUGSThemableComponent.h"

#import "HUBComponent.h"
#import "HUBComponentWithSelectionState.h"

@class NSSet, UIView;

@interface HUGSButtonComponent : HUGSThemableComponent <HUBComponent, HUBComponentWithSelectionState>
{
    UIView *_view;
}

@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (id)buttonStyleForNamedStyle:(id)arg1;
- (id)buttonStyleForModel:(id)arg1;
- (void)configureButton:(id)arg1 withModel:(id)arg2;
- (id)createButton;
- (void)updateViewForSelectionState:(unsigned long long)arg1;
- (void)configureViewWithModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (void)prepareViewForReuse;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (void)loadView;
@property(readonly, nonatomic) NSSet *layoutTraits;

@end

