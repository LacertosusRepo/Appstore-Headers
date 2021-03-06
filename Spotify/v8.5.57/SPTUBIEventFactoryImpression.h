//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIImpressionEvent-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIEventFactoryImpression : NSObject <SPTUBIImpressionEvent>
{
    NSString *_applicationId;
    NSArray *_components;
    NSArray *_errors;
    NSString *_specificationCommitHash;
    NSString *_generatorCommitHash;
    NSString *_specificationVersion;
}

@property(readonly, copy, nonatomic) NSString *specificationVersion; // @synthesize specificationVersion=_specificationVersion;
@property(readonly, copy, nonatomic) NSString *generatorCommitHash; // @synthesize generatorCommitHash=_generatorCommitHash;
@property(readonly, copy, nonatomic) NSString *specificationCommitHash; // @synthesize specificationCommitHash=_specificationCommitHash;
@property(readonly, copy, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(readonly, copy, nonatomic) NSArray *components; // @synthesize components=_components;
@property(readonly, copy, nonatomic) NSString *applicationId; // @synthesize applicationId=_applicationId;
- (void).cxx_destruct;
- (id)initWithApplicationId:(id)arg1 specificationCommitHash:(id)arg2 specificationVersion:(id)arg3 components:(id)arg4 errors:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

