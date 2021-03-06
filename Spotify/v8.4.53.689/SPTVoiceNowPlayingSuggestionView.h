//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SPTVoiceNowPlayingSuggestionViewModelDelegate.h"

@class GLUELabel, NSString, SPTVoiceNowPlayingSuggestionViewModel;

@interface SPTVoiceNowPlayingSuggestionView : UIView <SPTVoiceNowPlayingSuggestionViewModelDelegate>
{
    SPTVoiceNowPlayingSuggestionViewModel *_viewModel;
    GLUELabel *_suggestionLabel;
}

@property(retain, nonatomic) GLUELabel *suggestionLabel; // @synthesize suggestionLabel=_suggestionLabel;
@property(readonly, nonatomic) SPTVoiceNowPlayingSuggestionViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)nowPlayingSuggestionViewModelDidUpdate:(id)arg1;
- (void)setupLayouts;
- (void)setupViews;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

