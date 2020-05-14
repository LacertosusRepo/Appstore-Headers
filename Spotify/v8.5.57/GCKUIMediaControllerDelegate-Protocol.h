//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKMediaStatus, GCKUIMediaController;

@protocol GCKUIMediaControllerDelegate <NSObject>

@optional
- (void)mediaController:(GCKUIMediaController *)arg1 didUpdateMediaStatus:(GCKMediaStatus *)arg2;
- (void)mediaController:(GCKUIMediaController *)arg1 didBeginPreloadForItemID:(unsigned long long)arg2;
- (void)mediaController:(GCKUIMediaController *)arg1 didUpdatePlayerState:(long long)arg2 lastStreamPosition:(double)arg3;
@end
