//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTGaiaConnectPublicStateCache;

@protocol SPTGaiaConnectPublicStateCacheObserver <NSObject>
- (void)connectDidChangeCurrentConnectionType:(SPTGaiaConnectPublicStateCache *)arg1;
- (void)connectDidChangeAvailable:(SPTGaiaConnectPublicStateCache *)arg1;
- (void)connectDidChangeActiveDeviceName:(SPTGaiaConnectPublicStateCache *)arg1;
- (void)connectDidChangeRemoteConnectionState:(SPTGaiaConnectPublicStateCache *)arg1;
@end
