//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSError;
@protocol HUBViewModel, HUBViewModelLoader;

@protocol HUBViewModelLoaderDelegate
- (void)viewModelLoader:(id <HUBViewModelLoader>)arg1 didFailLoadingWithError:(NSError *)arg2;
- (void)viewModelLoader:(id <HUBViewModelLoader>)arg1 didLoadViewModel:(id <HUBViewModel>)arg2;
@end

