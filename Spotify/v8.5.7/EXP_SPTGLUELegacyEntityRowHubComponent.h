//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EXP_HUGSThemableComponent.h"

#import "EXP_HUBComponent-Protocol.h"

@class NSSet;
@protocol EXP_HUGSStyleOverrider;

@interface EXP_SPTGLUELegacyEntityRowHubComponent : EXP_HUGSThemableComponent <EXP_HUBComponent>
{
    id <EXP_HUGSStyleOverrider> _styleOverrider;
}

@property(readonly, nonatomic) id <EXP_HUGSStyleOverrider> styleOverrider; // @synthesize styleOverrider=_styleOverrider;
- (void).cxx_destruct;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (id)createViewWithFrame:(struct CGRect)arg1;
@property(readonly, copy, nonatomic) NSSet *layoutTraits;
- (id)initWithTheme:(id)arg1 styleOverrider:(id)arg2;

@end

