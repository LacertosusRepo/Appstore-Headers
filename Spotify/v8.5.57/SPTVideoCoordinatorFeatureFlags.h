//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAbbaFeatureFlagsObserver-Protocol.h"

@class NSString;
@protocol SPTAbbaFeatureFlags;

@interface SPTVideoCoordinatorFeatureFlags : NSObject <SPTAbbaFeatureFlagsObserver>
{
    _Bool _subtitlesEnabled;
    id <SPTAbbaFeatureFlags> _featureFlags;
}

@property(retain, nonatomic) id <SPTAbbaFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(readonly, nonatomic) _Bool subtitlesEnabled; // @synthesize subtitlesEnabled=_subtitlesEnabled;
- (void).cxx_destruct;
- (void)updateSubtitlesFlag;
- (void)updateFeatureFlags;
- (void)featureFlagsDidChange:(id)arg1;
- (id)initWithFeatureFlags:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

