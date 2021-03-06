//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTServiceList.h"

@class NSDictionary, NSString;

@interface SPTServiceListImplementation : NSObject <SPTServiceList>
{
    NSDictionary *_configuredFeatures;
}

+ (id)scopeMap;
@property(copy, nonatomic) NSDictionary *configuredFeatures; // @synthesize configuredFeatures=_configuredFeatures;
- (void).cxx_destruct;
- (id)readConfiguration:(id)arg1;
- (void)configuration:(id)arg1 addFeatureClass:(Class)arg2 scope:(id)arg3;
- (long long)scopeFromString:(id)arg1;
- (id)stringFromScope:(long long)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)serviceClassesForScope:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

