//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SPTYourLibraryMusicFilterBarViewController;

@protocol SPTYourLibraryMusicFilterBarViewControllerDelegate <NSObject>
- (void)freeTierFilterSearchBarContextButtonTapped:(SPTYourLibraryMusicFilterBarViewController *)arg1;
- (void)freeTierFilterSearchBar:(SPTYourLibraryMusicFilterBarViewController *)arg1 textDidChange:(NSString *)arg2;

@optional
- (void)freeTierFilterSearchBar:(SPTYourLibraryMusicFilterBarViewController *)arg1 didSelectFilterRuleAtIndex:(long long)arg2;
- (void)freeTierFilterSearchBarTextWillEndEditing:(SPTYourLibraryMusicFilterBarViewController *)arg1;
- (void)freeTierFilterSearchBarTextWillBeginEditing:(SPTYourLibraryMusicFilterBarViewController *)arg1;
- (void)freeTierFilterSearchBarTextDidEndEditing:(SPTYourLibraryMusicFilterBarViewController *)arg1;
- (void)freeTierFilterSearchBarTextDidBeginEditing:(SPTYourLibraryMusicFilterBarViewController *)arg1;
@end

