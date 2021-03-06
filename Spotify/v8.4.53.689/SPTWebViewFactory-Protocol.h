//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, UIViewController<SPTWebViewController>;

@protocol SPTWebViewFactory <NSObject>
- (UIViewController<SPTWebViewController> *)createWebViewControllerWithURL:(NSURL *)arg1 authenticate:(_Bool)arg2 pageURI:(NSURL *)arg3 pageIdentifier:(NSString *)arg4 hideNavigationContentAndControls:(_Bool)arg5;
- (UIViewController<SPTWebViewController> *)createWebViewControllerWithURL:(NSURL *)arg1 authenticate:(_Bool)arg2;
- (UIViewController<SPTWebViewController> *)createWebViewControllerWithURL:(NSURL *)arg1;
@end

