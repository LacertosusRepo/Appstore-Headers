//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SPTFilePickerFilterBar;

@protocol SPTFilePickerFilterBarDelegate <NSObject>
- (void)filterBarContextButtonTapped:(SPTFilePickerFilterBar *)arg1;
- (void)filterBar:(SPTFilePickerFilterBar *)arg1 textDidChange:(NSString *)arg2;

@optional
- (void)filterBarTextWillEndEditing:(SPTFilePickerFilterBar *)arg1;
- (void)filterBarTextWillBeginEditing:(SPTFilePickerFilterBar *)arg1;
- (void)filterBarTextDidEndEditing:(SPTFilePickerFilterBar *)arg1;
- (void)filterBarTextDidBeginEditing:(SPTFilePickerFilterBar *)arg1;
@end

