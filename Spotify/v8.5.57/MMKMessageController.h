//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMKConnectionDelegate-Protocol.h"
#import "MMKConnectionReadDelegate-Protocol.h"
#import "MMKInternalSessionDelegate-Protocol.h"

@class MMKAES256Cipher, MMKClientMessenger, MMKDiscoveryRequestStrategy, MMKMessageCoder, MMKSharedSecret, NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol MMKAuthorizationDelegate, MMKConnection, MMKLogging, MMKPlaybackDelegate, OS_dispatch_queue;

@interface MMKMessageController : NSObject <MMKInternalSessionDelegate, MMKConnectionDelegate, MMKConnectionReadDelegate>
{
    id <MMKAuthorizationDelegate> _authorizationDelegate;
    id <MMKPlaybackDelegate> _playbackDelegate;
    _Bool _encryptedSession;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    MMKSharedSecret *_sharedSecret;
    id <MMKConnection> _mostRecentConnection;
    NSMutableArray *_connections;
    MMKClientMessenger *_messenger;
    MMKMessageCoder *_messageCoder;
    MMKAES256Cipher *_cipher;
    MMKDiscoveryRequestStrategy *_discoveryRequestStrategy;
    NSMutableDictionary *_directiveExecutors;
    NSArray *_encryptionEnforcedMessages;
    NSString *_playerId;
    NSString *_customUrlScheme;
    id <MMKLogging> _logger;
}

@property(nonatomic) __weak id <MMKLogging> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) NSString *customUrlScheme; // @synthesize customUrlScheme=_customUrlScheme;
@property(retain, nonatomic) NSString *playerId; // @synthesize playerId=_playerId;
@property(retain, nonatomic) NSArray *encryptionEnforcedMessages; // @synthesize encryptionEnforcedMessages=_encryptionEnforcedMessages;
@property(retain, nonatomic) NSMutableDictionary *directiveExecutors; // @synthesize directiveExecutors=_directiveExecutors;
@property(retain, nonatomic) MMKDiscoveryRequestStrategy *discoveryRequestStrategy; // @synthesize discoveryRequestStrategy=_discoveryRequestStrategy;
@property(retain, nonatomic) MMKAES256Cipher *cipher; // @synthesize cipher=_cipher;
@property(retain, nonatomic) MMKMessageCoder *messageCoder; // @synthesize messageCoder=_messageCoder;
@property(retain, nonatomic) MMKClientMessenger *messenger; // @synthesize messenger=_messenger;
@property(retain, nonatomic) NSMutableArray *connections; // @synthesize connections=_connections;
@property(retain, nonatomic) id <MMKConnection> mostRecentConnection; // @synthesize mostRecentConnection=_mostRecentConnection;
@property(retain, nonatomic) MMKSharedSecret *sharedSecret; // @synthesize sharedSecret=_sharedSecret;
@property(nonatomic, getter=isEncryptedSession) _Bool encryptedSession; // @synthesize encryptedSession=_encryptedSession;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
- (void).cxx_destruct;
- (void)connectionDidClose:(id)arg1;
- (void)connectionDidOpen:(id)arg1;
- (void)connection:(id)arg1 didFailToOpenWithError:(id)arg2;
- (void)connection:(id)arg1 didFailToReadWithError:(id)arg2;
- (void)connection:(id)arg1 didReadData:(id)arg2;
@property(nonatomic) __weak id <MMKAuthorizationDelegate> authorizationDelegate;
@property(nonatomic) __weak id <MMKPlaybackDelegate> playbackDelegate;
- (void)encryptedSessionStarted;
- (void)invalidateSharedSecret;
- (void)sharedSecretCreated:(id)arg1;
- (void)closeConnections;
- (void)removeConnection:(id)arg1;
- (void)addConnection:(id)arg1;
- (void)sendMessage:(id)arg1 transactionId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleMessage:(id)arg1 connection:(id)arg2;
- (void)addStrategy:(id)arg1;
- (id)initWithPlayerId:(id)arg1 customUrlScheme:(id)arg2 sharedSecret:(id)arg3 logger:(id)arg4;

@end

