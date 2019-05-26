//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SPTOnDemandTrialFinishDialogModel, SPTOnDemandTrialFinishDialogView, SPTOnDemandTrialGLUETheme;
@protocol GLUEImageLoader, SPTOnDemandTrialFinishDialogViewControllerDelegate;

@interface SPTOnDemandTrialFinishDialogViewController : UIViewController
{
    id <SPTOnDemandTrialFinishDialogViewControllerDelegate> _delegate;
    id <GLUEImageLoader> _glueImageLoader;
    SPTOnDemandTrialFinishDialogModel *_model;
    SPTOnDemandTrialGLUETheme *_theme;
}

@property(readonly, nonatomic) SPTOnDemandTrialGLUETheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTOnDemandTrialFinishDialogModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(nonatomic) __weak id <SPTOnDemandTrialFinishDialogViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loadImage;
- (void)closeDialog;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithGLUEImageLoader:(id)arg1 theme:(id)arg2 model:(id)arg3;

// Remaining properties
@property(retain, nonatomic) SPTOnDemandTrialFinishDialogView *view; // @dynamic view;

@end
