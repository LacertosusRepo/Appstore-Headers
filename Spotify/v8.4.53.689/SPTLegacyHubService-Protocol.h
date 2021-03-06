//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, SPTHubRegistry;

@protocol SPTLegacyHubService <NSObject>
@property(readonly, nonatomic) id <SPTHubRegistrationToken> radioHubToken;
@property(readonly, nonatomic) id <SPTHubRegistrationToken> momentsHubRegistrationToken;
@property(readonly, nonatomic) id <SPTHubRegistrationToken> musicHubRegistrationToken;
@property(readonly, nonatomic) id <SPTHubRegistrationToken> browseHubRegistrationToken;
- (id <SPTHubExternalDataLoaderFactory>)provideExternalDataLoaderFactoryForHubWithRegistrationToken:(id <SPTHubRegistrationToken>)arg1;
- (SPTHubRegistry *)provideHubRegistry;
- (id <SPTHubRegistrationToken>)registerDefaultHubWithIdentifier:(unsigned long long)arg1 localContentProvider:(id <SPTHubLocalContentProvider>)arg2 viewHandler:(id <SPTHubViewHandler>)arg3;
- (id <SPTHubRegistrationToken>)registerHubWithConfiguration:(id <SPTHubConfiguration>)arg1;
- (id <SPTHubConfiguration>)createConfigurationForHubWithTitle:(NSString *)arg1 rootViewURI:(NSURL *)arg2 remoteContentURLResolver:(id <SPTHubRemoteContentURLResolver>)arg3;
@end

