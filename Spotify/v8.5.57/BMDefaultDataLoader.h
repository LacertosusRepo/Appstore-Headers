//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BMDataLoader-Protocol.h"

@class NSString;

@interface BMDefaultDataLoader : NSObject <BMDataLoader>
{
}

- (id)mapMethod:(unsigned long long)arg1;
- (void)requestWithURL:(id)arg1 method:(unsigned long long)arg2 headers:(id)arg3 body:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)requestWithURL:(id)arg1 method:(unsigned long long)arg2 headers:(id)arg3 body:(id)arg4 responseHandler:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

