//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol HUBViewModel, SPTSearch2ViewModelProviderDelegate;

@protocol SPTSearch2ViewModelProvider <NSObject>
@property(readonly, nonatomic) unsigned long long state;
@property(readonly, nonatomic) id <HUBViewModel> viewModel;
@property(nonatomic) __weak id <SPTSearch2ViewModelProviderDelegate> delegate;
- (void)loadNextPage;
- (void)loadForQuery:(NSString *)arg1;
@end

