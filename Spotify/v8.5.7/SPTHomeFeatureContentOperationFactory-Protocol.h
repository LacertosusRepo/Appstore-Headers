//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;
@protocol EXP_HUBContentOperation;

@protocol SPTHomeFeatureContentOperationFactory <NSObject>
- (id <EXP_HUBContentOperation>)createCachedContentOperation;
- (id <EXP_HUBContentOperation>)createRemoteContentOperationWithSourceIdentifier:(NSString *)arg1 contentURL:(NSURL *)arg2;
@end

