//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (GCKAdditions)
- (void)gck_setBoolValue:(_Bool)arg1 forKey:(id)arg2;
- (void)gck_setDoubleValue:(double)arg1 forKey:(id)arg2;
- (void)gck_setUIntegerValue:(unsigned long long)arg1 forKey:(id)arg2;
- (void)gck_setIntegerValue:(long long)arg1 forKey:(id)arg2;
- (void)gck_setStringValue:(id)arg1 forKey:(id)arg2;
- (id)gck_arrayForKey:(id)arg1;
- (id)gck_dictionaryForKey:(id)arg1;
- (_Bool)gck_boolForKey:(id)arg1;
- (_Bool)gck_boolForKey:(id)arg1 withDefaultValue:(_Bool)arg2;
- (double)gck_doubleForKey:(id)arg1;
- (double)gck_doubleForKey:(id)arg1 withDefaultValue:(double)arg2;
- (unsigned long long)gck_uintegerForKey:(id)arg1;
- (long long)gck_integerForKey:(id)arg1;
- (unsigned long long)gck_uintegerForKey:(id)arg1 withDefaultValue:(unsigned long long)arg2;
- (long long)gck_integerForKey:(id)arg1 withDefaultValue:(long long)arg2;
- (id)gck_stringForKey:(id)arg1;
- (id)gck_stringForKey:(id)arg1 withDefaultValue:(id)arg2;
@end

