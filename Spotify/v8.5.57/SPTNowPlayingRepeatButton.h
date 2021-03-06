//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTNowPlayingButton.h"

#import "SPTNowPlayingRepeatButton-Protocol.h"

@class NSString;

@interface SPTNowPlayingRepeatButton : SPTNowPlayingButton <SPTNowPlayingRepeatButton>
{
    struct CGSize _iconSize;
}

+ (id)button;
- (void)setIconSize:(struct CGSize)arg1;
- (struct CGSize)iconSize;
- (id)accessibilityValue;
- (id)accessibilityIdentifier;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, copy) NSString *description;
- (void)applyIcon;

// Remaining properties
@property(nonatomic) unsigned long long buttonState;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

