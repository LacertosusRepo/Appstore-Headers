//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTLoginRecoverAccountViewModel;

@protocol SPTLoginRecoverAccountViewModelDelegate <NSObject>
- (void)viewModel:(SPTLoginRecoverAccountViewModel *)arg1 shouldShowKeyboard:(_Bool)arg2;
- (void)viewModel:(SPTLoginRecoverAccountViewModel *)arg1 didFinishLoadingDataWithError:(NSError *)arg2;
- (void)viewModelDidFinishLoadingDataWithSuccess:(SPTLoginRecoverAccountViewModel *)arg1;
@end
