//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTYourLibraryTestManager-Protocol.h"

@class NSString;
@protocol SPTFeatureFlagFactory, SPTFeatureFlagSignal, SPTFreeTierTestManager;

@interface SPTYourLibraryTestManagerImplementation : NSObject <SPTYourLibraryTestManager>
{
    _Bool _doubleTabYourLibraryEnabled;
    _Bool _newExperienceEnabled;
    _Bool _persistActiveTabEnabled;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTFeatureFlagSignal> _doubleTabYourLibraryEnabledSignal;
    id <SPTFeatureFlagSignal> _dynamicDoubleTabYourLibraryEnabledSignal;
    id <SPTFeatureFlagSignal> _newExperienceEnabledSignal;
    id <SPTFreeTierTestManager> _freeTierTestManager;
    id <SPTFeatureFlagSignal> _persistActiveTabEnabledSignal;
    NSString *_persistActiveTabRawValue;
}

@property(copy, nonatomic) NSString *persistActiveTabRawValue; // @synthesize persistActiveTabRawValue=_persistActiveTabRawValue;
@property(nonatomic, getter=isPersistActiveTabEnabled) _Bool persistActiveTabEnabled; // @synthesize persistActiveTabEnabled=_persistActiveTabEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> persistActiveTabEnabledSignal; // @synthesize persistActiveTabEnabledSignal=_persistActiveTabEnabledSignal;
@property(nonatomic) _Bool newExperienceEnabled; // @synthesize newExperienceEnabled=_newExperienceEnabled;
@property(readonly, nonatomic) id <SPTFreeTierTestManager> freeTierTestManager; // @synthesize freeTierTestManager=_freeTierTestManager;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> newExperienceEnabledSignal; // @synthesize newExperienceEnabledSignal=_newExperienceEnabledSignal;
@property(nonatomic, getter=isDoubleTabYourLibraryEnabled) _Bool doubleTabYourLibraryEnabled; // @synthesize doubleTabYourLibraryEnabled=_doubleTabYourLibraryEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> dynamicDoubleTabYourLibraryEnabledSignal; // @synthesize dynamicDoubleTabYourLibraryEnabledSignal=_dynamicDoubleTabYourLibraryEnabledSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> doubleTabYourLibraryEnabledSignal; // @synthesize doubleTabYourLibraryEnabledSignal=_doubleTabYourLibraryEnabledSignal;
@property(retain, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)setupPersistActiveTabSignal;
- (void)setupMusicPodcastYourLibrarySignal;
- (id)initWithFeatureFlagFactory:(id)arg1 newExperienceEnabledSignal:(id)arg2 freeTierTestManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
