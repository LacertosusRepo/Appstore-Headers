//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class EXP_HUBComponentView;
@protocol EXP_HUBComponentModel, EXP_HUBComponentViewWithChildren;

@protocol EXP_HUBComponentViewChildDelegate
- (void)componentView:(EXP_HUBComponentView<EXP_HUBComponentViewWithChildren> *)arg1 didEndDisplayingChildComponentView:(EXP_HUBComponentView *)arg2;
- (void)componentView:(EXP_HUBComponentView<EXP_HUBComponentViewWithChildren> *)arg1 willDisplayChildComponentView:(EXP_HUBComponentView *)arg2;
- (EXP_HUBComponentView *)componentView:(EXP_HUBComponentView<EXP_HUBComponentViewWithChildren> *)arg1 childComponentViewForModel:(id <EXP_HUBComponentModel>)arg2;
@end

