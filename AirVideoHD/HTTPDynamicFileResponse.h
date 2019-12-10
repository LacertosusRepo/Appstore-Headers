//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HTTPAsyncFileResponse.h"

@class NSData, NSDictionary;

@interface HTTPDynamicFileResponse : HTTPAsyncFileResponse
{
    NSData *separator;
    NSDictionary *replacementDict;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)processReadBuffer;
- (_Bool)isDone;
- (void)setOffset:(unsigned long long)arg1;
- (unsigned long long)contentLength;
- (_Bool)isChunked;
- (id)initWithFilePath:(id)arg1 forConnection:(id)arg2 separator:(id)arg3 replacementDictionary:(id)arg4;

@end

