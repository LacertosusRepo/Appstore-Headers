//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, NSURL;

@protocol SPTUBIEventFactoryLocation <NSObject>
- (NSArray *)eventComponentsWithPageURI:(NSURL *)arg1 pageId:(NSString *)arg2;
@property(nonatomic, readonly) _Bool impressionEnabled;
@property(nonatomic, readonly) NSString *specificationVersion;
@property(nonatomic, readonly) NSString *generatorCommitHash;
@property(nonatomic, readonly) NSString *specificationCommitHash;
@property(nonatomic, readonly) NSString *applicationId;
@end

