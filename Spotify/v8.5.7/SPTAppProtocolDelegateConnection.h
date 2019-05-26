//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAppProtocolConnection-Protocol.h"
#import "SPTAppProtocolDelegateConnectionSending-Protocol.h"

@class NSString;
@protocol SPTAppProtocolConnectionDelegate, SPTAppProtocolConnectionOutput, SPTAppProtocolDelegateConnectionDelegate;

@interface SPTAppProtocolDelegateConnection : NSObject <SPTAppProtocolConnection, SPTAppProtocolDelegateConnectionSending>
{
    _Bool _open;
    id <SPTAppProtocolConnectionOutput> _messageReceiver;
    id <SPTAppProtocolConnectionDelegate> _connectionDelegate;
    id <SPTAppProtocolDelegateConnectionDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <SPTAppProtocolDelegateConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SPTAppProtocolConnectionDelegate> connectionDelegate; // @synthesize connectionDelegate=_connectionDelegate;
@property(nonatomic) __weak id <SPTAppProtocolConnectionOutput> messageReceiver; // @synthesize messageReceiver=_messageReceiver;
@property(readonly, getter=isOpen) _Bool open; // @synthesize open=_open;
- (void).cxx_destruct;
- (void)sendMessage:(id)arg1 userInfo:(id)arg2;
- (void)sendMessageToAppProtocol:(id)arg1;
- (void)close;
- (void)open;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
