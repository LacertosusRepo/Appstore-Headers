//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPVolumeView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"

@class NSString, UIButton, UISlider, UIView;

@interface IMVideoOverlayVolumeView : MPVolumeView <UIGestureRecognizerDelegate, UIPopoverControllerDelegate>
{
    UIButton *routeButton;
    UIView *volumeSliderContainer;
    UIView *routeButtonContainer;
    CDUnknownBlockType popoverDismissBlock;
    double _sliderLeftMargin;
    double _sliderRightMargin;
}

@property(nonatomic) double sliderRightMargin; // @synthesize sliderRightMargin=_sliderRightMargin;
@property(nonatomic) double sliderLeftMargin; // @synthesize sliderLeftMargin=_sliderLeftMargin;
@property(copy, nonatomic) CDUnknownBlockType popoverDismissBlock; // @synthesize popoverDismissBlock;
- (void).cxx_destruct;
- (void)longPressRecognizer:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (struct CGRect)volumeSliderRectForBounds:(struct CGRect)arg1;
- (struct CGRect)routeButtonRectForBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) UIView *imVolumeSliderContainer;
@property(readonly, nonatomic) UISlider *imVolumeSlider;
@property(readonly, nonatomic) UIButton *imRouteButton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

