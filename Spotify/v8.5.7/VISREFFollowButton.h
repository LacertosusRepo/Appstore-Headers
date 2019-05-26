//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GLUEButton.h"

#import "VISREFActionRowButtonViewModelDelegate-Protocol.h"

@class NSString;
@protocol VISREFActionRowButtonViewModel;

@interface VISREFFollowButton : GLUEButton <VISREFActionRowButtonViewModelDelegate>
{
    id <VISREFActionRowButtonViewModel> _viewModel;
    NSString *_accessibilityLabelText;
}

@property(copy, nonatomic) NSString *accessibilityLabelText; // @synthesize accessibilityLabelText=_accessibilityLabelText;
@property(retain, nonatomic) id <VISREFActionRowButtonViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (struct CGSize)intrinsicContentSize;
- (void)updateStyle:(id)arg1;
- (void)updateIcon:(id)arg1;
- (void)updateAccessibilityLabel:(id)arg1;
- (void)updateTitle:(id)arg1;
- (void)updateSelectedState:(_Bool)arg1;
- (void)updateEnabledState:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

