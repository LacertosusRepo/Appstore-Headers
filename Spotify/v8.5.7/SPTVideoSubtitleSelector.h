//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayer, AVPlayerItem, NSArray;

@interface SPTVideoSubtitleSelector : NSObject
{
    AVPlayerItem *_playerItem;
    AVPlayer *_player;
    NSArray *_availableSubtitles;
}

@property(retain, nonatomic) NSArray *availableSubtitles; // @synthesize availableSubtitles=_availableSubtitles;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
- (void).cxx_destruct;
- (id)refreshSelectedSubtitleWithPreferredSubtitle:(id)arg1;
- (id)initWithPlayerItem:(id)arg1 player:(id)arg2 availableSubtitles:(id)arg3;

@end

