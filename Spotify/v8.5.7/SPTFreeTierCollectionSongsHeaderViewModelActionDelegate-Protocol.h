//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIViewController;
@protocol SPTFreeTierCollectionSongsHeaderViewModel;

@protocol SPTFreeTierCollectionSongsHeaderViewModelActionDelegate <NSObject>
- (void)songsHeaderViewModel:(id <SPTFreeTierCollectionSongsHeaderViewModel>)arg1 presentSortingFilterPicker:(UIViewController *)arg2;
- (void)songsHeaderViewModel:(id <SPTFreeTierCollectionSongsHeaderViewModel>)arg1 interactionType:(unsigned long long)arg2;
- (void)songsHeaderViewModel:(id <SPTFreeTierCollectionSongsHeaderViewModel>)arg1 textFilter:(NSString *)arg2;
- (void)playActionForSongsHeaderViewModel:(id <SPTFreeTierCollectionSongsHeaderViewModel>)arg1;
@end

