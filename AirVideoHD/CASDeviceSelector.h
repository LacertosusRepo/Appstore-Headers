//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface CASDeviceSelector : NSObject
{
    NSMutableArray *_items;
}

+ (id)stringFromRelation:(long long)arg1;
- (void).cxx_destruct;
- (id)stringValue;
- (_Bool)isValid;
- (long long)relationFromExpression:(id)arg1;
- (id)valueFromExpression:(id)arg1;
- (_Bool)addScreenSize:(id)arg1 dimension:(unsigned long long)arg2;
- (_Bool)addOSVersion:(id)arg1;
- (void)addDeviceType:(long long)arg1;
- (void)addItems:(id)arg1;
@property(readonly, nonatomic) NSArray *items;
- (id)init;

@end

