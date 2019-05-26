//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol EXP_HUBViewModel, SPTBrowseViewModelProviderObserver;

@protocol SPTBrowseViewModelProvider <NSObject>
@property(readonly, nonatomic) unsigned long long state;
@property(readonly, nonatomic) id <EXP_HUBViewModel> viewModel;
- (void)loadNextPage;
- (void)refresh;
- (void)reload;
- (void)removeObserver:(id <SPTBrowseViewModelProviderObserver>)arg1;
- (void)addObserver:(id <SPTBrowseViewModelProviderObserver>)arg1;
@end
