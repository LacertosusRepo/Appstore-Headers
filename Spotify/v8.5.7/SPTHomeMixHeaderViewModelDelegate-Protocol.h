//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTHomeMixHeaderViewModel;

@protocol SPTHomeMixHeaderViewModelDelegate <NSObject>
- (void)headerViewModelShouldResetJoinButton:(SPTHomeMixHeaderViewModel *)arg1;
- (void)headerViewModel:(SPTHomeMixHeaderViewModel *)arg1 shouldShowMoodChangedTooltip:(unsigned long long)arg2;
- (void)headerViewModel:(SPTHomeMixHeaderViewModel *)arg1 didChangeToDisplayMode:(unsigned long long)arg2;
- (void)headerViewModelDidRequestButtonRefresh:(SPTHomeMixHeaderViewModel *)arg1;
@end

