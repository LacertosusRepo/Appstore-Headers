//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTUniversalWatchCardListContainerDelegate.h"

@class UIView, YTIFormattedString;

@protocol YTUniversalWatchCardViewDelegate <YTUniversalWatchCardListContainerDelegate>
- (_Bool)containsHorizontalCardList;
- (double)heightForHorizontalContainer;
- (double)heightForVerticalContainer;
- (long long)dropdownSelectedOption;
- (void)didSelectDropdownOption:(YTIFormattedString *)arg1 atIndex:(long long)arg2;
- (void)didOpenDropdownMenu:(UIView *)arg1;
- (void)didPressCallToAction:(UIView *)arg1;
- (void)didPressHeaderAvatar:(UIView *)arg1;
@end
