//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSStreamDelegate-Protocol.h"
#import "SPTAppProtocolConnection-Protocol.h"

@class NSInputStream, NSMutableData, NSOutputStream, NSString;
@protocol SPTAppProtocolConnectionDelegate, SPTAppProtocolConnectionOutput;

@interface SPTAppProtocolStreamConnection : NSObject <NSStreamDelegate, SPTAppProtocolConnection>
{
    _Bool _open;
    unsigned int _curBytesToGo;
    id <SPTAppProtocolConnectionOutput> _messageReceiver;
    id <SPTAppProtocolConnectionDelegate> _connectionDelegate;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    unsigned long long _readPhase;
    NSMutableData *_readBuffer;
    NSMutableData *_writeBuffer;
}

@property(retain, nonatomic) NSMutableData *writeBuffer; // @synthesize writeBuffer=_writeBuffer;
@property(retain, nonatomic) NSMutableData *readBuffer; // @synthesize readBuffer=_readBuffer;
@property(nonatomic) unsigned int curBytesToGo; // @synthesize curBytesToGo=_curBytesToGo;
@property(nonatomic) unsigned long long readPhase; // @synthesize readPhase=_readPhase;
@property(readonly, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(readonly, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(nonatomic) __weak id <SPTAppProtocolConnectionDelegate> connectionDelegate; // @synthesize connectionDelegate=_connectionDelegate;
@property(nonatomic) __weak id <SPTAppProtocolConnectionOutput> messageReceiver; // @synthesize messageReceiver=_messageReceiver;
@property(readonly, getter=isOpen) _Bool open; // @synthesize open=_open;
- (void).cxx_destruct;
- (void)addMessageToOutputBuffer:(id)arg1;
- (void)writeToOutputStream;
- (void)readFromInputStream;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)sendMessage:(id)arg1 userInfo:(id)arg2;
- (void)close;
- (void)closeByRequest:(_Bool)arg1;
- (void)open;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

