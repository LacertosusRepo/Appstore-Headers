//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSDictionary, NSString;

@interface _TtC25SocialOnDemandFeatureImplP33_543F3E4758592B95B03FA3004DB40BBD30InteractionEventImplementation : NSObject
{
    MISSING_TYPE *applicationId;
    MISSING_TYPE *specificationId;
    MISSING_TYPE *specificationVersion;
    MISSING_TYPE *specificationCommitHash;
    MISSING_TYPE *generatorCommitHash;
    MISSING_TYPE *interactionType;
    MISSING_TYPE *components;
    MISSING_TYPE *action;
    MISSING_TYPE *actionVersion;
    MISSING_TYPE *actionParameters;
    MISSING_TYPE *errors;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSArray *errors;
@property(nonatomic, readonly) NSDictionary *actionParameters;
@property(nonatomic, readonly) long long actionVersion; // @synthesize actionVersion;
@property(nonatomic, readonly) NSString *action;
@property(nonatomic, readonly) NSArray *components;
@property(nonatomic, readonly) NSString *interactionType;
@property(nonatomic, readonly) NSString *generatorCommitHash;
@property(nonatomic, readonly) NSString *specificationCommitHash;
@property(nonatomic, readonly) NSString *specificationVersion;
@property(nonatomic, readonly) NSString *applicationId;

@end

