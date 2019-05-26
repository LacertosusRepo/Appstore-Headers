//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTNowPlayingBaseHeadUnitView.h"

#import "SPTNowplayingFlexibleLayoutBaseUnit-Protocol.h"

@class NSString, UIButton, UILabel;

@interface SPTNowPlayingShowsFormatHeadUnitView : SPTNowPlayingBaseHeadUnitView <SPTNowplayingFlexibleLayoutBaseUnit>
{
    UIButton *_leftAccessoryButton;
    UIButton *_rightAccessoryButton;
    UILabel *_leftAccessoryIndicator;
    UILabel *_rightAccessoryIndicator;
}

- (id)rightAccessoryIndicator;
- (id)leftAccessoryIndicator;
- (id)rightAccessoryButton;
- (id)leftAccessoryButton;
- (void).cxx_destruct;
- (id)constraintsForPlayButton:(id)arg1 nextButton:(id)arg2 previousButton:(id)arg3 leftAccessoryButton:(id)arg4 rightAccessoryButton:(id)arg5 containerView:(id)arg6;
- (id)initWithTheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

