//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTService-Protocol.h"

@class EXP_HUBComponentRegistry, NSString, NSURL;
@protocol SPTFreeTierPersistentCounter;

@protocol SPTFreeTierUIService <SPTService>
- (id <SPTFreeTierPersistentCounter>)providePersistentCounterWithIdentifier:(NSString *)arg1 viewURI:(NSURL *)arg2;
- (EXP_HUBComponentRegistry *)provideHubsComponentRegistry;
@end

