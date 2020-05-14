//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class HUBDebugInfoView, HUBDebugViewModel, UISegmentedControl, UITextView;

@interface HUBDebugView : UIView
{
    UISegmentedControl *_segmentedControl;
    UITextView *_textView;
    HUBDebugViewModel *_viewModel;
    HUBDebugInfoView *_infoView;
}

@property(readonly, nonatomic) HUBDebugInfoView *infoView; // @synthesize infoView=_infoView;
@property(readonly, nonatomic) HUBDebugViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)didChangeSelectedSegment:(id)arg1;
- (void)layoutTextView;
- (void)layoutSegmentedControl;
- (void)layoutInfoView;
@property(readonly, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(readonly, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithViewModel:(id)arg1;

@end
