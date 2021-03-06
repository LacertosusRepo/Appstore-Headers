//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIView;
@protocol SPTSearchSearchBarProtocol;

@protocol SPTSearchSearchBarDelegate <NSObject>
- (void)searchBarSearchButtonClicked:(UIView<SPTSearchSearchBarProtocol> *)arg1;
- (void)searchBar:(UIView<SPTSearchSearchBarProtocol> *)arg1 textDidChange:(NSString *)arg2;
- (_Bool)searchBarShouldEndEditing:(UIView<SPTSearchSearchBarProtocol> *)arg1;
- (_Bool)searchBarShouldBeginEditing:(UIView<SPTSearchSearchBarProtocol> *)arg1;
- (void)searchBarCancelButtonClicked:(UIView<SPTSearchSearchBarProtocol> *)arg1;
@end

