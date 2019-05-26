//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, SPTRadioStation, SPTRadioStationsService;

@protocol SPTRadioStationsObserver <NSObject>

@optional
- (void)radioStationService:(SPTRadioStationsService *)arg1 didUpdateStation:(SPTRadioStation *)arg2 withSavedState:(_Bool)arg3;
- (void)radioStationService:(SPTRadioStationsService *)arg1 userSavedStationsChanged:(NSArray *)arg2;
- (void)radioStationService:(SPTRadioStationsService *)arg1 loadingTracksError:(NSError *)arg2 forStation:(SPTRadioStation *)arg3;
- (void)radioStationService:(SPTRadioStationsService *)arg1 loadedTracksForStation:(SPTRadioStation *)arg2;
@end

