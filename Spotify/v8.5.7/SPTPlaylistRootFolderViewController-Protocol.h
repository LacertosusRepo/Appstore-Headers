//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class UITableView;
@protocol SPTPlaylistRootFolderViewControllerDelegate;

@protocol SPTPlaylistRootFolderViewController <UITableViewDataSource, UITableViewDelegate>
@property(nonatomic) _Bool disableFilterBar;
@property(readonly, nonatomic) UITableView *rootTableView;
@property(nonatomic) __weak id <SPTPlaylistRootFolderViewControllerDelegate> viewControllerDelegate;
@end

