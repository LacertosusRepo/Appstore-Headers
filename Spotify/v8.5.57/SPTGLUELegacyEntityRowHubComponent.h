//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HUGSThemableComponent.h"

#import "HUBComponent-Protocol.h"

@class NSSet;
@protocol HUGSStyleOverrider;

@interface SPTGLUELegacyEntityRowHubComponent : HUGSThemableComponent <HUBComponent>
{
    id <HUGSStyleOverrider> _styleOverrider;
}

@property(readonly, nonatomic) id <HUGSStyleOverrider> styleOverrider; // @synthesize styleOverrider=_styleOverrider;
- (void).cxx_destruct;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (id)createViewWithFrame:(struct CGRect)arg1;
@property(readonly, copy, nonatomic) NSSet *layoutTraits;
- (id)initWithTheme:(id)arg1 styleOverrider:(id)arg2;

@end

