//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTBaseViewModelDelegate-Protocol.h"

@class SPTStationViewModel;
@protocol SPTRadioStationViewModel;

@protocol SPTStationViewModelDelegate <SPTBaseViewModelDelegate>
- (void)stationViewModelCurrentStationSavedStateDidChange:(id <SPTRadioStationViewModel>)arg1;
- (void)stationViewModelUpdatedTracks:(id <SPTRadioStationViewModel>)arg1;
- (void)stationViewModelFailedToLoadMoreTracks:(id <SPTRadioStationViewModel>)arg1;
- (void)stationViewModelLoadedMoreTracks:(id <SPTRadioStationViewModel>)arg1;
- (void)stationViewModelPlaybackStateChanged:(SPTStationViewModel *)arg1;
- (void)stationViewModelCurrentTrackDidChange:(SPTStationViewModel *)arg1;
@end

