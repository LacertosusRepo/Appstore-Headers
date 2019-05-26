//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, UITableViewCell;
@protocol SPTPodcastEpisodeCellActionTarget, SPTPodcastEpisodeCellState;

@protocol SPTPodcastEpisodeCellConfigurator <NSObject>
- (Class)cellClass;

@optional
- (UITableViewCell *)configureEpisodeCell:(UITableViewCell *)arg1 atIndexPath:(NSIndexPath *)arg2 episodeCellState:(id <SPTPodcastEpisodeCellState>)arg3 target:(id <SPTPodcastEpisodeCellActionTarget>)arg4;
@end

