//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIView;
@protocol SPTInstrumentationInteractionInformation;

@protocol SPTInstrumentationMapper <NSObject>
- (NSString *)keyForInformation:(id <SPTInstrumentationInteractionInformation>)arg1;
- (void)setMappingBlock:(NSString * (^)(UIView *))arg1 forView:(UIView *)arg2;
- (void)setMappingBlock:(NSString * (^)(UIView *))arg1 forClass:(Class)arg2;
- (void)setKey:(NSString *)arg1 forView:(UIView *)arg2;
- (void)setKey:(NSString *)arg1 forClass:(Class)arg2;
@end

