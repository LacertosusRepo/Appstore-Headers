//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;
@protocol SPTFeatureFlagSignal;

@interface SPTRecentlyPlayedTestManager : NSObject
{
    id <SPTFeatureFlagSignal> _freeTierEnabledSignal;
    NSSet *_disallowedContentTypes;
}

@property(retain, nonatomic) NSSet *disallowedContentTypes; // @synthesize disallowedContentTypes=_disallowedContentTypes;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> freeTierEnabledSignal; // @synthesize freeTierEnabledSignal=_freeTierEnabledSignal;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (_Bool)disallowAdditionalContentType:(unsigned long long)arg1;
- (id)initWithFreeTierEnabledSignal:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
