//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTExternalLinkController-Protocol.h"
#import "SPTExternalLinkControllerCampaignDelegate-Protocol.h"
#import "SPTLinkDispatcher-Protocol.h"
#import "SPTURISchemeDispatcherMessagingDelegate-Protocol.h"

@class NSString, SPCore, SPTHTTPLinkHandler, SPTSpotifyLinkHandler, SPTURISchemeDispatcher, UIApplication;
@protocol SPTAlertInterface, SPTAlertToken, SPTExternalLinkControllerCampaignDelegate, SPTURISchemeRegistry;

@interface SPTLinkDispatcherImplementation : NSObject <SPTExternalLinkControllerCampaignDelegate, SPTURISchemeDispatcherMessagingDelegate, SPTExternalLinkController, SPTLinkDispatcher>
{
    _Bool _loggedIn;
    _Bool _suppressErrorMessages;
    id <SPTExternalLinkControllerCampaignDelegate> _campaignDelegate;
    SPCore *_core;
    UIApplication *_externalLinkHandler;
    id <SPTAlertInterface> _alertInterface;
    id <SPTAlertToken> _deferredURIAlertToken;
    SPTURISchemeDispatcher *_uriSchemeDispatcher;
    SPTSpotifyLinkHandler *_spotifyLinkHandler;
    SPTHTTPLinkHandler *_httpLinkHandler;
}

@property(nonatomic) _Bool suppressErrorMessages; // @synthesize suppressErrorMessages=_suppressErrorMessages;
@property(readonly, nonatomic) SPTHTTPLinkHandler *httpLinkHandler; // @synthesize httpLinkHandler=_httpLinkHandler;
@property(readonly, nonatomic) SPTSpotifyLinkHandler *spotifyLinkHandler; // @synthesize spotifyLinkHandler=_spotifyLinkHandler;
@property(readonly, nonatomic) SPTURISchemeDispatcher *uriSchemeDispatcher; // @synthesize uriSchemeDispatcher=_uriSchemeDispatcher;
@property(retain, nonatomic) id <SPTAlertToken> deferredURIAlertToken; // @synthesize deferredURIAlertToken=_deferredURIAlertToken;
@property(readonly, nonatomic) id <SPTAlertInterface> alertInterface; // @synthesize alertInterface=_alertInterface;
@property(retain, nonatomic) UIApplication *externalLinkHandler; // @synthesize externalLinkHandler=_externalLinkHandler;
@property(readonly, nonatomic) __weak SPCore *core; // @synthesize core=_core;
@property(nonatomic, getter=isLoggedIn) _Bool loggedIn; // @synthesize loggedIn=_loggedIn;
@property(nonatomic) __weak id <SPTExternalLinkControllerCampaignDelegate> campaignDelegate; // @synthesize campaignDelegate=_campaignDelegate;
- (void).cxx_destruct;
- (void)registerDefaultURISchemeHandlers;
- (id)buildHTTPLinkHandler;
- (id)handlerContextWithSourceApplication:(id)arg1 annotation:(id)arg2 useCurrentStack:(_Bool)arg3 popStackIfPossible:(_Bool)arg4 suppressAnimations:(_Bool)arg5 interactionID:(id)arg6;
- (long long)externalLinkControllerHandleCampaignURIIfRelevant:(id)arg1;
- (_Bool)canHandleURIForExternalLinkController:(id)arg1;
- (id)decorateErrorMessage:(id)arg1 withURI:(id)arg2;
- (id)alertWithTitle:(id)arg1 message:(id)arg2 URI:(id)arg3;
- (void)URISchemeDispatcher:(id)arg1 showWillOpenOnLoginForURI:(id)arg2;
- (void)URISchemeDispatcher:(id)arg1 showInvalidSpotifyLinkMessageForURI:(id)arg2;
- (void)URISchemeDispatcher:(id)arg1 showInvalidLinkMessageForURI:(id)arg2;
- (void)navigateToURI:(id)arg1 options:(long long)arg2 interactionID:(id)arg3;
- (void)navigateToURI:(id)arg1 options:(long long)arg2;
- (void)navigateToURI:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 options:(long long)arg4 interactionID:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)navigateToURI:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (_Bool)navigateToInternalURI:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 options:(long long)arg4 interactionID:(id)arg5;
- (_Bool)canOpenURI:(id)arg1 allowExternalApps:(_Bool)arg2;
@property(readonly, nonatomic) id <SPTURISchemeRegistry> schemeRegistry;
- (id)initWithCore:(id)arg1 alertInterface:(id)arg2 URISubtypeRegistry:(id)arg3 externalLinkHandler:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

