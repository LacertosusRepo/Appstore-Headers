//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTLoginTraitChangingView.h"

@class SPTLoginLoadingActionButton, UIView;

@interface SPTLoginLoadingView : SPTLoginTraitChangingView
{
    SPTLoginLoadingActionButton *_submitButton;
    UIView *_loadingOverlay;
}

@property(retain, nonatomic) UIView *loadingOverlay; // @synthesize loadingOverlay=_loadingOverlay;
@property(readonly, nonatomic) SPTLoginLoadingActionButton *submitButton; // @synthesize submitButton=_submitButton;
- (void).cxx_destruct;
- (void)showLoadingUI;
- (void)hideLoadingUI;

@end

