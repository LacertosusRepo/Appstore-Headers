//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, UIViewController;
@protocol OS_dispatch_queue, SPTNowPlayingManagerObserver;

@protocol SPTNowPlayingManager <NSObject>
@property(nonatomic, getter=isHidden) _Bool hidden;
@property(readonly, nonatomic) UIViewController *nowPlayingViewController;
@property(readonly, nonatomic) _Bool barHidden;
@property(readonly, nonatomic) _Bool shouldHideBar;
- (void)setCurrentToggleMode:(unsigned long long)arg1 animated:(_Bool)arg2;
- (unsigned long long)currentToggleMode;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)removeObserver:(id <SPTNowPlayingManagerObserver>)arg1;
- (void)addObserver:(id <SPTNowPlayingManagerObserver>)arg1 on:(NSObject<OS_dispatch_queue> *)arg2;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;
@end
