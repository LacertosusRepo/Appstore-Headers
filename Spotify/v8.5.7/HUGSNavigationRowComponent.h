//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HUGSThemableComponent.h"

#import "HUBComponent-Protocol.h"

@class NSSet, UIView;

@interface HUGSNavigationRowComponent : HUGSThemableComponent <HUBComponent>
{
    UIView *_view;
}

@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (id)styleForModel:(id)arg1;
- (void)prepareViewForReuse;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (void)configureViewWithModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (void)loadView;
@property(readonly, nonatomic) NSSet *layoutTraits;

@end

