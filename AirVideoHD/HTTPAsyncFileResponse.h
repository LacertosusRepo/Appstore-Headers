//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTTPResponse-Protocol.h"

@class HTTPConnection, NSData, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HTTPAsyncFileResponse : NSObject <HTTPResponse>
{
    HTTPConnection *connection;
    NSString *filePath;
    unsigned long long fileLength;
    unsigned long long fileOffset;
    unsigned long long readOffset;
    _Bool aborted;
    NSData *data;
    int fileFD;
    void *readBuffer;
    unsigned long long readBufferSize;
    unsigned long long readBufferOffset;
    unsigned long long readRequestLength;
    NSObject<OS_dispatch_queue> *readQueue;
    NSObject<OS_dispatch_source> *readSource;
    _Bool readSourceSuspended;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)connectionDidClose;
- (_Bool)isAsynchronous;
- (id)filePath;
- (_Bool)isDone;
- (id)readDataOfLength:(unsigned long long)arg1;
- (void)setOffset:(unsigned long long)arg1;
- (unsigned long long)offset;
- (unsigned long long)contentLength;
- (_Bool)openFileIfNeeded;
- (_Bool)openFileAndSetupReadSource;
- (void)cancelReadSource;
- (void)resumeReadSource;
- (void)pauseReadSource;
- (void)processReadBuffer;
- (void)abort;
- (id)initWithFilePath:(id)arg1 forConnection:(id)arg2;

@end

