//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableData.h>

@interface NSMutableData (IDZKAdditions)
+ (id)idzk_dataWithLittleInt64:(unsigned long long)arg1;
+ (id)idzk_dataWithLittleInt32:(unsigned int)arg1;
+ (id)idzk_dataWithLittleInt16:(unsigned short)arg1;
- (void)idzk_appendPrecomposedUTF8String:(id)arg1;
- (void)idzk_appendLittleBool:(_Bool)arg1;
- (void)idzk_appendLittleInt64:(unsigned long long)arg1;
- (void)idzk_appendLittleInt32:(unsigned int)arg1;
- (void)idzk_appendLittleInt16:(unsigned short)arg1;
@end

