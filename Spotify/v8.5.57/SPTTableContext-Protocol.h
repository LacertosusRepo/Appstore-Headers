//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTTableRowAdapter, UITableViewCell, UIViewController;

@protocol SPTTableContext <NSObject>
@property(readonly, nonatomic) struct CGPoint contentOffset;
@property(readonly, nonatomic) __weak UIViewController *viewController;
- (void)deselectSelectedCell:(_Bool)arg1;
- (UITableViewCell *)cellForRowAdapter:(SPTTableRowAdapter *)arg1;
- (UITableViewCell *)dequeueReusableCellOfClass:(Class)arg1 forRowAdapter:(SPTTableRowAdapter *)arg2;
- (void)reloadTableData;
@end

