//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GCKNSocket.h"

@class GCKBCircularByteBuffer;
@protocol GCKNTCPSocketDelegate;

@interface GCKNTCPSocket : GCKNSocket
{
    GCKBCircularByteBuffer *_readBuffer;
    GCKBCircularByteBuffer *_writeBuffer;
    CDUnknownBlockType _socketReadBlock;
    CDUnknownBlockType _socketWriteBlock;
    unsigned long long _bufferSize;
    _Bool _writable;
    _Bool _readable;
    _Bool _notifiedDidConnect;
    int _lastError;
    id <GCKNTCPSocketDelegate> _delegate;
    unsigned long long _minimumSpaceAvailableToWrite;
}

@property(nonatomic) unsigned long long minimumSpaceAvailableToWrite; // @synthesize minimumSpaceAvailableToWrite=_minimumSpaceAvailableToWrite;
@property(nonatomic) __weak id <GCKNTCPSocketDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)notifyDidBecomeWritable;
- (void)notifyDidCloseWithError:(id)arg1;
- (void)notifyDidConnect;
- (void)notifyDidFailToConnectWithError:(id)arg1;
- (long long)writeToSocket;
- (void)close;
- (void)closeWithError:(id)arg1;
- (void)onDisconnectedWithError:(id)arg1;
- (void)onReadable;
- (void)onWritable;
- (void)onReady;
- (void)onConnectionFailedWithError:(id)arg1;
- (void)onConnected;
@property(readonly, nonatomic) _Bool hasUnreadData;
@property(readonly, nonatomic) _Bool hasUnwrittenData;
@property(readonly, nonatomic) unsigned long long spaceAvailableToWrite;
@property(readonly, nonatomic) unsigned long long bytesAvailableToRead;
- (long long)receiveBytes:(char *)arg1 length:(unsigned long long)arg2 partialOK:(_Bool)arg3;
- (long long)receiveData:(id)arg1 partialOK:(_Bool)arg2;
- (long long)receiveData:(id)arg1;
- (long long)sendBytes:(const char *)arg1 length:(unsigned long long)arg2 partialOK:(_Bool)arg3;
- (long long)sendData:(id)arg1 partialOK:(_Bool)arg2;
- (long long)sendData:(id)arg1;
@property(readonly, nonatomic) unsigned long long bufferSize;
- (void)dealloc;
- (void)privateInitWithBufferSize:(unsigned long long)arg1;
- (id)init;
- (id)initWithNativeHandle:(int)arg1 bufferSize:(unsigned long long)arg2;
- (id)initWithAddressType:(long long)arg1;
- (id)initWithAddressType:(long long)arg1 bufferSize:(unsigned long long)arg2;
- (id)initWithAddressType:(long long)arg1 localPort:(unsigned short)arg2 bufferSize:(unsigned long long)arg3;

@end

