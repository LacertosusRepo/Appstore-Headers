//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, SPTSearchAutocompleteViewModel;

@protocol SPTSearchAutocompleteViewModelChangeDelegate <NSObject>
- (void)viewModel:(SPTSearchAutocompleteViewModel *)arg1 didChangeWithSuggestions:(NSArray *)arg2;
@end
