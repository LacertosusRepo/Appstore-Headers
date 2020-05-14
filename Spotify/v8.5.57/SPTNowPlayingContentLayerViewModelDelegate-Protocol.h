//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, SPTNowPlayingContentLayerViewModel;

@protocol SPTNowPlayingContentLayerViewModelDelegate <NSObject>
- (void)contentLayerViewModelDidChangeScrollBoundaries:(SPTNowPlayingContentLayerViewModel *)arg1;
- (void)contentLayerViewModelDidChangePreviousTrack:(SPTNowPlayingContentLayerViewModel *)arg1;
- (void)contentLayerViewModelDidChangeNextTrack:(SPTNowPlayingContentLayerViewModel *)arg1;
- (void)contentLayerViewModelDidMoveToTrackAtIndexPath:(NSIndexPath *)arg1 relativeMovement:(long long)arg2;
@end

