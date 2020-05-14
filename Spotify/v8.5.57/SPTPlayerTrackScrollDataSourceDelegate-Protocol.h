//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SPTPlayerTrackScrollDataSource;
@protocol SPTPlayerTrackScrollPageView;

@protocol SPTPlayerTrackScrollDataSourceDelegate <NSObject>
- (id <SPTPlayerTrackScrollPageView>)playerTrackScrollDataSource:(SPTPlayerTrackScrollDataSource *)arg1 pageViewWithFrame:(struct CGRect)arg2 reuseIdentifier:(NSString *)arg3;

@optional
- (void)playerTrackScrollDataSource:(SPTPlayerTrackScrollDataSource *)arg1 configurePageView:(id <SPTPlayerTrackScrollPageView>)arg2 atRelativeIndex:(long long)arg3;
@end

