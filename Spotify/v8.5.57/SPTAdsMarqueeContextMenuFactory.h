//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTTheme;
@protocol SPTEventSender, SPTUIPresentationService, SPTWebViewFactory;

@interface SPTAdsMarqueeContextMenuFactory : NSObject
{
    SPTTheme *_theme;
    id <SPTWebViewFactory> _webViewFactory;
    id <SPTUIPresentationService> _presentationService;
    id <SPTEventSender> _eventSender;
}

@property(readonly, nonatomic) id <SPTEventSender> eventSender; // @synthesize eventSender=_eventSender;
@property(readonly, nonatomic) __weak id <SPTUIPresentationService> presentationService; // @synthesize presentationService=_presentationService;
@property(readonly, nonatomic) id <SPTWebViewFactory> webViewFactory; // @synthesize webViewFactory=_webViewFactory;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (id)provideContextMenuViewControllerForPrimaryContextView:(id)arg1 secondaryContextMenuView:(id)arg2 adEntity:(id)arg3 logCenter:(id)arg4 title:(id)arg5;
- (id)provideMarqueeContextMenuForTitle:(id)arg1 actions:(id)arg2;
- (id)provideContextMenuActionWithIcon:(long long)arg1 attributedTitle:(id)arg2 actionBlock:(CDUnknownBlockType)arg3;
- (id)provideContextMenuActionWithIcon:(long long)arg1 title:(id)arg2 actionBlock:(CDUnknownBlockType)arg3;
- (id)initWithWebViewFactory:(id)arg1 presentationService:(id)arg2 theme:(id)arg3 eventSender:(id)arg4;

@end
