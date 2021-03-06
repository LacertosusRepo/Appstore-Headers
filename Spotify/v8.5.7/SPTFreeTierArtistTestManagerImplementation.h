//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierArtistTestManager-Protocol.h"

@class NSString;
@protocol SPTFeatureFlagFactory, SPTFeatureFlagSignal;

@interface SPTFreeTierArtistTestManagerImplementation : NSObject <SPTFreeTierArtistTestManager>
{
    _Bool _isBanArtistActionDisabled;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTFeatureFlagSignal> _newExperienceEnabledSignal;
    id <SPTFeatureFlagSignal> _banArtistActionDisabledSignal;
}

@property(nonatomic) _Bool isBanArtistActionDisabled; // @synthesize isBanArtistActionDisabled=_isBanArtistActionDisabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> banArtistActionDisabledSignal; // @synthesize banArtistActionDisabledSignal=_banArtistActionDisabledSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> newExperienceEnabledSignal; // @synthesize newExperienceEnabledSignal=_newExperienceEnabledSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)setupBanArtistActionDisabledFlag:(id)arg1;
- (void)setupFlags;
- (id)initWithFeatureFlagFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

