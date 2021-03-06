//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPViewController.h"

#import "UIWebViewDelegate-Protocol.h"

@class NSString, NSURL, UIColor, UIWebView;
@protocol SPTAlertController, SPTLinkDispatcher;

@interface SPBrowserViewController : SPViewController <UIWebViewDelegate>
{
    _Bool _interceptSpotifyLinks;
    _Bool _useNormalScrollViewDecelerationRate;
    UIWebView *_browser;
    NSURL *_url;
    UIColor *_backgroundColor;
    CDUnknownBlockType _onFinishedLoading;
    CDUnknownBlockType _onShouldStartLoadingRequest;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTAlertController> _alertController;
}

@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(copy, nonatomic) CDUnknownBlockType onShouldStartLoadingRequest; // @synthesize onShouldStartLoadingRequest=_onShouldStartLoadingRequest;
@property(copy, nonatomic) CDUnknownBlockType onFinishedLoading; // @synthesize onFinishedLoading=_onFinishedLoading;
@property(nonatomic) _Bool useNormalScrollViewDecelerationRate; // @synthesize useNormalScrollViewDecelerationRate=_useNormalScrollViewDecelerationRate;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) _Bool interceptSpotifyLinks; // @synthesize interceptSpotifyLinks=_interceptSpotifyLinks;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) UIWebView *browser; // @synthesize browser=_browser;
- (void).cxx_destruct;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)loadView;
- (void)openInBrowser;
- (void)dismissSelf;
- (id)initWithURL:(id)arg1 linkDispatcher:(id)arg2 alertController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

