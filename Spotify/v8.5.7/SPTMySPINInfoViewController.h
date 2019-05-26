//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SPTMySPINInfoView;
@protocol SPTMySPINInfoViewModel;

@interface SPTMySPINInfoViewController : UIViewController
{
    id <SPTMySPINInfoViewModel> _viewModel;
    struct CGSize _remoteScreenSize;
}

@property(readonly, nonatomic) struct CGSize remoteScreenSize; // @synthesize remoteScreenSize=_remoteScreenSize;
@property(readonly, nonatomic) id <SPTMySPINInfoViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)didChangeThemeSettings:(id)arg1;
@property(readonly, nonatomic) SPTMySPINInfoView *infoView;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithViewModel:(id)arg1 remoteScreenSize:(struct CGSize)arg2;

@end

