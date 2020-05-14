//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SPTCollectionFiltering <NSObject>
@property(nonatomic) _Bool showsOnlyOfflinedContent;
@property(readonly, nonatomic, getter=isContentFiltered) _Bool contentFiltered;
@property(copy, nonatomic) NSString *textFilter;
- (void)resetFilters;
@end
