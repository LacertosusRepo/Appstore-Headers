//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IDAudioPlayerPlaylistItem, IDAudioPlayerView;

@protocol IDAudioPlayerViewDataSource <NSObject>
- (IDAudioPlayerPlaylistItem *)audioPlayer:(IDAudioPlayerView *)arg1 playlistItemAtIndex:(unsigned long long)arg2;
- (long long)numberOfAudioPlayerPlaylistItems:(IDAudioPlayerView *)arg1;
@end

