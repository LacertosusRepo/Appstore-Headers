//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPaletteFiltering-Protocol.h"

@class NSString;

@interface SPTPaletteFilter : NSObject <SPTPaletteFiltering>
{
    CDUnknownBlockType _filterBlock;
}

+ (id)defaultFilter;
@property(readonly, copy, nonatomic) CDUnknownBlockType filterBlock; // @synthesize filterBlock=_filterBlock;
- (void).cxx_destruct;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

