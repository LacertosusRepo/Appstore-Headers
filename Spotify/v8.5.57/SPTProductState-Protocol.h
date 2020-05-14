//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSObject, NSString;
@protocol OS_dispatch_queue, SPTProductStateObserver;

@protocol SPTProductState <NSObject>
@property(nonatomic) __weak NSDictionary *overrides;
@property(nonatomic) __weak NSDictionary *originalValues;
@property(readonly, nonatomic) __weak NSDictionary *values;
- (void)writeStringToBackend:(NSString *)arg1 forKey:(NSString *)arg2;
- (NSString *)objectForKeyedSubscript:(NSString *)arg1;
- (NSString *)stringForKey:(NSString *)arg1;
- (void)removeObserver:(id <SPTProductStateObserver>)arg1;
- (void)addObserver:(id <SPTProductStateObserver>)arg1 on:(NSObject<OS_dispatch_queue> *)arg2;
@end

