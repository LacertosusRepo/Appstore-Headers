//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SPTVoiceLibraryWakewordProviderLogger <NSObject>
- (void)logWakewordProviderStatusWithProviderId:(NSString *)arg1 sessionId:(NSString *)arg2 providerVersion:(NSString *)arg3 providerModel:(NSString *)arg4;
- (void)logWakewordProviderResultWithProviderId:(NSString *)arg1 sessionId:(NSString *)arg2;
- (void)logWakewordProviderErrorWithProviderId:(NSString *)arg1 sessionId:(NSString *)arg2 errorDomain:(NSString *)arg3 errorDescription:(NSString *)arg4;
@end
