//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPCore;
@protocol SPTKeepAlivePersistentConnectionsToken, SPTNetworkConnectivityController;

@interface SPTSiriIntentsKeepAliveHandler : NSObject
{
    SPCore *_core;
    id <SPTNetworkConnectivityController> _networkController;
    id <SPTKeepAlivePersistentConnectionsToken> _keepAliveToken;
}

@property(retain, nonatomic) id <SPTKeepAlivePersistentConnectionsToken> keepAliveToken; // @synthesize keepAliveToken=_keepAliveToken;
@property(nonatomic) __weak id <SPTNetworkConnectivityController> networkController; // @synthesize networkController=_networkController;
@property(nonatomic) __weak SPCore *core; // @synthesize core=_core;
- (void).cxx_destruct;
- (id)provideCoreSession;
- (void)keepAlivePersistentConnection:(_Bool)arg1;
- (void)dealloc;
- (id)initWithCore:(id)arg1 networkConnectivityController:(id)arg2;

@end

