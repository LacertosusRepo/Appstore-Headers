//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTNowPlayingTabViewModel;

@protocol SPTNowPlayingTabViewModelDelegate <NSObject>
- (void)tabViewModel:(SPTNowPlayingTabViewModel *)arg1 didChangeSelectedTab:(long long)arg2;
- (void)tabViewModelDidChangeTabs:(SPTNowPlayingTabViewModel *)arg1 canvasTabVisible:(_Bool)arg2 lyricsTabVisible:(_Bool)arg3;
@end

