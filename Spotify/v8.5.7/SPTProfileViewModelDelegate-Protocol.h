//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTBaseViewModelDelegate-Protocol.h"

@class FollowData, NSError, NSURL, SPTProfileViewModel;

@protocol SPTProfileViewModelDelegate <SPTBaseViewModelDelegate>
- (void)viewModel:(SPTProfileViewModel *)arg1 didUpdateProfileImageURL:(NSURL *)arg2;
- (void)viewModel:(SPTProfileViewModel *)arg1 didUpdateFollowData:(FollowData *)arg2;

@optional
- (void)viewModel:(SPTProfileViewModel *)arg1 followUpdateDidFailWithError:(NSError *)arg2;
@end

