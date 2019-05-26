//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "VISREFActionRowButtonViewModel-Protocol.h"

@class GLUEButton, NSString;
@protocol SPTFreeTierPlaylistFollowViewModel, VISREFActionRowButtonViewModelDelegate;

@interface VISREFFreeTierPlaylistFollowButtonViewModel : NSObject <VISREFActionRowButtonViewModel>
{
    GLUEButton<VISREFActionRowButtonViewModelDelegate> *_delegate;
    id <SPTFreeTierPlaylistFollowViewModel> _viewModel;
}

@property(retain, nonatomic) id <SPTFreeTierPlaylistFollowViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak GLUEButton<VISREFActionRowButtonViewModelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewModelDidUpdate;
- (id)createAccessibilityLabel;
- (id)createImage;
- (void)didTapToggleFollowButton:(id)arg1;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
