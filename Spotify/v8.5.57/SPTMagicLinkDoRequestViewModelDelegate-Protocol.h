//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTLoginMagicLinkDoRequestViewModel;

@protocol SPTMagicLinkDoRequestViewModelDelegate <NSObject>
- (void)viewModelDidSucceedRequestMagicLink:(SPTLoginMagicLinkDoRequestViewModel *)arg1;
- (void)viewModel:(SPTLoginMagicLinkDoRequestViewModel *)arg1 didFailRequestMagicLinkWithError:(NSError *)arg2;
- (void)viewModelDidStartRequestMagicLink:(SPTLoginMagicLinkDoRequestViewModel *)arg1;
@end

