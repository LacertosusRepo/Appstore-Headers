//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SPTLoginAuthOptionView, SPTLoginAuthOptionViewModel, SPTLoginTheme;
@protocol SPTLoginAuthOptionViewControllerDelegate;

@interface SPTLoginAuthOptionViewController : UIViewController
{
    id <SPTLoginAuthOptionViewControllerDelegate> _delegate;
    SPTLoginAuthOptionViewModel *_viewModel;
    SPTLoginTheme *_theme;
}

@property(retain, nonatomic) SPTLoginTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTLoginAuthOptionViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <SPTLoginAuthOptionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)userDidTapOnFacebookButton:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithTheme:(id)arg1 viewModel:(id)arg2;

// Remaining properties
@property(retain, nonatomic) SPTLoginAuthOptionView *view; // @dynamic view;

@end

