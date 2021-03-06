//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView, UIViewController;
@protocol SPTFreeTierPlaylistBarButtonManagerDelegate, SPTFreeTierPlaylistDefaultHeaderViewModel, SPTFreeTierPlaylistFollowViewModel, SPTFreeTierPlaylistFullbleedHeaderViewModel, SPTFreeTierPlaylistHeader><SPTEntityHeaderContentController, SPTFreeTierPlaylistPlayViewModel;

@protocol SPTFreeTierPlaylistHeaderProvider <NSObject>
@property(readonly, nonatomic) _Bool drawBottomLineLayer;
@property(readonly, nonatomic) _Bool drawDropShadow;
- (UIViewController<SPTFreeTierPlaylistHeader><SPTEntityHeaderContentController> *)provideHeader;
- (void)configureBarButtonManagerDelegate:(id <SPTFreeTierPlaylistBarButtonManagerDelegate>)arg1;
- (void)configureWithPlayViewModel:(id <SPTFreeTierPlaylistPlayViewModel>)arg1 followViewModel:(id <SPTFreeTierPlaylistFollowViewModel>)arg2 defaultHeaderViewModel:(id <SPTFreeTierPlaylistDefaultHeaderViewModel>)arg3 fullbleedHeaderViewModel:(id <SPTFreeTierPlaylistFullbleedHeaderViewModel>)arg4 filterSortBarView:(UIView *)arg5;
@end

