//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTYourLibraryOfflineBannerViewModel;

@protocol SPTYourLibraryOfflineBannerViewModelDelegate <NSObject>
- (void)offlineViewModel:(id <SPTYourLibraryOfflineBannerViewModel>)arg1 finished:(_Bool)arg2;
- (void)offlineViewModelDidBegin:(id <SPTYourLibraryOfflineBannerViewModel>)arg1;
- (void)offlineViewModelDidUpdate:(id <SPTYourLibraryOfflineBannerViewModel>)arg1;
@end

