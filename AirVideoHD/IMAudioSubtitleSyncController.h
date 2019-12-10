//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IMVideoDetailSettingsController.h"

@class IMGauge, IMItemSettings, IMItemStreamSettings, InMethod_IMItem, UIButton;

@interface IMAudioSubtitleSyncController : IMVideoDetailSettingsController
{
    IMGauge *audioSync;
    IMGauge *subtitleSync;
    UIButton *resetButton;
    UIButton *applyButton;
    IMItemSettings *itemSettings;
    IMItemStreamSettings *streamSettings;
    id itemChangeToken;
    InMethod_IMItem *item;
    double topBottomPadding;
}

@property(nonatomic) double topBottomPadding; // @synthesize topBottomPadding;
@property(retain, nonatomic) InMethod_IMItem *item; // @synthesize item;
- (void).cxx_destruct;
- (void)onApply:(id)arg1;
- (void)onReset:(id)arg1;
- (void)layoutSubviews;
- (_Bool)automaticallyAdjustsScrollViewInsets;
- (void)didEndDisappearanceTransition:(id)arg1;
- (void)didEndAppearanceTransition:(id)arg1;
- (void)willBeginAppearanceTransition:(id)arg1;
- (void)viewDidLoad;

@end
