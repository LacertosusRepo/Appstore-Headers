//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTContextMenuView;

@protocol SPTContextMenuViewDelegate <NSObject>
- (void)dismissContextMenuView:(SPTContextMenuView *)arg1 dismissalStyle:(long long)arg2 completion:(void (^)(void))arg3;

@optional
- (long long)interfaceOrientationForContextMenuView:(SPTContextMenuView *)arg1;
- (_Bool)shouldShowCancelButtonInContextMenuView:(SPTContextMenuView *)arg1;
- (_Bool)contextMenuView:(SPTContextMenuView *)arg1 shouldBeDismissedAfterPerformingAction:(id <SPTContextMenuAction>)arg2;
@end

