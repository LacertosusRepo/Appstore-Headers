//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol SPTOnboardingServiceFlowStateReporter;

@interface _TtC24PodcastOnboardingFeature32PodcastOnboardingFlowCoordinator : NSObject
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *modalPresentationController;
    MISSING_TYPE *networkConnectivityController;
    MISSING_TYPE *topicPickerTheme;
    MISSING_TYPE *sendTopicsTheme;
    MISSING_TYPE *presentationMode;
    MISSING_TYPE *navigationController;
    MISSING_TYPE *podcastCurationMode;
    MISSING_TYPE *curationManager;
    MISSING_TYPE *dataLoaderFactory;
    MISSING_TYPE *userDefaultsController;
    MISSING_TYPE *logCenter;
    MISSING_TYPE *viewLoggerFactory;
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)startOnboardingFlow;
@property(nonatomic) __weak id <SPTOnboardingServiceFlowStateReporter> delegate; // @synthesize delegate;

@end
