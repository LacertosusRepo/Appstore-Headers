//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTPreSignupExperimentationFeatureFlagsLoader;

@interface SPTLoginTestManager : NSObject
{
    id <SPTPreSignupExperimentationFeatureFlagsLoader> _featureFlagsLoader;
}

@property(readonly, nonatomic) id <SPTPreSignupExperimentationFeatureFlagsLoader> featureFlagsLoader; // @synthesize featureFlagsLoader=_featureFlagsLoader;
- (void).cxx_destruct;
- (_Bool)isFlagEnabled:(id)arg1;
- (id)initWithFeatureFlagsLoader:(id)arg1;

@end
