//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
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

