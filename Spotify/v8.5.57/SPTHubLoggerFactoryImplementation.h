//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHubLoggerFactory-Protocol.h"

@class NSString;
@protocol SPTLogCenter, SPTPerformanceMetricsViewLoggerFactory, SPTUBIUserBehaviourInstrumentation;

@interface SPTHubLoggerFactoryImplementation : NSObject <SPTHubLoggerFactory>
{
    id <SPTLogCenter> _logCenter;
    id <SPTPerformanceMetricsViewLoggerFactory> _viewLoggerFactory;
    id <SPTUBIUserBehaviourInstrumentation> _userBehaviourInstrumentation;
}

@property(retain, nonatomic) id <SPTUBIUserBehaviourInstrumentation> userBehaviourInstrumentation; // @synthesize userBehaviourInstrumentation=_userBehaviourInstrumentation;
@property(readonly, nonatomic) id <SPTPerformanceMetricsViewLoggerFactory> viewLoggerFactory; // @synthesize viewLoggerFactory=_viewLoggerFactory;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (id)createLoadingLoggerWithPageIdentifier:(id)arg1 pageURI:(id)arg2;
- (id)createInteractionLoggerWithFeatureIdentifier:(id)arg1 pageURI:(id)arg2;
- (id)createImpressionLoggerWithFeatureIdentifier:(id)arg1 pageURI:(id)arg2 componentModelURIResolver:(id)arg3;
- (id)createLoggerWithFeatureIdentifier:(id)arg1 pageIdentifier:(id)arg2 pageURI:(id)arg3 componentModelURIResolver:(id)arg4 viewLogger:(id)arg5;
- (id)createLoggerWithFeatureIdentifier:(id)arg1 pageIdentifier:(id)arg2 pageURI:(id)arg3 componentModelURIResolver:(id)arg4;
- (id)initWithLogCenter:(id)arg1 viewLoggerFactory:(id)arg2 userBehaviourInstrumentation:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

