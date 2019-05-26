//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTNowPlayingButton.h"

@class SPTVocalRemovalToggleButtonViewModel;

@interface SPTVocalRemovalToggleButton : SPTNowPlayingButton
{
    SPTVocalRemovalToggleButtonViewModel *_viewModel;
}

@property(retain, nonatomic) SPTVocalRemovalToggleButtonViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)updateButtonState;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)applyIcon;
- (void)dealloc;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(nonatomic) unsigned long long buttonState; // @dynamic buttonState;

@end

