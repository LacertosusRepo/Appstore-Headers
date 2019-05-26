//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GCKBroadcastKeyManagerDelegate-Protocol.h"
#import "GCKRuntimeConfigurationValueObserver-Protocol.h"

@class GCKAnalyticsEventLogger, GCKBroadcastKeyManager, GCKMessageEncryptor, GCKNMulticastSocket, GCKNNetworkAddress, GCKNNetworkInterface, GCKNSocketAddress, GCKRuntimeConfiguration, MessageQueue, NSString;
@protocol GCKBroadcastControllerDelegate;

@interface GCKBroadcastController : NSObject <GCKBroadcastKeyManagerDelegate, GCKRuntimeConfigurationValueObserver>
{
    GCKBroadcastKeyManager *_broadcastKeyManager;
    GCKAnalyticsEventLogger *_analyticsEventLogger;
    GCKRuntimeConfiguration *_runtimeConfiguration;
    GCKMessageEncryptor *_messageEncryptor;
    GCKNMulticastSocket *_socket;
    MessageQueue *_messageQueue;
    long long _messageQueueSize;
    GCKNNetworkInterface *_networkInterface;
    GCKNNetworkAddress *_broadcastAddress;
    GCKNSocketAddress *_broadcastSocketAddress;
    id <GCKBroadcastControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <GCKBroadcastControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)notifyDidBroadcastMessage;
- (void)runtimeConfiguration:(id)arg1 value:(id)arg2 didChangeFrom:(id)arg3 to:(id)arg4;
- (void)broadcastKeyManager:(id)arg1 didReceiveWrappedSenderKey:(id)arg2 forSenderKey:(id)arg3;
- (void)destroyMulticastSocket;
- (id)createMulticastSocket;
- (id)constructApplicationMessageWithData:(id)arg1 toAppIDs:(id)arg2 broadcastNamespace:(id)arg3;
- (void)sendNextBroadcastMessage;
- (void)broadcastData:(id)arg1 toAppIDs:(id)arg2 broadcastNamespace:(id)arg3;
- (void)dealloc;
- (id)initWithBroadcastKeyManager:(id)arg1 analyticsEventLogger:(id)arg2 runtimeConfiguration:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
