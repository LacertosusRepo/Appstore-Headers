//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol EXP_HUBViewModelLoaderDelegate;

@protocol EXP_HUBViewModelLoader
@property(readonly, nonatomic) _Bool isLoading;
@property(nonatomic) __weak id <EXP_HUBViewModelLoaderDelegate> delegate;
- (void)loadViewModel;
@end

