//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SPTHomeTestManagerObserver <NSObject>

@optional
- (void)homeTestManagerDidChangeBadgeTestEnabledValue:(id <SPTHomeTestManager>)arg1;
- (void)homeTestManagerDidChangeLegacyHomeFeatureEnabledValue:(id <SPTHomeTestManager>)arg1;
- (void)homeTestManagerDidChangeCustomSpaceID:(id <SPTHomeTestManager>)arg1;
- (void)homeTestManagerDidChangeFeatureEnabledValue:(id <SPTHomeTestManager>)arg1;
@end

