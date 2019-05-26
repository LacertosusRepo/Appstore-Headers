//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTSingleRequestViewModel;

@protocol SPTSingleRequestViewModelDelegate <NSObject>
- (void)viewModel:(SPTSingleRequestViewModel *)arg1 didFailLoad:(NSError *)arg2;
- (void)viewModel:(SPTSingleRequestViewModel *)arg1 didLoadData:(id)arg2 loadTime:(double)arg3;

@optional
- (void)viewModel:(SPTSingleRequestViewModel *)arg1 offlineModeChanged:(_Bool)arg2;
- (void)viewModel:(SPTSingleRequestViewModel *)arg1 setLoading:(_Bool)arg2;
@end

