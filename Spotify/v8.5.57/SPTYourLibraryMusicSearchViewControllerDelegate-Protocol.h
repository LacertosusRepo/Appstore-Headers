//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SPTYourLibraryMusicSearchViewController;

@protocol SPTYourLibraryMusicSearchViewControllerDelegate <NSObject>
- (void)searchViewController:(SPTYourLibraryMusicSearchViewController *)arg1 removedFilterAtIndex:(long long)arg2;
- (void)searchViewControllerDidCancel:(SPTYourLibraryMusicSearchViewController *)arg1;
- (void)searchViewController:(SPTYourLibraryMusicSearchViewController *)arg1 textDidChange:(NSString *)arg2;
@end
