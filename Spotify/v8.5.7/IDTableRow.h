//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IDTableRow : NSObject
{
    NSMutableArray *_variants;
}

+ (id)new;
+ (id)rowWithColumns:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)etchObject;
- (_Bool)isEqualToTableRow:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) unsigned long long columns;
- (id)objectEnumerator;
- (id)itemAtColumn:(long long)arg1;
- (void)setItem:(id)arg1 atColumn:(long long)arg2;
- (id)init;
- (id)initWithColumns:(unsigned long long)arg1;

@end
