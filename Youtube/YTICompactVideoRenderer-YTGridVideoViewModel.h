//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTICompactVideoRenderer.h"

#import "YTGridVideoViewModel.h"

@class NSArray, NSString, YTIAThumbnailDetails, YTIFormattedString, YTIGridPromotedVideoCTASupportedRenderers, YTIRenderer, YTIStandaloneBadgeSupportedRenderers, YTIUpcomingEventData;

@interface YTICompactVideoRenderer (YTGridVideoViewModel) <YTGridVideoViewModel>
@property(readonly, nonatomic) _Bool isNarrow;
@property(readonly, nonatomic) _Bool isRadio;
@property(readonly, nonatomic) int titleMaxLineCount;
@property(readonly, nonatomic) _Bool hasTitleMaxLineCount;
@property(readonly, nonatomic) YTIFormattedString *videoCountShortText;
@property(readonly, nonatomic) _Bool hasVideoCountShortText;
@property(readonly, nonatomic) YTIFormattedString *videoCountText;
@property(readonly, nonatomic) _Bool hasVideoCountText;
@property(readonly, nonatomic) _Bool shouldShowAdBadge;
@property(readonly, nonatomic) YTIGridPromotedVideoCTASupportedRenderers *ctaRenderer;

// Remaining properties
@property(readonly, nonatomic) NSArray *badgesArray;
@property(readonly, nonatomic) YTIStandaloneBadgeSupportedRenderers *bottomStandaloneBadge;
@property(readonly, nonatomic) YTIAThumbnailDetails *channelThumbnail;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSArray *endSwipeContentsArray;
@property(readonly, nonatomic) _Bool hasBottomStandaloneBadge;
@property(readonly, nonatomic) _Bool hasMenu;
@property(readonly, nonatomic) _Bool hasPublishedTimeText;
@property(readonly, nonatomic) _Bool hasRejectedVideoButton;
@property(readonly, nonatomic) _Bool hasShortBylineText;
@property(readonly, nonatomic) _Bool hasShortViewCountText;
@property(readonly, nonatomic) _Bool hasStandaloneBadge;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool hasTopStandaloneBadge;
@property(readonly, nonatomic) _Bool hasUpcomingEventData;
@property(readonly, nonatomic) _Bool hasViewCountText;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isWatched;
@property(readonly, nonatomic) YTIFormattedString *lengthText;
@property(readonly, nonatomic) YTIFormattedString *publishedTimeText;
@property(readonly, nonatomic) YTIRenderer *rejectedVideoButton;
@property(readonly, nonatomic) YTIFormattedString *shortBylineText;
@property(readonly, nonatomic) YTIFormattedString *shortViewCountText;
@property(readonly, nonatomic) YTIStandaloneBadgeSupportedRenderers *standaloneBadge;
@property(readonly) Class superclass;
@property(readonly, nonatomic) YTIAThumbnailDetails *thumbnail;
@property(readonly, nonatomic) NSArray *thumbnailBadgesArray;
@property(readonly, nonatomic) NSArray *thumbnailOverlaysArray;
@property(readonly, nonatomic) YTIFormattedString *title;
@property(readonly, nonatomic) YTIStandaloneBadgeSupportedRenderers *topStandaloneBadge;
@property(readonly, nonatomic) YTIUpcomingEventData *upcomingEventData;
@property(readonly, nonatomic) YTIFormattedString *viewCountText;
@end
