//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAppProtocolConnectionDelegate.h"
#import "SPTAppProtocolConnectionOutput.h"
#import "SPTAppProtocolSessionHandler.h"
#import "SPTAppProtocolSubscriptionDelegate.h"

@class NSDictionary, NSMutableDictionary, NSString, SPTAccessory, SPTAppProtocolCallMessageHandler, SPTAppProtocolMainHandler, SPTAppProtocolSessionMessageHandler;

@interface SPTAppProtocolConnectionHandler : NSObject <SPTAppProtocolConnectionOutput, SPTAppProtocolConnectionDelegate, SPTAppProtocolSubscriptionDelegate, SPTAppProtocolSessionHandler>
{
    _Bool _requiresAuthentication;
    _Bool _hasAuthenticated;
    _Bool _hasValidSession;
    int _publicationId;
    float _imageHeight;
    float _imageWidth;
    float _thumbnailImageHeight;
    float _thumbnailImageWidth;
    unsigned long long _sessionID;
    SPTAppProtocolMainHandler *_mainMessageHandler;
    SPTAppProtocolSessionMessageHandler *_sessionMessageHandler;
    SPTAppProtocolCallMessageHandler *_callMessageHandler;
    NSMutableDictionary *_subscriptionStorage;
    NSMutableDictionary *_callStorage;
    NSDictionary *_lastHelloInfo;
    NSString *_lastClientID;
    unsigned long long _imageType;
    id <SPTGaiaDeviceStateManager> _gaiaDeviceStateManger;
    id <SPTSessionService> _sessionService;
    id <SPTAppProtocolConnection> _connection;
    id <SPTAppProtocolConnectionHandlerDelegate> _delegate;
    id <SPTExternalIntegrationPlatform> _externalIntegrationPlatform;
    id <SPTAccessoryStateManager> _accessoryManager;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    SPTAccessory *_currentAccesory;
    id <SPTExternalIntegrationDebugLog> _debugLog;
}

@property(retain, nonatomic) id <SPTExternalIntegrationDebugLog> debugLog; // @synthesize debugLog=_debugLog;
@property(retain, nonatomic) SPTAccessory *currentAccesory; // @synthesize currentAccesory=_currentAccesory;
@property(nonatomic) _Bool hasValidSession; // @synthesize hasValidSession=_hasValidSession;
@property(readonly, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(retain, nonatomic) id <SPTAccessoryStateManager> accessoryManager; // @synthesize accessoryManager=_accessoryManager;
@property(nonatomic) __weak id <SPTExternalIntegrationPlatform> externalIntegrationPlatform; // @synthesize externalIntegrationPlatform=_externalIntegrationPlatform;
@property(nonatomic) __weak id <SPTAppProtocolConnectionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <SPTAppProtocolConnection> connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(retain, nonatomic) id <SPTGaiaDeviceStateManager> gaiaDeviceStateManger; // @synthesize gaiaDeviceStateManger=_gaiaDeviceStateManger;
@property(nonatomic) unsigned long long imageType; // @synthesize imageType=_imageType;
@property(nonatomic) float thumbnailImageWidth; // @synthesize thumbnailImageWidth=_thumbnailImageWidth;
@property(nonatomic) float thumbnailImageHeight; // @synthesize thumbnailImageHeight=_thumbnailImageHeight;
@property(nonatomic) float imageWidth; // @synthesize imageWidth=_imageWidth;
@property(nonatomic) float imageHeight; // @synthesize imageHeight=_imageHeight;
@property int publicationId; // @synthesize publicationId=_publicationId;
@property(copy, nonatomic) NSString *lastClientID; // @synthesize lastClientID=_lastClientID;
@property(retain, nonatomic) NSDictionary *lastHelloInfo; // @synthesize lastHelloInfo=_lastHelloInfo;
@property(retain, nonatomic) NSMutableDictionary *callStorage; // @synthesize callStorage=_callStorage;
@property(retain, nonatomic) NSMutableDictionary *subscriptionStorage; // @synthesize subscriptionStorage=_subscriptionStorage;
@property(nonatomic) _Bool hasAuthenticated; // @synthesize hasAuthenticated=_hasAuthenticated;
@property(readonly, nonatomic) _Bool requiresAuthentication; // @synthesize requiresAuthentication=_requiresAuthentication;
@property(readonly, nonatomic) SPTAppProtocolCallMessageHandler *callMessageHandler; // @synthesize callMessageHandler=_callMessageHandler;
@property(readonly, nonatomic) SPTAppProtocolSessionMessageHandler *sessionMessageHandler; // @synthesize sessionMessageHandler=_sessionMessageHandler;
@property(readonly, nonatomic) SPTAppProtocolMainHandler *mainMessageHandler; // @synthesize mainMessageHandler=_mainMessageHandler;
@property(nonatomic) unsigned long long sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (id)transportTypeForHelloMessage:(id)arg1;
- (void)logSessionEnd;
- (void)logSessionStart;
- (void)endSession;
- (void)startSession;
- (void)disconnectGracefully:(_Bool)arg1;
- (void)setupLockScreen:(id)arg1;
- (void)subscription:(id)arg1 didTriggerWithPayload:(id)arg2;
- (void)sendMessage:(id)arg1 userInfo:(id)arg2;
- (void)connection:(id)arg1 didCloseByRequest:(_Bool)arg2;
- (void)connection:(id)arg1 didReceiveMessage:(id)arg2 userInfo:(id)arg3;
- (int)nextPublicationID;
- (id)initWithConnection:(id)arg1 accessoryStateManager:(id)arg2 networkConnectivityController:(id)arg3 externalIntegrationPlatform:(id)arg4 authenticators:(id)arg5 requiresAuthentication:(_Bool)arg6 imageLoaderFactory:(id)arg7 gaiaDeviceStateManager:(id)arg8 sessionService:(id)arg9 debugLog:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

