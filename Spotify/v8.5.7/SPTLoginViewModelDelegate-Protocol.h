//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTLoginViewModel;

@protocol SPTLoginViewModelDelegate <NSObject>
- (void)viewModel:(SPTLoginViewModel *)arg1 shouldShowKeyboard:(_Bool)arg2;
- (void)viewModelDidSucceedRequestMagicLink:(SPTLoginViewModel *)arg1;
- (void)viewModel:(SPTLoginViewModel *)arg1 didFailRequestMagicLinkWithError:(NSError *)arg2;
- (void)viewModelDidStartRequestMagicLink:(SPTLoginViewModel *)arg1;
- (void)viewModel:(SPTLoginViewModel *)arg1 didCompleteLoginWithError:(NSError *)arg2;
- (void)viewModelDidCompleteLoginWithNetworkDisabledError:(SPTLoginViewModel *)arg1;
- (void)viewModelDidCompleteLoginWithSuccess:(SPTLoginViewModel *)arg1;
@end

