//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NSObject (SPTAllocationContext)
+ (id)spt_allocWithAnnotation:(id)arg1;
+ (id)spt_allocInContext:(id)arg1;
+ (id)spt_allocInContext:(id)arg1 withAnnotation:(id)arg2;
@property(readonly, copy, getter=spt_allocationContextAnnotation) NSString *allocationContextAnnotation;
@end

