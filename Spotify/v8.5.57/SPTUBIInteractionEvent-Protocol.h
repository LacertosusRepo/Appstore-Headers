//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;

@protocol SPTUBIInteractionEvent <NSObject>
@property(nonatomic, readonly) NSString *specificationVersion;
@property(nonatomic, readonly) NSString *generatorCommitHash;
@property(nonatomic, readonly) NSString *specificationCommitHash;
@property(nonatomic, readonly) NSArray *errors;
@property(nonatomic, readonly) NSDictionary *actionParameters;
@property(nonatomic, readonly) long long actionVersion;
@property(nonatomic, readonly) NSString *action;
@property(nonatomic, readonly) NSArray *components;
@property(nonatomic, readonly) NSString *interactionType;
@property(nonatomic, readonly) NSString *applicationId;
@end

