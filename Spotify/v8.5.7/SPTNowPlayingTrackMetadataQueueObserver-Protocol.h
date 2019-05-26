//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, SPTNowPlayingTrackMetadataQueue;

@protocol SPTNowPlayingTrackMetadataQueueObserver <NSObject>

@optional
- (void)trackMetadataQueueDidSynchronizeQueue:(SPTNowPlayingTrackMetadataQueue *)arg1;
- (void)trackMetadataQueueNextTrackDidChange:(SPTNowPlayingTrackMetadataQueue *)arg1;
- (void)trackMetadataQueueWillSkipToNextTrack:(SPTNowPlayingTrackMetadataQueue *)arg1;
- (void)trackMetadataQueueDidFinishUpdating:(SPTNowPlayingTrackMetadataQueue *)arg1;
- (void)trackMetadataQueue:(SPTNowPlayingTrackMetadataQueue *)arg1 didMoveToRelativeTrack:(NSNumber *)arg2;
@end

