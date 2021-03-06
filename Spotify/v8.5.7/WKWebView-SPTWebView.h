//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKit/WKWebView.h>

#import "SPTWebView-Protocol.h"

@class NSString;

@interface WKWebView (SPTWebView) <SPTWebView>
- (_Bool)spt_isProgressObservationSupported;
- (id)spt_title;
- (id)spt_currentURL;
- (void)spt_goForward;
- (void)spt_goBack;
- (_Bool)spt_canGoForward;
- (_Bool)spt_canGoBack;
- (void)spt_loadRequest:(id)arg1;
- (void)spt_setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

