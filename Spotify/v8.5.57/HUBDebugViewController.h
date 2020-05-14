//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class HUBDebugView, HUBDebugViewModel, UIActivityIndicatorView, UIButton, UILabel;

@interface HUBDebugViewController : UIViewController
{
    UIButton *_closeButton;
    UILabel *_titleLabel;
    UIButton *_saveToClipboardButton;
    HUBDebugView *_debugView;
    UIActivityIndicatorView *_activityIndicator;
    HUBDebugViewModel *_viewModel;
}

@property(readonly, nonatomic) HUBDebugViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)saveToClipboard;
- (void)close;
- (void)layoutActivityIndicator;
- (void)layoutDebugView;
- (void)layoutSaveToClipboardButton;
- (void)layoutTitleLabel;
- (void)layoutCloseButton;
@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(readonly, nonatomic) HUBDebugView *debugView; // @synthesize debugView=_debugView;
- (id)buttonWithText:(id)arg1 action:(SEL)arg2;
@property(readonly, nonatomic) UIButton *saveToClipboardButton; // @synthesize saveToClipboardButton=_saveToClipboardButton;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

@end
