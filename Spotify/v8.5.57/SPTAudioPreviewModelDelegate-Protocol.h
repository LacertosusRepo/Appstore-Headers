//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTAudioPreviewModel;

@protocol SPTAudioPreviewModelDelegate <NSObject>
- (void)audioPreviewModelDidChangeTrackIdentifier:(id <SPTAudioPreviewModel>)arg1;
- (void)audioPreviewModelDidChangeEndTime:(id <SPTAudioPreviewModel>)arg1;
- (void)audioPreviewModelDidChangeStartTime:(id <SPTAudioPreviewModel>)arg1;
- (void)audioPreviewModelDidStop:(id <SPTAudioPreviewModel>)arg1;
- (void)audioPreviewModelDidChangePaused:(id <SPTAudioPreviewModel>)arg1;
- (void)audioPreviewModelDidChangePlaying:(id <SPTAudioPreviewModel>)arg1;
@end
