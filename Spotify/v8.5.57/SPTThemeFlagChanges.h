//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface SPTThemeFlagChanges : NSObject
{
    NSSet *_changedFontKeys;
    NSSet *_changedColorKeys;
    NSSet *_changedMetricKeys;
}

@property(retain, nonatomic) NSSet *changedMetricKeys; // @synthesize changedMetricKeys=_changedMetricKeys;
@property(retain, nonatomic) NSSet *changedColorKeys; // @synthesize changedColorKeys=_changedColorKeys;
@property(retain, nonatomic) NSSet *changedFontKeys; // @synthesize changedFontKeys=_changedFontKeys;
- (void).cxx_destruct;

@end

