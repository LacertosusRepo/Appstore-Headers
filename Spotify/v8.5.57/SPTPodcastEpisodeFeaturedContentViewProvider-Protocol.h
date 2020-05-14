//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, UIViewController;
@protocol SPTPageController, SPTPageCreationContext, SPTPodcastEpisodeFeaturedContentViewController;

@protocol SPTPodcastEpisodeFeaturedContentViewProvider <NSObject>
- (UIViewController<SPTPageController> *)featuredContentTimelineForEpisodeURL:(NSURL *)arg1 withContext:(id <SPTPageCreationContext>)arg2;
- (UIViewController *)featuredContentTrackListForEpisodeURL:(NSURL *)arg1 withContext:(id <SPTPageCreationContext>)arg2;
- (UIViewController<SPTPodcastEpisodeFeaturedContentViewController> *)featuredContentForEpisodeURL:(NSURL *)arg1 withContext:(id <SPTPageCreationContext>)arg2;
@end

