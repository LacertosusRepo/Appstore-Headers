//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTService-Protocol.h"

@class NSDictionary, NSString, NSURL;
@protocol SPTEntitySeeAllSongsRegistry, SPTHubInteractionLogger;

@protocol SPTEntitySeeAllSongsService <SPTService>
- (NSDictionary *)createCommandHandlersWithViewURI:(NSURL *)arg1 referrerIdentifier:(NSString *)arg2 interactionLogger:(id <SPTHubInteractionLogger>)arg3;
- (id <SPTEntitySeeAllSongsRegistry>)provideRegistry;
@end

