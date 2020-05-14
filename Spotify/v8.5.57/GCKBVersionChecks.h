//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface GCKBVersionChecks : NSObject
{
    NSArray *_targetVersionSegments;
    NSArray *_systemVersionSegments;
    unsigned long long _operatorType;
}

+ (_Bool)segmentsAreZero:(id)arg1 startingAt:(int)arg2;
+ (_Bool)targetSystemVersion:(id)arg1 isValidForOperator:(unsigned long long)arg2;
+ (_Bool)matchVersion:(id)arg1 againstQualifier:(id)arg2;
+ (_Bool)matchVersion:(id)arg1 againstVersionSpec:(id)arg2;
+ (_Bool)isSystemVersionAtMost:(id)arg1;
+ (_Bool)isSystemVersionLessThan:(id)arg1;
+ (_Bool)isSystemVersionAtLeast:(id)arg1;
+ (_Bool)isSystemVersionGreaterThan:(id)arg1;
+ (_Bool)isSystemVersionEqualTo:(id)arg1;
@property(nonatomic) unsigned long long operatorType; // @synthesize operatorType=_operatorType;
@property(retain, nonatomic) NSArray *systemVersionSegments; // @synthesize systemVersionSegments=_systemVersionSegments;
@property(retain, nonatomic) NSArray *targetVersionSegments; // @synthesize targetVersionSegments=_targetVersionSegments;
- (void).cxx_destruct;
- (int)targetVersionSegmentCount;
- (int)systemVersionSegmentCount;
- (id)initWithTargetVersion:(id)arg1 usingOperator:(unsigned long long)arg2;

@end

