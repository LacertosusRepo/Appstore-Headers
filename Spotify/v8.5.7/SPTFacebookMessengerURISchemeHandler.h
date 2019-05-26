//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDKMessengerURLHandlerDelegate-Protocol.h"

@class FBSDKMessengerURLHandler, NSString;
@protocol SPTLinkDispatcher;

@interface SPTFacebookMessengerURISchemeHandler : NSObject <FBSDKMessengerURLHandlerDelegate>
{
    id <SPTLinkDispatcher> _linkDispatcher;
    FBSDKMessengerURLHandler *_messengerURLHandler;
}

@property(readonly, nonatomic) FBSDKMessengerURLHandler *messengerURLHandler; // @synthesize messengerURLHandler=_messengerURLHandler;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
- (void).cxx_destruct;
- (void)showFacebookMessengerShareChooser;
- (void)messengerURLHandler:(id)arg1 didHandleOpenFromComposerWithContext:(id)arg2;
- (void)messengerURLHandler:(id)arg1 didHandleReplyWithContext:(id)arg2;
- (_Bool)handleMessengerURL:(id)arg1 fromApplication:(id)arg2;
- (_Bool)handleFacebookURL:(id)arg1 fromApplication:(id)arg2 annotation:(id)arg3;
- (void)dealloc;
- (id)initWithURISchemeRegistry:(id)arg1 linkDispatcher:(id)arg2 messengerURLHandler:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
