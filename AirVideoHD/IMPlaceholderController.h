//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IMViewController.h"

#import "UIWebViewDelegate-Protocol.h"

@class IMDynamicWebView, NSString;

@interface IMPlaceholderController : IMViewController <UIWebViewDelegate>
{
    IMDynamicWebView *dynamicWebView;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)adjustScrollViewInsets;
- (void)didEndDisappearanceTransition:(id)arg1;
- (void)didEndAppearanceTransition:(id)arg1;
- (void)disappeared;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)willBeginAppearanceTransition:(id)arg1;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

