//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView, YTVisibilityPercentage;

@protocol YTInlineMutedPlaybackItem <NSObject>
- (void)transitionToThumbnailViewWithSnapshotView:(UIView *)arg1;
- (void)disableInlineMutedState;
- (void)processPlayableItemState:(long long)arg1 visibilityPercentage:(YTVisibilityPercentage *)arg2;
- (void)setPlayerViewContainer:(UIView *)arg1;
- (void)setInlineMutedPlaybackEnabled:(_Bool)arg1;
@end

