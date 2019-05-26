//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPSession, SPTAppProtocolConnectionHandler, SPTNetworkConnectivityController;
@protocol SPTExternalIntegrationPlatform, SPTGaiaConnectAPI, SPTProductState;

@interface SPTAppProtocolMainHandler : NSObject
{
    SPTAppProtocolConnectionHandler *_connectionHandler;
    id <SPTGaiaConnectAPI> _connectManager;
    SPSession *_currentSession;
    id <SPTProductState> _productState;
    id <SPTExternalIntegrationPlatform> _externalIntegrationPlatform;
    SPTNetworkConnectivityController *_connectivityController;
}

@property(readonly, nonatomic) SPTNetworkConnectivityController *connectivityController; // @synthesize connectivityController=_connectivityController;
@property(nonatomic) __weak id <SPTExternalIntegrationPlatform> externalIntegrationPlatform; // @synthesize externalIntegrationPlatform=_externalIntegrationPlatform;
@property(nonatomic) __weak id <SPTProductState> productState; // @synthesize productState=_productState;
@property(nonatomic) __weak SPSession *currentSession; // @synthesize currentSession=_currentSession;
@property(retain, nonatomic) id <SPTGaiaConnectAPI> connectManager; // @synthesize connectManager=_connectManager;
@property(retain, nonatomic) SPTAppProtocolConnectionHandler *connectionHandler; // @synthesize connectionHandler=_connectionHandler;
- (void).cxx_destruct;
- (void)handleUnsubscribeMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleSubscribeMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (id)initWithExternalIntegrationPlatform:(id)arg1 connectionHandler:(id)arg2 networkConnectivityController:(id)arg3 currentSession:(id)arg4 productState:(id)arg5 connectManager:(id)arg6;

@end

