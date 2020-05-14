//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString, SPTContextMenuAccessoryButton, UITableView, UITableViewCell;
@protocol SPTFormatListItemModel;

@protocol SPTFormatListTableViewConfiguratorInternal <NSObject>
- (void)decorateTableViewCell:(UITableViewCell *)arg1 withAccessoryButton:(SPTContextMenuAccessoryButton *)arg2 indexPath:(NSIndexPath *)arg3 formatListItemModel:(id <SPTFormatListItemModel>)arg4;
- (void)decorateTableViewCell:(UITableViewCell *)arg1 indexPath:(NSIndexPath *)arg2 formatListItemModel:(id <SPTFormatListItemModel>)arg3;
- (void)registerCellsInTableView:(UITableView *)arg1;
- (NSString *)cellIdentifierForIndexPath:(NSIndexPath *)arg1 formatListItemModel:(id <SPTFormatListItemModel>)arg2;
- (double)rowHeightForIndexPath:(NSIndexPath *)arg1 formatListItemModel:(id <SPTFormatListItemModel>)arg2;
@end

