//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HUGSThemableComponentView.h"

@class GLUESectionHeaderView;
@protocol HUGSStyleOverrider;

@interface HUGSSectionHeaderComponentView : HUGSThemableComponentView
{
    id <HUGSStyleOverrider> _styleOverrider;
    GLUESectionHeaderView *_headerView;
}

@property(readonly, nonatomic) GLUESectionHeaderView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) id <HUGSStyleOverrider> styleOverrider; // @synthesize styleOverrider=_styleOverrider;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (id)subtitleFromModel:(id)arg1;
- (_Bool)containsSubtitleForModel:(id)arg1;
- (id)styleForComponentModel:(id)arg1;
- (void)prepareForReuse;
- (void)configureWithModel:(id)arg1;
- (id)initWithTheme:(id)arg1 styleOverrider:(id)arg2 frame:(struct CGRect)arg3;

@end

