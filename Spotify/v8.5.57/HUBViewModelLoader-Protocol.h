//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol HUBViewModelLoaderDelegate;

@protocol HUBViewModelLoader
- (void)loadViewModel;
@property(nonatomic, readonly) _Bool isLoading;
@property(nonatomic) __weak id <HUBViewModelLoaderDelegate> delegate;
@end

