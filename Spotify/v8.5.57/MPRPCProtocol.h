//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MPRPCProtocol : NSObject
{
}

- (id)decodeMessage:(id)arg1 framed:(_Bool)arg2 error:(id *)arg3;
- (id)encodeResponseWithResult:(id)arg1 error:(id)arg2 messageId:(long long)arg3 options:(long long)arg4 framed:(_Bool)arg5 encodeError:(id *)arg6;
- (id)encodeRequestWithMethod:(id)arg1 params:(id)arg2 messageId:(long long)arg3 options:(long long)arg4 framed:(_Bool)arg5 error:(id *)arg6;
- (id)_frameData:(id)arg1;

@end
