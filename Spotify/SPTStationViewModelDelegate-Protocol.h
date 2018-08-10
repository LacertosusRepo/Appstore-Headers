//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTBaseViewModelDelegate.h"

@class SPTStationViewModel;

@protocol SPTStationViewModelDelegate <SPTBaseViewModelDelegate>
- (void)stationViewModelCurrentStationSavedStateDidChange:(id <SPTRadioStationViewModel>)arg1;
- (void)stationViewModelUpdatedTracks:(id <SPTRadioStationViewModel>)arg1;
- (void)stationViewModelFailedToLoadMoreTracks:(id <SPTRadioStationViewModel>)arg1;
- (void)stationViewModelLoadedMoreTracks:(id <SPTRadioStationViewModel>)arg1;
- (void)stationViewModelPlaybackStateChanged:(SPTStationViewModel *)arg1;
- (void)stationViewModelCurrentTrackDidChange:(SPTStationViewModel *)arg1;
@end

