//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTFreeTierPlaylistHeaderView, UIView;

@protocol SPTFreeTierPlaylistHeaderConfigurator <NSObject>
@property(readonly, nonatomic) UIView *navigationTitleView;
- (void)headerDidScroll;
- (void)headerDidAppear;
- (UIView *)supplementaryView;
- (void)updateHeaderView:(SPTFreeTierPlaylistHeaderView *)arg1;
- (SPTFreeTierPlaylistHeaderView *)createHeaderView;
@end

