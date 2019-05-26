//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPViewController.h"

#import "SPTPageController-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"

@class NSString, NSURL, NSURLRequest, SPTProgressView, WKWebView;
@protocol SPTAlertInterface, SPTPageContainer;

@interface SPTAdTermsViewController : SPViewController <WKNavigationDelegate, SPTPageController>
{
    WKWebView *_webView;
    NSURLRequest *_request;
    SPTProgressView *_progressView;
    id <SPTAlertInterface> _alertController;
}

@property(nonatomic) __weak id <SPTAlertInterface> alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(copy, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)refresh;
- (void)loadURL:(id)arg1;
- (void)showVoiceTermsAndConditions;
- (_Bool)automaticallyAdjustsScrollViewInsets;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithAlertController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

