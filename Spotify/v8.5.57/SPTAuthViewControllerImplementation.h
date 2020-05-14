//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTAuthViewController-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"

@class NSString, SPTAuthViewControllerViewModel, UIActivityIndicatorView, WKWebView;
@protocol SPTAuthViewControllerDelegate;

@interface SPTAuthViewControllerImplementation : UIViewController <WKNavigationDelegate, SPTAuthViewController>
{
    id <SPTAuthViewControllerDelegate> delegate;
    WKWebView *_webView;
    UIActivityIndicatorView *_activityIndicatorView;
    SPTAuthViewControllerViewModel *_viewModel;
}

@property(retain, nonatomic) SPTAuthViewControllerViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak id <SPTAuthViewControllerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)actOnPolicy:(long long)arg1 redirectURL:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)spt_popupNavigationControllerCancelButtonTouched:(id)arg1;
- (void)redirectToURL:(id)arg1;
- (void)startNavigating;
- (void)setupWebViewWithConfiguration:(id)arg1;
- (void)setupAndLoadWebView;
- (void)setupLoadingIndicator;
- (_Bool)isModalInPresentation;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

