//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTVideoURLAssetLoader.h"

@class NSString, SPTNetworkConnectivityController, SPTRequestAccounting;

@interface SPTVideoURLAssetLoaderImplementation : NSObject <SPTVideoURLAssetLoader>
{
    SPTNetworkConnectivityController *_networkConnectivityController;
    SPTRequestAccounting *_requestAccountant;
    NSString *_serviceIdentifier;
}

@property(readonly, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(readonly, nonatomic) SPTRequestAccounting *requestAccountant; // @synthesize requestAccountant=_requestAccountant;
@property(readonly, nonatomic) SPTNetworkConnectivityController *networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
- (void).cxx_destruct;
- (void)prepareAssetWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadAssetWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)sizeOfFileAtURL:(id)arg1;
- (void)moveFileAtLocation:(id)arg1 toLocation:(id)arg2;
- (_Bool)hasLocalAssetForURL:(id)arg1;
- (id)localURLForAssetURL:(id)arg1;
- (void)loadAssetWithURL:(id)arg1 onlyOnWifi:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithNetworkConnectivityController:(id)arg1 requestAccountant:(id)arg2 serviceIdentifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
