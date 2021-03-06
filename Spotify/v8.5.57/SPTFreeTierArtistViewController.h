//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTHubViewController.h"

#import "HUBViewContentOffsetObserver-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"

@class NSString, SPTFreeTierArtistContextMenuButtonViewModel, SPTFreeTierArtistFeedbackButtonViewModel, SPTFreeTierEntityNavigationDecorator, SPTProgressView;

@interface SPTFreeTierArtistViewController : SPTHubViewController <SPTNavigationControllerNavigationBarState, HUBViewContentOffsetObserver>
{
    SPTFreeTierArtistFeedbackButtonViewModel *_feedbackButtonViewModel;
    SPTFreeTierArtistContextMenuButtonViewModel *_contextMenuButtonViewModel;
    SPTFreeTierEntityNavigationDecorator *_navigationItemDecorator;
    SPTProgressView *_progressView;
}

@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(readonly, nonatomic) SPTFreeTierEntityNavigationDecorator *navigationItemDecorator; // @synthesize navigationItemDecorator=_navigationItemDecorator;
@property(readonly, nonatomic) SPTFreeTierArtistContextMenuButtonViewModel *contextMenuButtonViewModel; // @synthesize contextMenuButtonViewModel=_contextMenuButtonViewModel;
@property(readonly, nonatomic) SPTFreeTierArtistFeedbackButtonViewModel *feedbackButtonViewModel; // @synthesize feedbackButtonViewModel=_feedbackButtonViewModel;
- (void).cxx_destruct;
- (unsigned long long)preferredNavigationBarState;
- (id)URI;
- (void)hubView:(id)arg1 contentOffsetDidChange:(struct CGPoint)arg2;
- (void)hubView:(id)arg1 componentViewWillAppear:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewModelDidLoad:(id)arg1;
- (id)initWithTheme:(id)arg1 pageIdentifier:(id)arg2 pageURI:(id)arg3 componentRegistry:(id)arg4 componentLayoutManager:(id)arg5 imageLoaderFactory:(id)arg6 commandHandler:(id)arg7 viewModelProvider:(id)arg8 impressionLogger:(id)arg9 loadingLogger:(id)arg10 feedbackButtonViewModel:(id)arg11 contextMenuButtonViewModel:(id)arg12 navigationItemDecorator:(id)arg13 shareDragDelegateFactory:(id)arg14;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

