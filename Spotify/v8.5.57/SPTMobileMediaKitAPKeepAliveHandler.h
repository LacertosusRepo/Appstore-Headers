//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTKeepAlivePersistentConnectionsToken, SPTNetworkConnectivityController;

@interface SPTMobileMediaKitAPKeepAliveHandler : NSObject
{
    id <SPTNetworkConnectivityController> _networkController;
    id <SPTKeepAlivePersistentConnectionsToken> _keepAliveToken;
}

@property(retain, nonatomic) id <SPTKeepAlivePersistentConnectionsToken> keepAliveToken; // @synthesize keepAliveToken=_keepAliveToken;
@property(nonatomic) __weak id <SPTNetworkConnectivityController> networkController; // @synthesize networkController=_networkController;
- (void).cxx_destruct;
- (void)dealloc;
- (void)disable;
- (void)enable;
- (id)initWithNetworkConnectivityController:(id)arg1;

@end

