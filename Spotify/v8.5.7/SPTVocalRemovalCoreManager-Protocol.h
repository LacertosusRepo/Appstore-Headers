//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTVocalRemovalCoreManager <NSObject>
@property(nonatomic) unsigned long long volume;
@property(readonly, nonatomic) _Bool isVocalRemovalEnabled;
- (void)setVocalRemovalEnabled:(_Bool)arg1 completion:(void (^)(_Bool))arg2;
@end
