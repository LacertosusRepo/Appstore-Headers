//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class UIView;
@protocol _TtP18ConnectUIV2Feature44SPTConnectUINowPlayingBarIntegrationObserver_;

@protocol _TtP18ConnectUIV2Feature36SPTConnectUINowPlayingBarIntegration_
- (void)removeObserver:(id <_TtP18ConnectUIV2Feature44SPTConnectUINowPlayingBarIntegrationObserver_>)arg1;
- (void)addObserver:(id <_TtP18ConnectUIV2Feature44SPTConnectUINowPlayingBarIntegrationObserver_>)arg1;
- (UIView *)provideConnectStateView;
- (UIView *)provideConnectButtonView;
@property(nonatomic, readonly) _Bool shouldShowConnectStateView;
@property(nonatomic, readonly) _Bool shouldShowConnectButton;
@end
