//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface UITableViewCellTouchInjection : NSObject
{
}

+ (id)tableViewForCell:(id)arg1;
+ (void)unhighlightTableViewCell:(id)arg1;
+ (_Bool)highlightTableViewCell:(id)arg1;
+ (void)selectTableViewCell:(id)arg1;
+ (void)deselectTableViewCell:(id)arg1;
+ (void)deselectAllCells:(id)arg1;
+ (void)tableViewCellDoChangeSelection:(id)arg1;
+ (void)view:(id)arg1 handleTouchUpOutside:(id)arg2;
+ (void)view:(id)arg1 handleTouchMoveOutside:(id)arg2;
+ (void)tableViewCell:(id)arg1 handleTouchCancel:(id)arg2;
+ (void)tableViewCell:(id)arg1 handleTouchMoveOutside:(id)arg2;
+ (void)tableViewCell:(id)arg1 handleTouchUpOutside:(id)arg2;
+ (void)tableViewCell:(id)arg1 handleTouchUpInside:(id)arg2;
+ (void)tableViewCell:(id)arg1 handleTouchMoveInside:(id)arg2;
+ (void)tableViewCell:(id)arg1 handleTouchDownInside:(id)arg2;
+ (_Bool)shouldHandleEventsForSubviews;
+ (_Bool)isActive:(id)arg1;
+ (long long)view:(id)arg1 handleTouchEvent:(id)arg2;

@end

