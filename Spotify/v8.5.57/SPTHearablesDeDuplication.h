//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHearablesRecommendationEngine-Protocol.h"

@class NSMutableArray, NSString;
@protocol SPTHearablesRecommendationEngine;

@interface SPTHearablesDeDuplication : NSObject <SPTHearablesRecommendationEngine>
{
    NSMutableArray *_previousRecommendations;
    id <SPTHearablesRecommendationEngine> _recommendationEngine;
}

@property(readonly, nonatomic) id <SPTHearablesRecommendationEngine> recommendationEngine; // @synthesize recommendationEngine=_recommendationEngine;
@property(retain, nonatomic) NSMutableArray *previousRecommendations; // @synthesize previousRecommendations=_previousRecommendations;
- (void).cxx_destruct;
- (void)fetchRecommendationWithSessionIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addNewRecommendation:(id)arg1;
- (id)initWithEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
