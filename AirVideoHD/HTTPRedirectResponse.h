//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTTPResponse-Protocol.h"

@class NSString;

@interface HTTPRedirectResponse : NSObject <HTTPResponse>
{
    NSString *redirectPath;
}

- (void).cxx_destruct;
- (void)dealloc;
- (long long)status;
- (id)httpHeaders;
- (_Bool)isDone;
- (id)readDataOfLength:(unsigned long long)arg1;
- (void)setOffset:(unsigned long long)arg1;
- (unsigned long long)offset;
- (unsigned long long)contentLength;
- (id)initWithPath:(id)arg1;

@end

