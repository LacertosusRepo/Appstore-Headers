//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SPTConnectivityManager <NSObject>
@property _Bool allowNetwork;
@property _Bool allowSyncOver3G;
@property long long connectionType;
- (void)setAllowNetwork:(_Bool)arg1 callback:(void (^)(void))arg2;
- (void)setAllowSyncOver3G:(_Bool)arg1 callback:(void (^)(void))arg2;
- (void)setConnectionType:(long long)arg1 callback:(void (^)(void))arg2;
- (void)invalidate;
@end

