//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EXP_HUGSThemableComponent.h"

#import "EXP_HUBComponent-Protocol.h"

@class NSSet, SPTHomeUIHeroCardStyle;
@protocol SPTHomeUIHeroCardLayout;

@interface SPTHomeUIHeroCardComponent : EXP_HUGSThemableComponent <EXP_HUBComponent>
{
    id <SPTHomeUIHeroCardLayout> _layout;
    SPTHomeUIHeroCardStyle *_style;
}

@property(retain, nonatomic) SPTHomeUIHeroCardStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) id <SPTHomeUIHeroCardLayout> layout; // @synthesize layout=_layout;
- (void).cxx_destruct;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (id)createViewWithFrame:(struct CGRect)arg1;
@property(readonly, copy, nonatomic) NSSet *layoutTraits;
- (id)initWithTheme:(id)arg1 layout:(id)arg2 style:(id)arg3;

@end

