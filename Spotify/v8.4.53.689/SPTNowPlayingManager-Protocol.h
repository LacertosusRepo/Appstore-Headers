//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, UIViewController;

@protocol SPTNowPlayingManager <NSObject>
@property(nonatomic, getter=isHidden) _Bool hidden;
@property(readonly, nonatomic) UIViewController *nowPlayingViewController;
@property(readonly, nonatomic) _Bool barHidden;
- (void)setCurrentToggleMode:(unsigned long long)arg1 animated:(_Bool)arg2;
- (unsigned long long)currentToggleMode;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)removeObserver:(id <SPTNowPlayingManagerObserver>)arg1;
- (void)addObserver:(id <SPTNowPlayingManagerObserver>)arg1 on:(NSObject<OS_dispatch_queue> *)arg2;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;
@end

