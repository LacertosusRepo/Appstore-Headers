//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@protocol SPTPSXViewModelDelegate <NSObject>
- (void)viewModelDidUpdateOfflineStatus:(id <SPTPSXViewModel>)arg1;
- (void)viewModel:(id <SPTPSXViewModel>)arg1 didUpdateFollowStatus:(_Bool)arg2;
- (void)viewModel:(id <SPTPSXViewModel>)arg1 didUpdateFollowerCount:(long long)arg2;
- (void)viewModelDidUpdateMetadata:(id <SPTPSXViewModel>)arg1;
- (void)viewModelDidUpdateData:(id <SPTPSXViewModel>)arg1;
- (void)viewModel:(id <SPTPSXViewModel>)arg1 failedToLoadDataWithError:(NSError *)arg2;
- (void)viewModelDidLoadData:(id <SPTPSXViewModel>)arg1;
@end

