//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SPTFreeTierCollectionFilterBarViewController;

@protocol SPTFreeTierCollectionFilterBarViewControllerDelegate <NSObject>
- (void)freeTierFilterSearchBarContextButtonTapped:(SPTFreeTierCollectionFilterBarViewController *)arg1;
- (void)freeTierFilterSearchBar:(SPTFreeTierCollectionFilterBarViewController *)arg1 textDidChange:(NSString *)arg2;

@optional
- (void)freeTierFilterSearchBar:(SPTFreeTierCollectionFilterBarViewController *)arg1 didSelectFilterRuleAtIndex:(long long)arg2;
- (void)freeTierFilterSearchBarTextWillEndEditing:(SPTFreeTierCollectionFilterBarViewController *)arg1;
- (void)freeTierFilterSearchBarTextWillBeginEditing:(SPTFreeTierCollectionFilterBarViewController *)arg1;
- (void)freeTierFilterSearchBarTextDidEndEditing:(SPTFreeTierCollectionFilterBarViewController *)arg1;
- (void)freeTierFilterSearchBarTextDidBeginEditing:(SPTFreeTierCollectionFilterBarViewController *)arg1;
@end

