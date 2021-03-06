//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, NSURLRequest;

@protocol SPTWebViewControllerDelegate <NSObject>

@optional
- (NSArray *)webViewControllerShareActivityItems;
- (void)webViewController:(id <SPTWebViewController>)arg1 didFailAuthenticationWithError:(NSError *)arg2;
- (_Bool)webViewController:(id <SPTWebViewController>)arg1 shouldAllowRequest:(NSURLRequest *)arg2 navigationType:(long long)arg3;
- (void)webViewControllerDidDisappear:(id <SPTWebViewController>)arg1;
- (void)webViewControllerWillDisappear:(id <SPTWebViewController>)arg1;
- (void)webViewControllerDidAppear:(id <SPTWebViewController>)arg1;
- (void)webViewControllerWillAppear:(id <SPTWebViewController>)arg1;
@end

