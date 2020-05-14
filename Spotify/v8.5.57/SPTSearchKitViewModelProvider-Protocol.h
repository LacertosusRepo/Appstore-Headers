//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SPTSearchKitViewModel;
@protocol SPTSearchKitViewModelProviderDelegate;

@protocol SPTSearchKitViewModelProvider <NSObject>
@property(readonly, copy, nonatomic) SPTSearchKitViewModel *viewModel;
@property(nonatomic) __weak id <SPTSearchKitViewModelProviderDelegate> delegate;
- (void)setQuery:(NSString *)arg1;
@end

