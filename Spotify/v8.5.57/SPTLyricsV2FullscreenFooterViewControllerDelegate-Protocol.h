//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTLyricsV2FullscreenFooterViewController;

@protocol SPTLyricsV2FullscreenFooterViewControllerDelegate <NSObject>
- (void)fullscreenFooterViewControllerDidTapVocalRemovalButton:(SPTLyricsV2FullscreenFooterViewController *)arg1;
- (void)fullscreenFooterViewControllerDidShowContextMenuButton:(SPTLyricsV2FullscreenFooterViewController *)arg1;
- (void)fullscreenFooterViewControllerDidShowVocalRemovalButton:(SPTLyricsV2FullscreenFooterViewController *)arg1;
- (void)fullscreenFooterViewController:(SPTLyricsV2FullscreenFooterViewController *)arg1 didScrubToPosition:(double)arg2;
- (void)fullscreenFooterViewControllerDidEndScrubbing:(SPTLyricsV2FullscreenFooterViewController *)arg1;
- (void)fullscreenFooterViewControllerDidBeginScrubbing:(SPTLyricsV2FullscreenFooterViewController *)arg1;
- (void)fullscreenFooterViewController:(SPTLyricsV2FullscreenFooterViewController *)arg1 didTapPlayPauseButtonWithState:(_Bool)arg2;
@end

