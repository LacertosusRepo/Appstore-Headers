//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UITableViewDelegate-Protocol.h"

@class NSIndexPath, UITableView;

@protocol SPTUITableViewExtendedDelegate <UITableViewDelegate>

@optional
- (void)tableView:(UITableView *)arg1 didCancelReorderingRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 didEndReorderingRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 willBeginReorderingRowAtIndexPath:(NSIndexPath *)arg2;
@end

