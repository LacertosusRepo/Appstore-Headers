//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTRadioStation, SPTRadioStationsService;

@protocol SPTRadioStationsObserver <NSObject>

@optional
- (void)radioStationService:(SPTRadioStationsService *)arg1 loadingTracksError:(NSError *)arg2 forStation:(SPTRadioStation *)arg3;
- (void)radioStationService:(SPTRadioStationsService *)arg1 loadedTracksForStation:(SPTRadioStation *)arg2;
@end

