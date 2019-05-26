//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SPTFeedFilter : NSObject
{
    _Bool _filterSelected;
    unsigned long long _filterType;
    NSString *_filterTitle;
    NSString *_filterKeyName;
}

+ (id)filterTypeMapping;
@property(copy, nonatomic) NSString *filterKeyName; // @synthesize filterKeyName=_filterKeyName;
@property(copy, nonatomic) NSString *filterTitle; // @synthesize filterTitle=_filterTitle;
@property(nonatomic) _Bool filterSelected; // @synthesize filterSelected=_filterSelected;
@property(nonatomic) unsigned long long filterType; // @synthesize filterType=_filterType;
- (void).cxx_destruct;
- (void)processDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

