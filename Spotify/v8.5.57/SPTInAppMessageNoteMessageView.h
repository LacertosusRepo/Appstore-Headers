//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class WKWebView;

@interface SPTInAppMessageNoteMessageView : UIView
{
    double _height;
    WKWebView *_webView;
}

@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) double height; // @synthesize height=_height;
- (void).cxx_destruct;
- (void)updateStyle;
- (void)updateContentInsetAdjustmentBehaviorForScrollview:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithWebView:(id)arg1 height:(double)arg2;

@end

