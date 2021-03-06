//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTAudioPreviewPlayer;

@protocol SPTAudioPreviewPlayerObserver <NSObject>
- (void)audioPreviewPlayerDidStop:(id <SPTAudioPreviewPlayer>)arg1;
- (void)audioPreviewPlayerDidPause:(id <SPTAudioPreviewPlayer>)arg1;
- (void)audioPreviewPlayerDidBeginPlaying:(id <SPTAudioPreviewPlayer>)arg1;
- (void)audioPreviewPlayerDidLoadNewTrackIdentifier:(id <SPTAudioPreviewPlayer>)arg1;
@end

