//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SPTLoginLoadingActionButton;

@interface SPTLoginLoadingView : UIView
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
