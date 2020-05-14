//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SPTInAppMessageCardMessageViewModel, UIView, WKWebView;

@interface SPTInAppMessageCardMessageViewController : UIViewController
{
    UIView *_feedbackView;
    WKWebView *_webview;
    SPTInAppMessageCardMessageViewModel *_viewModel;
}

@property(retain, nonatomic) SPTInAppMessageCardMessageViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WKWebView *webview; // @synthesize webview=_webview;
@property(retain, nonatomic) UIView *feedbackView; // @synthesize feedbackView=_feedbackView;
- (void).cxx_destruct;
- (struct CGSize)preferredContentSize;
- (void)updateContentInsetAdjustmentBehaviorForScrollview:(id)arg1;
- (void)updateAntialiasing:(id)arg1;
- (void)addFeedbackviewConstraints;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)setupWebview;
- (void)setupFeedbackView;
- (id)initWithViewModel:(id)arg1;

@end
