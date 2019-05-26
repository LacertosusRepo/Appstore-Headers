//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTInAppMessageActionFactory, SPTInAppMessageNoteMessage, SPTInAppMessageScriptMessageHandler, SPTInAppMessageServiceLogger, SPTInAppMessageTrigger, WKWebView, WKWebViewConfiguration;
@protocol SPTInAppMessageNoteMessageWebViewContentDelegate;

@interface SPTInAppMessageNoteMessageViewModel : NSObject
{
    id <SPTInAppMessageNoteMessageWebViewContentDelegate> _delegate;
    SPTInAppMessageNoteMessage *_noteMessage;
    WKWebView *_webview;
    double _noteHeight;
    SPTInAppMessageTrigger *_trigger;
    double _presentationStartTime;
    SPTInAppMessageScriptMessageHandler *_messageHandler;
    SPTInAppMessageActionFactory *_actionFactory;
    SPTInAppMessageServiceLogger *_serviceLogger;
    WKWebViewConfiguration *_webViewConfiguration;
}

@property(retain, nonatomic) WKWebViewConfiguration *webViewConfiguration; // @synthesize webViewConfiguration=_webViewConfiguration;
@property(retain, nonatomic) SPTInAppMessageServiceLogger *serviceLogger; // @synthesize serviceLogger=_serviceLogger;
@property(retain, nonatomic) SPTInAppMessageActionFactory *actionFactory; // @synthesize actionFactory=_actionFactory;
@property(retain, nonatomic) SPTInAppMessageScriptMessageHandler *messageHandler; // @synthesize messageHandler=_messageHandler;
@property(nonatomic) double presentationStartTime; // @synthesize presentationStartTime=_presentationStartTime;
@property(retain, nonatomic) SPTInAppMessageTrigger *trigger; // @synthesize trigger=_trigger;
@property(nonatomic) double noteHeight; // @synthesize noteHeight=_noteHeight;
@property(readonly, nonatomic) WKWebView *webview; // @synthesize webview=_webview;
@property(readonly, nonatomic) SPTInAppMessageNoteMessage *noteMessage; // @synthesize noteMessage=_noteMessage;
@property(nonatomic) __weak id <SPTInAppMessageNoteMessageWebViewContentDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)logTriggerMessagePresentationPerformace;
- (void)didReceiveWebviewEvent:(id)arg1;
- (void)didReceieveActionNotification:(id)arg1;
- (void)didReceiveNotification:(id)arg1;
- (void)setupWebview;
- (void)dealloc;
- (id)initWithNoteMessage:(id)arg1 trigger:(id)arg2 actionFactory:(id)arg3 serviceLogger:(id)arg4;

@end

