//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeedbackTestManager-Protocol.h"

@class NSString, SPTFeedbackFeatureFlagSignalObserver;
@protocol SPTFeatureFlagFactory, SPTLocalSettings, SPTProductState;

@interface SPTFeedbackTestManagerImplementation : NSObject <SPTFeedbackTestManager>
{
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTProductState> _productState;
    id <SPTLocalSettings> _localSettings;
    SPTFeedbackFeatureFlagSignalObserver *_feedbackV2SignalObserver;
}

@property(retain, nonatomic) SPTFeedbackFeatureFlagSignalObserver *feedbackV2SignalObserver; // @synthesize feedbackV2SignalObserver=_feedbackV2SignalObserver;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isDiscoverWeeklyV2FeedbackLoggingEnabled) _Bool discoverWeeklyV2FeedbackLoggingEnabled;
- (void)setupFeedbackFeatureFlags;
- (id)initWithFeatureFlagFactory:(id)arg1 productState:(id)arg2 localSettings:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

