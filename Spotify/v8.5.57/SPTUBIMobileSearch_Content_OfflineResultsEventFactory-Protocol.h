//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventFactoryLocation, SPTUBIImpressionEvent, SPTUBIMobileSearch_Content_OfflineResults_ResultItemEventFactory;

@protocol SPTUBIMobileSearch_Content_OfflineResultsEventFactory <NSObject>
- (id <SPTUBIImpressionEvent>)impression;
- (id <SPTUBIMobileSearch_Content_OfflineResults_ResultItemEventFactory>)resultItemFactoryWithPosition:(long long)arg1 uri:(NSURL *)arg2;
- (id <SPTUBIEventFactoryLocation>)_location;
@end
