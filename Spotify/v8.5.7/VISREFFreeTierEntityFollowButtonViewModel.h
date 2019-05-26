//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierEntityFeedbackButtonViewModelDelegate-Protocol.h"
#import "VISREFActionRowButtonViewModel-Protocol.h"

@class GLUEButton, NSString;
@protocol SPTFreeTierEntityFeedbackButtonViewModel, VISREFActionRowButtonViewModelDelegate;

@interface VISREFFreeTierEntityFollowButtonViewModel : NSObject <VISREFActionRowButtonViewModel, SPTFreeTierEntityFeedbackButtonViewModelDelegate>
{
    GLUEButton<VISREFActionRowButtonViewModelDelegate> *_delegate;
    id <SPTFreeTierEntityFeedbackButtonViewModel> _viewModel;
}

@property(retain, nonatomic) id <SPTFreeTierEntityFeedbackButtonViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak GLUEButton<VISREFActionRowButtonViewModelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewModel:(id)arg1 didUpdateState:(unsigned long long)arg2;
- (_Bool)selectedStateForFeedbackState:(unsigned long long)arg1;
- (_Bool)enabledStateForFeedbackState:(unsigned long long)arg1;
- (id)styleForFeedbackState:(unsigned long long)arg1;
- (id)iconForFeedbackState:(unsigned long long)arg1;
- (id)accessibilityTitleForFeedbackState:(unsigned long long)arg1;
- (id)titleForFeedbackState:(unsigned long long)arg1;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

