//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SPTSearch2ViewModelProvider <NSObject>
@property(readonly, nonatomic) unsigned long long state;
@property(readonly, nonatomic) id <EXP_HUBViewModel> viewModel;
@property(nonatomic) __weak id <SPTSearch2ViewModelProviderDelegate> delegate;
- (void)loadNextPage;
- (void)loadForQuery:(NSString *)arg1;
@end

