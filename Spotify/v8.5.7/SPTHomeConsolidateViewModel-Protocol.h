//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol EXP_HUBViewModel, SPTHomeConsolidateViewModelDelegate;

@protocol SPTHomeConsolidateViewModel <NSObject>
@property(nonatomic) __weak id <SPTHomeConsolidateViewModelDelegate> viewModelDelegate;
- (void)removeWelcomeHeaderIfRecentlyPlayedIsInModel:(id <EXP_HUBViewModel>)arg1;
@end

