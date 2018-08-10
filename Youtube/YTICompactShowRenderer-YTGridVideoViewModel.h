//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTICompactShowRenderer.h"

#import "YTGridVideoViewModel.h"

@class NSArray, NSString, YTIAThumbnailDetails, YTIFormattedString, YTIGridPromotedVideoCTASupportedRenderers, YTIRenderer, YTIStandaloneBadgeSupportedRenderers, YTIUpcomingEventData;

@interface YTICompactShowRenderer (YTGridVideoViewModel) <YTGridVideoViewModel>
@property(readonly, nonatomic) YTIRenderer *rejectedVideoButton;
@property(readonly, nonatomic) _Bool hasRejectedVideoButton;
@property(readonly, nonatomic) int titleMaxLineCount;
@property(readonly, nonatomic) _Bool hasTitleMaxLineCount;
@property(readonly, nonatomic) YTIFormattedString *lengthText;
- (_Bool)hasLengthText;
@property(readonly, nonatomic) YTIFormattedString *publishedTimeText;
@property(readonly, nonatomic) _Bool hasPublishedTimeText;
@property(readonly, nonatomic) YTIFormattedString *shortViewCountText;
@property(readonly, nonatomic) _Bool hasShortViewCountText;
@property(readonly, nonatomic) YTIFormattedString *viewCountText;
@property(readonly, nonatomic) _Bool hasViewCountText;
@property(readonly, nonatomic) YTIFormattedString *videoCountShortText;
@property(readonly, nonatomic) _Bool hasVideoCountShortText;
@property(readonly, nonatomic) YTIFormattedString *videoCountText;
@property(readonly, nonatomic) _Bool hasVideoCountText;
@property(readonly, nonatomic) YTIUpcomingEventData *upcomingEventData;
@property(readonly, nonatomic) _Bool hasUpcomingEventData;
@property(readonly, nonatomic) YTIStandaloneBadgeSupportedRenderers *topStandaloneBadge;
@property(readonly, nonatomic) _Bool hasTopStandaloneBadge;
@property(readonly, nonatomic) YTIStandaloneBadgeSupportedRenderers *standaloneBadge;
@property(readonly, nonatomic) _Bool hasStandaloneBadge;
@property(readonly, nonatomic) _Bool shouldShowAdBadge;
@property(readonly, nonatomic) _Bool isWatched;
@property(readonly, nonatomic) _Bool isNarrow;
@property(readonly, nonatomic) _Bool isRadio;
@property(readonly, nonatomic) YTIGridPromotedVideoCTASupportedRenderers *ctaRenderer;
@property(readonly, nonatomic) YTIAThumbnailDetails *thumbnail;
@property(readonly, nonatomic) NSArray *badgesArray;
@property(readonly, nonatomic) NSArray *thumbnailBadgesArray;
@property(readonly, nonatomic) YTIAThumbnailDetails *channelThumbnail;
@property(readonly, nonatomic) NSArray *endSwipeContentsArray;

// Remaining properties
@property(readonly, nonatomic) YTIStandaloneBadgeSupportedRenderers *bottomStandaloneBadge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasBottomStandaloneBadge;
@property(readonly, nonatomic) _Bool hasMenu;
@property(readonly, nonatomic) _Bool hasShortBylineText;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) YTIFormattedString *shortBylineText;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSArray *thumbnailOverlaysArray;
@property(readonly, nonatomic) YTIFormattedString *title;
@end

