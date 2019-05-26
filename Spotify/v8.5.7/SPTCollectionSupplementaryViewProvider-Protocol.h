//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, UITableView, UIView;
@protocol SPTCollectionSupplementaryViewProviderDelegate;

@protocol SPTCollectionSupplementaryViewProvider <NSObject>
@property(nonatomic) __weak id <SPTCollectionSupplementaryViewProviderDelegate> delegate;
- (UIView *)provideErrorView:(NSError *)arg1 size:(struct CGSize)arg2;
- (double)heightForTableHeaderView:(UITableView *)arg1 section:(long long)arg2;
- (UIView *)provideTableSectionHeaderView:(UITableView *)arg1 section:(long long)arg2;
- (void)registerTableReusableSectionViews:(UITableView *)arg1;
- (UIView *)provideTableHeaderView:(UITableView *)arg1;
- (UIView *)provideTableFooterView:(UITableView *)arg1;

@optional
- (void)supplementaryViewWillAppear;
@end

