//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SPTDataLoaderResponse;
@protocol HUBViewModel;

@protocol SPTSearchPlatformResponseParser <NSObject>
- (id <HUBViewModel>)parse:(SPTDataLoaderResponse *)arg1 requestID:(NSString *)arg2 offset:(unsigned long long)arg3 error:(id *)arg4;
@end

