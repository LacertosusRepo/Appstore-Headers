//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IMSwipeableTableViewCell.h"

@class IMCellProgressGradientView, IMDownloadManager, IMDownloadManagerQueueItem, IMLayout, UILabel;

@interface IMDownloadQueueCell : IMSwipeableTableViewCell
{
    UILabel *nameLabel;
    IMLayout *layout;
    double sideMargin;
    IMDownloadManagerQueueItem *item;
    IMDownloadManager *downloadManager;
    IMCellProgressGradientView *progressView;
}

@property(retain, nonatomic) IMCellProgressGradientView *progressView; // @synthesize progressView;
@property(nonatomic) __weak IMDownloadManager *downloadManager; // @synthesize downloadManager;
@property(nonatomic) __weak IMDownloadManagerQueueItem *item; // @synthesize item;
@property(nonatomic) double sideMargin; // @synthesize sideMargin;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
@property(readonly, nonatomic) UILabel *nameLabel;
- (void)update;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
