//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAppProtocolConnection.h"

@class NSString;

@interface SPTAppProtocolForwardingConnection : NSObject <SPTAppProtocolConnection>
{
    _Bool _open;
    id <SPTAppProtocolConnectionDelegate> _connectionDelegate;
    id <SPTAppProtocolConnectionOutput> _messageReceiver;
    CDUnknownBlockType _receiveMessageCallback;
}

@property(copy, nonatomic) CDUnknownBlockType receiveMessageCallback; // @synthesize receiveMessageCallback=_receiveMessageCallback;
@property(nonatomic) __weak id <SPTAppProtocolConnectionOutput> messageReceiver; // @synthesize messageReceiver=_messageReceiver;
@property(nonatomic) __weak id <SPTAppProtocolConnectionDelegate> connectionDelegate; // @synthesize connectionDelegate=_connectionDelegate;
@property(readonly, getter=isOpen) _Bool open; // @synthesize open=_open;
- (void).cxx_destruct;
- (void)sendMessage:(id)arg1 userInfo:(id)arg2;
- (void)forwardMessage:(id)arg1;
- (void)close;
- (void)open;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

