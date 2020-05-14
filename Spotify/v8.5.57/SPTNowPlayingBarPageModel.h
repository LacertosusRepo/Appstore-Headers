//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP18ConnectUIV2Feature44SPTConnectUINowPlayingBarIntegrationObserver_-Protocol.h"

@protocol SPTNowPlayingBarPageModelDelegate, _TtP18ConnectUIV2Feature36SPTConnectUINowPlayingBarIntegration_;

@interface SPTNowPlayingBarPageModel : NSObject <_TtP18ConnectUIV2Feature44SPTConnectUINowPlayingBarIntegrationObserver_>
{
    _Bool _remoteDevicesVisible;
    id <SPTNowPlayingBarPageModelDelegate> _delegate;
    id <_TtP18ConnectUIV2Feature36SPTConnectUINowPlayingBarIntegration_> _connectIntegration;
}

@property(retain, nonatomic) id <_TtP18ConnectUIV2Feature36SPTConnectUINowPlayingBarIntegration_> connectIntegration; // @synthesize connectIntegration=_connectIntegration;
@property(nonatomic, getter=isRemoteDevicesVisible) _Bool remoteDevicesVisible; // @synthesize remoteDevicesVisible=_remoteDevicesVisible;
@property(nonatomic) __weak id <SPTNowPlayingBarPageModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)shouldUpdateConnectStateViewVisibilityWithVisible:(_Bool)arg1;
- (id)initWithConnectIntegration:(id)arg1;

@end

