//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIFTFMobileSearch_Content_ErrorEventFactory, SPTUBIFTFMobileSearch_Content_OfflineResultsEventFactory, SPTUBIFTFMobileSearch_Content_OnlineResultsEventFactory, SPTUBIFTFMobileSearch_Content_RecentsEventFactory, SPTUBIImpressionEvent;

@protocol SPTUBIFTFMobileSearch_ContentEventFactory <NSObject>
- (id <SPTUBIImpressionEvent>)impression;
- (id <SPTUBIFTFMobileSearch_Content_ErrorEventFactory>)errorFactory;
- (id <SPTUBIFTFMobileSearch_Content_OfflineResultsEventFactory>)offlineResultsFactory;
- (id <SPTUBIFTFMobileSearch_Content_OnlineResultsEventFactory>)onlineResultsFactory;
- (id <SPTUBIFTFMobileSearch_Content_RecentsEventFactory>)recentsFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end
