//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTTPResponse-Protocol.h"

@class NSData;

@interface HTTPDataResponse : NSObject <HTTPResponse>
{
    unsigned long long offset;
    NSData *data;
}

- (void).cxx_destruct;
- (_Bool)isDone;
- (id)readDataOfLength:(unsigned long long)arg1;
- (void)setOffset:(unsigned long long)arg1;
- (unsigned long long)offset;
- (unsigned long long)contentLength;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end
