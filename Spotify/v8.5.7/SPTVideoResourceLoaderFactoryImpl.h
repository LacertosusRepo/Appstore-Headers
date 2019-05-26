//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVideoResourceLoaderFactory-Protocol.h"

@class NSString, SPTVideoCDNSelector, SPTVideoFairplayService, SPTVideoManifestService, SPTVideoResourceRequestFactory;
@protocol SPTVideoPlayerConfiguration;

@interface SPTVideoResourceLoaderFactoryImpl : NSObject <SPTVideoResourceLoaderFactory>
{
    id <SPTVideoPlayerConfiguration> _playerConfiguration;
    SPTVideoFairplayService *_fairplayService;
    SPTVideoCDNSelector *_cdnSelector;
    SPTVideoManifestService *_manifestService;
    SPTVideoResourceRequestFactory *_resourceRequestFactory;
}

@property(retain, nonatomic) SPTVideoResourceRequestFactory *resourceRequestFactory; // @synthesize resourceRequestFactory=_resourceRequestFactory;
@property(retain, nonatomic) SPTVideoManifestService *manifestService; // @synthesize manifestService=_manifestService;
@property(retain, nonatomic) SPTVideoCDNSelector *cdnSelector; // @synthesize cdnSelector=_cdnSelector;
@property(retain, nonatomic) SPTVideoFairplayService *fairplayService; // @synthesize fairplayService=_fairplayService;
@property(retain, nonatomic) id <SPTVideoPlayerConfiguration> playerConfiguration; // @synthesize playerConfiguration=_playerConfiguration;
- (void).cxx_destruct;
- (id)createResourceLoaderWithIdentity:(id)arg1 notifierProxy:(id)arg2;
- (id)initWithPlayerConfiguration:(id)arg1 fairplayService:(id)arg2 cdnSelector:(id)arg3 manifestService:(id)arg4 resourceRequestFactory:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

