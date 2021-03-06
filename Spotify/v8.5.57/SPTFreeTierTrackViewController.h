//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTHubViewController.h"

@class SPTFreeTierTrackContextMenuButtonViewModel, SPTFreeTierTrackFeedbackButtonViewModel;

@interface SPTFreeTierTrackViewController : SPTHubViewController
{
    SPTFreeTierTrackFeedbackButtonViewModel *_feedbackButtonViewModel;
    SPTFreeTierTrackContextMenuButtonViewModel *_contextMenuButtonViewModel;
}

@property(readonly, nonatomic) SPTFreeTierTrackContextMenuButtonViewModel *contextMenuButtonViewModel; // @synthesize contextMenuButtonViewModel=_contextMenuButtonViewModel;
@property(readonly, nonatomic) SPTFreeTierTrackFeedbackButtonViewModel *feedbackButtonViewModel; // @synthesize feedbackButtonViewModel=_feedbackButtonViewModel;
- (void).cxx_destruct;
- (void)viewModelDidLoad:(id)arg1;
- (void)setupNavigationItems;
- (id)initWithTheme:(id)arg1 pageIdentifier:(id)arg2 pageURI:(id)arg3 componentRegistry:(id)arg4 componentLayoutManager:(id)arg5 imageLoaderFactory:(id)arg6 commandHandler:(id)arg7 viewModelProvider:(id)arg8 impressionLogger:(id)arg9 loadingLogger:(id)arg10 feedbackButtonViewModel:(id)arg11 contextMenuButtonViewModel:(id)arg12 shareDragDelegateFactory:(id)arg13;

@end

