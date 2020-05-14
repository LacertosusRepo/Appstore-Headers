//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCarmageddonCarDetectionStateObserver-Protocol.h"
#import "SPTCarmageddonMotionBasedStateDetectorDelegate-Protocol.h"

@class NSString, NSUserDefaults, SPTCarmageddonFeedbackLoader, SPTCarmageddonFeedbackPresenter, SPTCarmageddonMotionBasedStateDetector, SPTCarmageddonMotionDetectionLoaderResult, UIApplication;

@interface SPTCarmageddonFeedbackController : NSObject <SPTCarmageddonCarDetectionStateObserver, SPTCarmageddonMotionBasedStateDetectorDelegate>
{
    SPTCarmageddonMotionBasedStateDetector *_motionBasedCarDetector;
    SPTCarmageddonFeedbackLoader *_feedbackLoader;
    SPTCarmageddonFeedbackPresenter *_surveyPresenter;
    NSUserDefaults *_standardUserDefaults;
    UIApplication *_application;
    SPTCarmageddonMotionDetectionLoaderResult *_predictionResult;
}

@property(retain, nonatomic) SPTCarmageddonMotionDetectionLoaderResult *predictionResult; // @synthesize predictionResult=_predictionResult;
@property(readonly, nonatomic) __weak UIApplication *application; // @synthesize application=_application;
@property(readonly, nonatomic) NSUserDefaults *standardUserDefaults; // @synthesize standardUserDefaults=_standardUserDefaults;
@property(readonly, nonatomic) SPTCarmageddonFeedbackPresenter *surveyPresenter; // @synthesize surveyPresenter=_surveyPresenter;
@property(readonly, nonatomic) SPTCarmageddonFeedbackLoader *feedbackLoader; // @synthesize feedbackLoader=_feedbackLoader;
@property(readonly, nonatomic) SPTCarmageddonMotionBasedStateDetector *motionBasedCarDetector; // @synthesize motionBasedCarDetector=_motionBasedCarDetector;
- (void).cxx_destruct;
- (void)carDetector:(id)arg1 didReceivePredictionResult:(id)arg2;
- (void)carDetector:(id)arg1 carDetectionStateDidChange:(id)arg2;
- (_Bool)hasEnoughTimePassedSinceLastSurveyPresentation;
- (void)saveLastSurveyPresentationTimestamp;
- (_Bool)shouldPresentSurveyWithCarDetectionState:(id)arg1;
- (void)presentSurveyWithCarDetectionState:(id)arg1;
- (id)initWithMotionBasedDetector:(id)arg1 feedbackPresenter:(id)arg2 feedbackLoader:(id)arg3 standardUserDefaults:(id)arg4 application:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

