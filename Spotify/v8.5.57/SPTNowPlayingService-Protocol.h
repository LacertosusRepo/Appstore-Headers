//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTService-Protocol.h"

@protocol SPTNowPlayingAuxiliaryActionsHandler, SPTNowPlayingContainerIdleMonitorObservable, SPTNowPlayingDurationUnitViewModel, SPTNowPlayingInformationUnitViewModel, SPTNowPlayingManager, SPTNowPlayingNavigationBarModel, SPTNowPlayingNavigationBarUnitManager, SPTNowPlayingPlaybackActionsHandler, SPTNowPlayingStateObservable;

@protocol SPTNowPlayingService <SPTService>
- (id <SPTNowPlayingNavigationBarUnitManager>)navigationBarUnitManager;
- (id <SPTNowPlayingPlaybackActionsHandler>)providePlaybackActionsHandler;
- (id <SPTNowPlayingDurationUnitViewModel>)createDurationUnitViewModel;
- (id <SPTNowPlayingInformationUnitViewModel>)createInformationUnitViewModel;
- (id <SPTNowPlayingNavigationBarModel>)provideNavigationBarModel;
- (id <SPTNowPlayingAuxiliaryActionsHandler>)provideAuxiliaryActionsHandler;
- (id <SPTNowPlayingStateObservable>)provideNowPlayingStateObservable;
- (id <SPTNowPlayingContainerIdleMonitorObservable>)provideNowPlayingContainerIdleMonitorObservable;
- (id <SPTNowPlayingManager>)provideNowPlayingManager;
@end

