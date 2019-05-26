//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTNowPlayingButton.h"

#import "SPTNowPlayingQueueButton-Protocol.h"

@class NSString, SPTNowPlayingBadgeView;

@interface SPTNowPlayingQueueButtonV2 : SPTNowPlayingButton <SPTNowPlayingQueueButton>
{
    SPTNowPlayingBadgeView *_badgeView;
}

@property(retain, nonatomic) SPTNowPlayingBadgeView *badgeView; // @synthesize badgeView=_badgeView;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)setHighlighted:(_Bool)arg1;
@property(nonatomic) unsigned long long badgeValue;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

