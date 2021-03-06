//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IMSwipeableTableViewCell.h"

@class IMHistoryItem, IMLayout, IMVisitedItem, NSMutableDictionary, UIImageView, UILabel;

@interface IMHistoryControllerTableViewCell : IMSwipeableTableViewCell
{
    UILabel *nameLabel;
    UILabel *pathLabel;
    UILabel *dateLabel;
    UIImageView *tag;
    IMLayout *layout;
    IMHistoryItem *historyItem;
    IMVisitedItem *visitedItem;
    NSMutableDictionary *playbackStateCache;
    double leftMargin;
    double rightMargin;
    double verticalSpacing;
    double horizontalSpacing;
}

@property(nonatomic) double horizontalSpacing; // @synthesize horizontalSpacing;
@property(nonatomic) double verticalSpacing; // @synthesize verticalSpacing;
@property(nonatomic) double rightMargin; // @synthesize rightMargin;
@property(nonatomic) double leftMargin; // @synthesize leftMargin;
@property(retain, nonatomic) NSMutableDictionary *playbackStateCache; // @synthesize playbackStateCache;
- (void).cxx_destruct;
- (void)updateFromVisitedItem:(id)arg1;
- (void)updateTags;
- (id)imageForState:(int)arg1;
- (void)updateFromHistoryItem:(id)arg1;
- (void)prepareForReuse;
- (id)textFromDate:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

