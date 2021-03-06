//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSStreamDelegate-Protocol.h"

@class GCKCircularByteBuffer, GCKClientCertificate, NSInputStream, NSOutputStream, NSString, NSTimer;
@protocol GCKCastSecureSocketDelegate;

@interface GCKCastSecureSocket : NSObject <NSStreamDelegate>
{
    unsigned long long _bufferSize;
    GCKCircularByteBuffer *_streamReadBuffer;
    GCKCircularByteBuffer *_streamWriteBuffer;
    CDUnknownBlockType _streamReadBlock;
    CDUnknownBlockType _streamWriteBlock;
    struct SSLContext *_SSLContext;
    GCKCircularByteBuffer *_sslReadBuffer;
    GCKCircularByteBuffer *_sslWriteBuffer;
    CDUnknownBlockType _sslReadBlock;
    CDUnknownBlockType _sslWriteBlock;
    _Bool _handshaking;
    _Bool _inSSLHandshakeCall;
    GCKCircularByteBuffer *_ioReadBuffer;
    GCKCircularByteBuffer *_ioWriteBuffer;
    unsigned long long _state;
    NSInputStream *_readStream;
    NSOutputStream *_writeStream;
    NSTimer *_connectTimer;
    NSTimer *_drainTimer;
    _Bool _readStreamScheduled;
    _Bool _writeStreamScheduled;
    _Bool _socketWritable;
    _Bool _socketReadable;
    _Bool _readingMessages;
    _Bool _shouldDisconnect;
    _Bool _readConnected;
    _Bool _writeConnected;
    _Bool _guestMode;
    NSString *_guestModeToken;
    _Bool _guestModeHandshaking;
    GCKClientCertificate *_clientCertificate;
    id <GCKCastSecureSocketDelegate> _delegate;
    unsigned long long _maxMessageLength;
}

@property(nonatomic) unsigned long long maxMessageLength; // @synthesize maxMessageLength=_maxMessageLength;
@property(nonatomic) __weak id <GCKCastSecureSocketDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)performIO;
- (void)notifyError:(long long)arg1 whileConnecting:(_Bool)arg2;
- (void)notifyDidReceiveMessage:(id)arg1;
- (void)notifyDidConnectWithPeerSecTrust:(struct __SecTrust *)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (int)writeSSLData:(const void *)arg1 length:(unsigned long long *)arg2;
- (int)readSSLData:(void *)arg1 length:(unsigned long long *)arg2;
- (void)startGuestMode;
- (void)rescheduleStreams;
- (void)connectTimerDidFire;
- (void)doTeardownWithErrorCode:(long long)arg1;
- (_Bool)readMessages;
- (void)finishSSL;
- (_Bool)continueHandshake;
- (_Bool)startSSL;
- (long long)sendMessage:(id)arg1;
- (void)handleDrainTimer:(id)arg1;
- (_Bool)disconnectWithError:(id)arg1;
- (_Bool)disconnect;
- (_Bool)connectToHost:(id)arg1 port:(unsigned int)arg2 withTimeout:(double)arg3;
- (_Bool)connectToHost:(id)arg1 port:(unsigned int)arg2 withToken:(id)arg3 withClientCert:(id)arg4 withTimeout:(double)arg5;
- (_Bool)connectToHost:(id)arg1 port:(unsigned int)arg2;
@property(readonly, nonatomic) unsigned long long writeBufferPendingBytes;
@property(readonly, nonatomic) unsigned long long writeBufferAvailableBytes;
@property(readonly, nonatomic) _Bool connectionPending;
@property(readonly, nonatomic) _Bool connected;
- (void)dealloc;
- (id)init;
- (id)initWithBufferSize:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

