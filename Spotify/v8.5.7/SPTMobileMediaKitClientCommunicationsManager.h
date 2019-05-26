//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMKAuthorizationDelegate-Protocol.h"
#import "SPTDataLoaderDelegate-Protocol.h"
#import "SPTExternalIntegrationPlaybackControllerObserver-Protocol.h"
#import "SPTGaiaConnectObserver-Protocol.h"

@class KeychainItemWrapper, MMKClientManager, NSString, SPTAccessory, SPTDataLoader, SPTMobileMediaKitAudioPlaybackManager;
@protocol MMKLogging, SPTAccessoryStateManager, SPTGaiaConnectAPI;

@interface SPTMobileMediaKitClientCommunicationsManager : NSObject <SPTExternalIntegrationPlaybackControllerObserver, MMKAuthorizationDelegate, SPTDataLoaderDelegate, SPTGaiaConnectObserver>
{
    MMKClientManager *_clientManager;
    SPTMobileMediaKitAudioPlaybackManager *_playbackManager;
    id <SPTAccessoryStateManager> _accessoryManager;
    id <SPTGaiaConnectAPI> _connectManager;
    NSString *_token;
    SPTAccessory *_accessory;
    SPTDataLoader *_dataLoader;
    id <MMKLogging> _logger;
    KeychainItemWrapper *_keychainItem;
}

@property(retain, nonatomic) KeychainItemWrapper *keychainItem; // @synthesize keychainItem=_keychainItem;
@property(retain, nonatomic) id <MMKLogging> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) SPTAccessory *accessory; // @synthesize accessory=_accessory;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(readonly, nonatomic) id <SPTGaiaConnectAPI> connectManager; // @synthesize connectManager=_connectManager;
@property(readonly, nonatomic) id <SPTAccessoryStateManager> accessoryManager; // @synthesize accessoryManager=_accessoryManager;
@property(readonly, nonatomic) SPTMobileMediaKitAudioPlaybackManager *playbackManager; // @synthesize playbackManager=_playbackManager;
@property(readonly, nonatomic) MMKClientManager *clientManager; // @synthesize clientManager=_clientManager;
- (void).cxx_destruct;
- (id)fetchAndResetLastTransactionId;
- (void)sendPlayerEvent:(id)arg1 transactionId:(id)arg2;
- (_Bool)isPlaybackControlledOnExternalDevice;
- (void)connectActiveDeviceDidChange:(id)arg1;
- (void)didDisconnect;
- (void)didConnect;
- (void)authorizationCompleteReceived:(id)arg1 sharedSecret:(id)arg2;
- (void)authorizationResponseReceived:(id)arg1;
- (void)authorizationSuccessReceived:(id)arg1;
- (void)authorizationRequestReceived:(id)arg1;
- (void)externalIntegrationPlaybackController:(id)arg1 didReceiveNewPlayerState:(id)arg2 oldPlayerState:(id)arg3;
- (id)dataFromResponseJSON:(id)arg1;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (id)urlForAPIName:(id)arg1;
- (void)performDataLoaderRequestForURL:(id)arg1 withParameters:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
- (void)invalidateSharedSecret;
- (void)stop;
- (void)start;
- (id)initWithPlaybackManager:(id)arg1 playbackController:(id)arg2 connectManager:(id)arg3 clientManager:(id)arg4 accessoryManager:(id)arg5 dataLoader:(id)arg6 logger:(id)arg7 keychainItem:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

