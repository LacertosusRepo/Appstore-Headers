//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC22ConnectUIV2FeatureImplP33_00F3E623AB0636A3F7A256988F7C2BD734EventFactoryLocationImplementation : NSObject
{
    MISSING_TYPE *applicationId;
    MISSING_TYPE *specificationId;
    MISSING_TYPE *specificationVersion;
    MISSING_TYPE *pageReason;
    MISSING_TYPE *specificationCommitHash;
    MISSING_TYPE *generatorCommitHash;
    MISSING_TYPE *components;
    MISSING_TYPE *impressionEnabled;
}

- (void).cxx_destruct;
- (id)init;
- (id)eventComponentsWithPageURI:(id)arg1 pageId:(id)arg2;
@property(nonatomic, readonly) _Bool impressionEnabled; // @synthesize impressionEnabled;
@property(nonatomic, readonly) NSString *generatorCommitHash;
@property(nonatomic, readonly) NSString *specificationCommitHash;
@property(nonatomic, readonly) NSString *specificationVersion;
@property(nonatomic, readonly) NSString *applicationId;

@end

