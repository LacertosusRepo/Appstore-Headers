//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, SPTGaiaVolumeButtonController;

@protocol SPTGaiaVolumeButtonControllerDelegate <NSObject>
@property(readonly, nonatomic) NSNumber *currentVolume;
- (_Bool)lockScreenVolumeControlsShouldBeActive;
- (_Bool)lockScreenVolumeControlsFeatureEnabled;
- (void)requestVolumeChange:(float)arg1;
- (float)volumeButtonControllerDidStealVolumeDown:(SPTGaiaVolumeButtonController *)arg1;
- (float)volumeButtonControllerDidStealVolumeUp:(SPTGaiaVolumeButtonController *)arg1;
@end

