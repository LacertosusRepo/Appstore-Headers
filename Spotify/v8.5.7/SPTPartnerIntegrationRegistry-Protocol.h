//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol SPTPartnerIntegration;

@protocol SPTPartnerIntegrationRegistry <NSObject>
@property(readonly, nonatomic) NSArray *integrations;
- (void)deregisterIntegration:(id <SPTPartnerIntegration>)arg1;
- (void)registerIntegration:(id <SPTPartnerIntegration>)arg1;
- (id <SPTPartnerIntegration>)integrationForIdentifier:(NSString *)arg1;
@end

