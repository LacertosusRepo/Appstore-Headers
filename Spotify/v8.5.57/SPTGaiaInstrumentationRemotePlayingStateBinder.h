//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaConnectManagerObserver-Protocol.h"

@class NSString;
@protocol SPTGaiaConnectManager, SPTInstrumentationRemotePlayingHandler;

@interface SPTGaiaInstrumentationRemotePlayingStateBinder : NSObject <SPTGaiaConnectManagerObserver>
{
    id <SPTInstrumentationRemotePlayingHandler> _remotePlayingHandler;
    id <SPTGaiaConnectManager> _connectManager;
}

@property(readonly, nonatomic) id <SPTGaiaConnectManager> connectManager; // @synthesize connectManager=_connectManager;
@property(readonly, nonatomic) id <SPTInstrumentationRemotePlayingHandler> remotePlayingHandler; // @synthesize remotePlayingHandler=_remotePlayingHandler;
- (void).cxx_destruct;
- (void)connectManager:(id)arg1 playingRemotelyDidChange:(_Bool)arg2;
- (void)dealloc;
- (id)initWithConnectManager:(id)arg1 instrumentationRemotePlayingHandler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

