//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTContextMenuAction, SPTContextMenuPresenter;

@protocol SPTContextMenuPresenterDelegate <NSObject>

@optional
- (void)didSelectContextMenuAction:(id <SPTContextMenuAction>)arg1;
- (void)contextMenuPresenterDidDismiss:(id <SPTContextMenuPresenter>)arg1;
- (_Bool)contextMenuPresenterShouldDismiss:(id <SPTContextMenuPresenter>)arg1;
@end
