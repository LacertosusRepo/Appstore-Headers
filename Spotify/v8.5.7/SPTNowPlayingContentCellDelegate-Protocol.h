//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTNowPlayingContentCell, UIView;
@protocol SPTNowPlayingCoverArtContentView;

@protocol SPTNowPlayingContentCellDelegate <NSObject>
- (void)nowPlayingContentCellDidDetachVideoSurface:(SPTNowPlayingContentCell *)arg1;
- (void)nowPlayingContentCellDidAttachVideoSurface:(SPTNowPlayingContentCell *)arg1;
- (void)nowPlayingContentCell:(SPTNowPlayingContentCell *)arg1 didChangeContent:(UIView<SPTNowPlayingCoverArtContentView> *)arg2;

@optional
- (void)nowPlayingContentCellAccessoryViewTouchedUp:(SPTNowPlayingContentCell *)arg1;
@end

