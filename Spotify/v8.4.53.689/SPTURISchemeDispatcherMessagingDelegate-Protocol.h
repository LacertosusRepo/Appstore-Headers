//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, SPTURISchemeDispatcher;

@protocol SPTURISchemeDispatcherMessagingDelegate <NSObject>
- (void)URISchemeDispatcher:(SPTURISchemeDispatcher *)arg1 showWillOpenOnLoginForURI:(NSURL *)arg2;
- (void)URISchemeDispatcher:(SPTURISchemeDispatcher *)arg1 showInvalidSpotifyLinkMessageForURI:(NSURL *)arg2;
- (void)URISchemeDispatcher:(SPTURISchemeDispatcher *)arg1 showInvalidLinkMessageForURI:(NSURL *)arg2;
@end

