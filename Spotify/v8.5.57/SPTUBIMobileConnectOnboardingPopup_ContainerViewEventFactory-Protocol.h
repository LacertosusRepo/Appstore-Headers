//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTUBIEventFactoryLocation, SPTUBIImpressionEvent, SPTUBIMobileConnectOnboardingPopup_ContainerView_CloseEventFactory, SPTUBIMobileConnectOnboardingPopup_ContainerView_LaterButtonEventFactory, SPTUBIMobileConnectOnboardingPopup_ContainerView_ListenNowButtonEventFactory;

@protocol SPTUBIMobileConnectOnboardingPopup_ContainerViewEventFactory <NSObject>
- (id <SPTUBIImpressionEvent>)impression;
- (id <SPTUBIMobileConnectOnboardingPopup_ContainerView_CloseEventFactory>)closeFactoryWithReason:(NSString *)arg1;
- (id <SPTUBIMobileConnectOnboardingPopup_ContainerView_LaterButtonEventFactory>)laterButtonFactory;
- (id <SPTUBIMobileConnectOnboardingPopup_ContainerView_ListenNowButtonEventFactory>)listenNowButtonFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end
