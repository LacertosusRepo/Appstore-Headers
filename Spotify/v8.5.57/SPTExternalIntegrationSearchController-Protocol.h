//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTExternalIntegrationExternalActionOrigin;

@protocol SPTExternalIntegrationSearchController <NSObject>
- (void)searchWithQuery:(NSString *)arg1 limit:(unsigned long long)arg2 offset:(unsigned long long)arg3 externalActionOrigin:(id <SPTExternalIntegrationExternalActionOrigin>)arg4 completionHandler:(void (^)(NSDictionary *, NSError *))arg5;
@end
