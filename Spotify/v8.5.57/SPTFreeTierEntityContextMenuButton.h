//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "SPTFreeTierEntityContextMenuButtonViewModelDelegate-Protocol.h"

@class NSString;
@protocol SPTFreeTierEntityContextMenuButtonViewModel;

@interface SPTFreeTierEntityContextMenuButton : UIButton <SPTFreeTierEntityContextMenuButtonViewModelDelegate>
{
    id <SPTFreeTierEntityContextMenuButtonViewModel> _viewModel;
    struct UIEdgeInsets _alignmentRectInsetsOverride;
}

@property(readonly, nonatomic) id <SPTFreeTierEntityContextMenuButtonViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) struct UIEdgeInsets alignmentRectInsetsOverride; // @synthesize alignmentRectInsetsOverride=_alignmentRectInsetsOverride;
- (void).cxx_destruct;
- (void)viewModel:(id)arg1 didUpdateState:(unsigned long long)arg2;
- (id)createImageForState:(unsigned long long)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
