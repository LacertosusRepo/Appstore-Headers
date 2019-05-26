//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol SPTTableContext;

@interface SPTTableSectionAdapter : NSObject
{
    id <SPTTableContext> _tableContext;
    long long _section;
    NSArray *_rowAdapters;
}

@property(copy, nonatomic) NSArray *rowAdapters; // @synthesize rowAdapters=_rowAdapters;
@property(nonatomic) long long section; // @synthesize section=_section;
@property(nonatomic) __weak id <SPTTableContext> tableContext; // @synthesize tableContext=_tableContext;
- (void).cxx_destruct;
- (id)initWithRowAdapters:(id)arg1;

@end

