//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SPTInAppMessageActionFactory, SPTInAppMessageCardMessage, SPTInAppMessageCardMessageViewController, SPTInAppMessageFeedbackPresentationController, SPTInAppMessageScriptMessageHandler, SPTInAppMessageServiceLogger, SPTInAppMessageTrigger, WKWebView, WKWebViewConfiguration;
@protocol SPTInAppMessageCardMessageWebViewContentDelegate, SPTPushMessagingPermissionRequestor;

@interface SPTInAppMessageCardMessageViewModel : NSObject
{
    id <SPTInAppMessageCardMessageWebViewContentDelegate> _delegate;
    WKWebView *_webview;
    SPTInAppMessageCardMessage *_cardMessage;
    double _presentationStartTime;
    SPTInAppMessageTrigger *_trigger;
    SPTInAppMessageCardMessageViewController *_cardMessageViewController;
    SPTInAppMessageScriptMessageHandler *_messageHandler;
    WKWebViewConfiguration *_webViewConfiguration;
    SPTInAppMessageActionFactory *_actionFactory;
    SPTInAppMessageServiceLogger *_serviceLogger;
    SPTInAppMessageFeedbackPresentationController *_feedbackPresentationController;
    id <SPTPushMessagingPermissionRequestor> _pushPermissionRequestor;
}

@property(readonly, nonatomic) id <SPTPushMessagingPermissionRequestor> pushPermissionRequestor; // @synthesize pushPermissionRequestor=_pushPermissionRequestor;
@property(retain, nonatomic) SPTInAppMessageFeedbackPresentationController *feedbackPresentationController; // @synthesize feedbackPresentationController=_feedbackPresentationController;
@property(retain, nonatomic) SPTInAppMessageServiceLogger *serviceLogger; // @synthesize serviceLogger=_serviceLogger;
@property(retain, nonatomic) SPTInAppMessageActionFactory *actionFactory; // @synthesize actionFactory=_actionFactory;
@property(retain, nonatomic) WKWebViewConfiguration *webViewConfiguration; // @synthesize webViewConfiguration=_webViewConfiguration;
@property(retain, nonatomic) SPTInAppMessageScriptMessageHandler *messageHandler; // @synthesize messageHandler=_messageHandler;
@property(nonatomic) __weak SPTInAppMessageCardMessageViewController *cardMessageViewController; // @synthesize cardMessageViewController=_cardMessageViewController;
@property(retain, nonatomic) SPTInAppMessageTrigger *trigger; // @synthesize trigger=_trigger;
@property(nonatomic) double presentationStartTime; // @synthesize presentationStartTime=_presentationStartTime;
@property(readonly, nonatomic) SPTInAppMessageCardMessage *cardMessage; // @synthesize cardMessage=_cardMessage;
@property(retain, nonatomic) WKWebView *webview; // @synthesize webview=_webview;
@property(nonatomic) __weak id <SPTInAppMessageCardMessageWebViewContentDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)logDismissEvent;
- (id)messageFormat;
- (void)logCardMessagePresentationPerformace;
- (void)loadHTMLContent;
- (void)didReceiveWebviewEvent:(id)arg1;
- (void)didReceieveActionNotification:(id)arg1;
- (void)openSystemSettingsPage;
- (void)didReceiveContextMenuEvent:(id)arg1;
- (void)didReceiveNotification:(id)arg1;
- (_Bool)isFullScreen;
@property(readonly, copy, nonatomic) NSString *localizedCloseTitle;
@property(readonly, copy, nonatomic) NSString *localizedHeading;
- (void)setupWebview;
- (void)dealloc;
- (id)initWithCardMessage:(id)arg1 actionFactory:(id)arg2 serviceLogger:(id)arg3 feedbackPresentationController:(id)arg4 pushPermissionRequestor:(id)arg5;

@end

