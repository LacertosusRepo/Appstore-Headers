//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTYourLibraryViewModel;

@protocol SPTYourLibraryViewModelObserver <NSObject>
- (void)yourLibraryViewModel:(id <SPTYourLibraryViewModel>)arg1 navigateToGroup:(unsigned long long)arg2 index:(unsigned long long)arg3;
- (void)yourLibraryViewModelUpdated:(id <SPTYourLibraryViewModel>)arg1 withActiveGroupIndex:(unsigned long long)arg2 pageIndex:(unsigned long long)arg3;
- (void)yourLibraryViewModelUpdated:(id <SPTYourLibraryViewModel>)arg1;
@end
