//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventFactoryLocation, SPTUBIFTFMobileSearch_Content_OnlineResults_TopResults_RecommendationResultsEventFactory, SPTUBIFTFMobileSearch_Content_OnlineResults_TopResults_ResultItemEventFactory, SPTUBIImpressionEvent;

@protocol SPTUBIFTFMobileSearch_Content_OnlineResults_TopResultsEventFactory <NSObject>
- (id <SPTUBIImpressionEvent>)impression;
- (id <SPTUBIFTFMobileSearch_Content_OnlineResults_TopResults_RecommendationResultsEventFactory>)recommendationResultsFactory;
- (id <SPTUBIFTFMobileSearch_Content_OnlineResults_TopResults_ResultItemEventFactory>)resultItemFactoryWithPosition:(long long)arg1 uri:(NSURL *)arg2;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

