//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;
@protocol SPTNowPlayingNavigationBarModelObserver;

@protocol SPTNowPlayingNavigationBarModel <NSObject>
@property(nonatomic) _Bool shouldDisableRightBarButton;
@property(nonatomic) _Bool shouldDisableNavBarButtons;
@property(readonly, nonatomic) _Bool isEntityRadio;
@property(readonly, nonatomic) NSString *showsFormatNavigationBarTitle;
@property(readonly, nonatomic) NSString *navigationBarSubtitle;
@property(readonly, nonatomic) NSString *navigationBarTitle;
@property(readonly, nonatomic) NSURL *entityClickURI;
@property(readonly, copy, nonatomic) NSString *entityTimerDescription;
@property(readonly, copy, nonatomic) NSString *entityDescription;
@property(readonly, copy, nonatomic) NSString *entityName;
@property(readonly, nonatomic) NSURL *contextURI;
- (void)removeObserver:(id <SPTNowPlayingNavigationBarModelObserver>)arg1;
- (void)addObserver:(id <SPTNowPlayingNavigationBarModelObserver>)arg1;
@end

