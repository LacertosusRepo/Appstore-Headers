//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, NSURL, SPTPodcastEpisode, UITableViewCell;

@protocol SPTPodcastEpisodeCellConfigurator <NSObject>
- (Class)cellClass;

@optional
- (UITableViewCell *)configureCell:(UITableViewCell *)arg1 atIndexPath:(NSIndexPath *)arg2 isEpisodePlaying:(_Bool)arg3 isEpisodeActive:(_Bool)arg4 withPodcastEpisode:(SPTPodcastEpisode *)arg5 target:(id)arg6 thumbnailImageURL:(NSURL *)arg7;
@end

