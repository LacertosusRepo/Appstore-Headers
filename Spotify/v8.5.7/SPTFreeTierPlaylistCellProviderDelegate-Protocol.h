//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, UIView;
@protocol SPTFreeTierPlaylistCellProvider;

@protocol SPTFreeTierPlaylistCellProviderDelegate <NSObject>
- (void)cellProvider:(id <SPTFreeTierPlaylistCellProvider>)arg1 playTrackAtIndexPath:(NSIndexPath *)arg2;
- (void)contextMenuPressedForCellProvider:(id <SPTFreeTierPlaylistCellProvider>)arg1 sender:(UIView *)arg2;
@end

