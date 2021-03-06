//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SPTPodcastUIButtonsDelegate-Protocol.h"

@class GLUEAccessoryIconButton, NSIndexPath, NSURL, SPTContextMenuAccessoryButton, UITableViewCell, UIViewController;
@protocol SPTPageController, SPTPodcastUIButtonWithIndex;

@protocol SPTPodcastEpisodeCellActionTarget <NSObject, SPTPodcastUIButtonsDelegate>
- (void)didSelectHeaderForCell:(UITableViewCell *)arg1 atIndexPath:(NSIndexPath *)arg2;
- (void)didSelectDescriptionForCell:(UITableViewCell *)arg1 atIndexPath:(NSIndexPath *)arg2;
- (void)playButtonTapped:(GLUEAccessoryIconButton<SPTPodcastUIButtonWithIndex> *)arg1;
- (void)cellContextMenuTapped:(SPTContextMenuAccessoryButton *)arg1;
- (void)offlineAccessoryButtonTapped:(GLUEAccessoryIconButton<SPTPodcastUIButtonWithIndex> *)arg1;

@optional
- (UIViewController<SPTPageController> *)episodeViewControllerWithURI:(NSURL *)arg1;
- (void)navigateToEpisodeViewControllerWithURI:(NSURL *)arg1;
- (void)removeButtonTapped:(GLUEAccessoryIconButton<SPTPodcastUIButtonWithIndex> *)arg1;
- (void)didSelectCell:(UITableViewCell *)arg1 atIndexPath:(NSIndexPath *)arg2;
@end

