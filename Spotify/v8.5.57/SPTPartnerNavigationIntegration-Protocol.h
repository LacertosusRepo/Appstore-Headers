//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTPartnerIntegration-Protocol.h"

@class NSString;
@protocol SPTPartnerNavigationIntegrationObserver;

@protocol SPTPartnerNavigationIntegration <SPTPartnerIntegration>
@property(readonly, copy, nonatomic) NSString *sentToReasonForLogging;
@property(readonly, copy, nonatomic) NSString *appNameForLogging;
@property(readonly, nonatomic, getter=isNavigating) _Bool navigating;
- (void)removeObserver:(id <SPTPartnerNavigationIntegrationObserver>)arg1;
- (void)addObserver:(id <SPTPartnerNavigationIntegrationObserver>)arg1;
- (void)openAppStore;
- (void)openApp;
@end

