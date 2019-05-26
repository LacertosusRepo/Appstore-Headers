//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTFeatureFlagSignalImplementation.h"

#import "SPTAbbaFeatureFlagsObserver-Protocol.h"

@class NSString;
@protocol SPTAbbaFeatureFlags;

@interface SPTAbbaFeatureFlagSignal : SPTFeatureFlagSignalImplementation <SPTAbbaFeatureFlagsObserver>
{
    id <SPTAbbaFeatureFlags> _abbaFeatureFlags;
    NSString *_key;
    CDUnknownBlockType _mapper;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType mapper; // @synthesize mapper=_mapper;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) id <SPTAbbaFeatureFlags> abbaFeatureFlags; // @synthesize abbaFeatureFlags=_abbaFeatureFlags;
- (void).cxx_destruct;
- (void)logExposure;
- (void)featureFlagsDidChange:(id)arg1;
- (long long)calculateState;
- (void)updateValue;
- (void)dealloc;
- (id)initWithAbbaFeatureFlags:(id)arg1 key:(id)arg2 mapper:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
