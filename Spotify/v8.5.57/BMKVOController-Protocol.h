//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol BMKVOController <NSObject>
- (void)unobserveAll;
- (void)unobserve:(id)arg1;
- (void)unobserve:(id)arg1 keyPath:(NSString *)arg2;
- (void)observe:(id)arg1 keyPaths:(NSArray *)arg2 options:(unsigned long long)arg3 action:(SEL)arg4;
- (void)observe:(id)arg1 keyPath:(NSString *)arg2 options:(unsigned long long)arg3 action:(SEL)arg4;
- (void)observe:(id)arg1 keyPaths:(NSArray *)arg2 options:(unsigned long long)arg3 block:(void (^)(id, id, NSDictionary *))arg4;
- (void)observe:(id)arg1 keyPath:(NSString *)arg2 options:(unsigned long long)arg3 block:(void (^)(id, id, NSDictionary *))arg4;
@end

