//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLogCenter;

@interface SPTFeedLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
}

@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logFollowSuggestionDismissedMessage:(id)arg1 userIntent:(id)arg2 entityURI:(id)arg3 contextID:(id)arg4;
- (void)logFollowMessage:(id)arg1 userIntent:(id)arg2 entityURI:(id)arg3 contextID:(id)arg4;
- (void)logContextMenuActionMessage:(id)arg1 userIntent:(id)arg2 contextMenuActionID:(id)arg3;
- (void)logInteractionsMessage:(id)arg1 userIntent:(id)arg2 interactionOrigin:(id)arg3 destinationURI:(id)arg4;
- (void)logScrollMessage:(id)arg1 userIntent:(id)arg2 indexPath:(id)arg3 visibleEntityURIs:(id)arg4;
- (void)logPlaybackMessage:(id)arg1 userIntent:(id)arg2 entityURI:(id)arg3 contextURI:(id)arg4 playbackID:(id)arg5;
- (void)logImpressionMessage:(id)arg1 userIntent:(id)arg2 pageIdentifier:(id)arg3;
- (void)logFeedDismissedFollowSuggestion:(id)arg1 suggestedArtistURI:(id)arg2 contextID:(id)arg3;
- (void)logFeedFollowEvent:(id)arg1 entityURI:(id)arg2 contextID:(id)arg3 following:(_Bool)arg4;
- (void)logFeedContextMenuActionSelected:(id)arg1 sessionID:(id)arg2;
- (void)logFeedTooltipDismissInteractionWithOrigin:(id)arg1;
- (void)logFeedFilterSelected:(id)arg1 interactionOrigin:(id)arg2 selectedFilter:(id)arg3;
- (void)logFeedHideFiltersInteraction:(id)arg1 interactionOrigin:(id)arg2;
- (void)logFeedShowFiltersInteraction:(id)arg1 interactionOrigin:(id)arg2;
- (void)logFeedPullToRefreshInteraction:(id)arg1 interactionOrigin:(id)arg2;
- (void)logFeedContextMenuInteraction:(id)arg1 interactionOrigin:(id)arg2 entityURI:(id)arg3;
- (void)logFeedNavigationInteraction:(id)arg1 interactionOrigin:(id)arg2 navigateToURI:(id)arg3;
- (void)logFeedPlaybackSkipped:(id)arg1 entityURI:(id)arg2 contextURI:(id)arg3 playbackID:(id)arg4;
- (void)logFeedPlaybackPaused:(id)arg1 entityURI:(id)arg2 contextURI:(id)arg3 playbackID:(id)arg4;
- (void)logFeedPlaybackStarted:(id)arg1 entityURI:(id)arg2 contextURI:(id)arg3 playbackID:(id)arg4;
- (void)logFeedTooltipDidAppear;
- (void)logFeedOnboardingDidScroll:(id)arg1 indexPath:(id)arg2 visibleEntityURIs:(id)arg3;
- (void)logFeedDidScroll:(id)arg1 indexPath:(id)arg2 visibleEntityURIs:(id)arg3;
- (void)logFeedDidDisappear:(id)arg1 pageIdentifier:(id)arg2;
- (void)logFeedDidAppear:(id)arg1 pageIdentifier:(id)arg2;
- (void)logFeedSessionTerminated:(id)arg1 pageIdentifier:(id)arg2;
- (void)logFeedSessionStarted:(id)arg1 pageIdentifier:(id)arg2;
- (id)initWithLogCenter:(id)arg1;

@end

