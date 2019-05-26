//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTConcertsEntity;
@protocol SPTConcertsEntityResolver, SPTConcertsResolverToken;

@protocol SPTConcertsEntityResolverDelegate <NSObject>
- (void)entityResolver:(id <SPTConcertsEntityResolver>)arg1 didEncounterError:(NSError *)arg2 forToken:(id <SPTConcertsResolverToken>)arg3;
- (void)entityResolver:(id <SPTConcertsEntityResolver>)arg1 didCancelForToken:(id <SPTConcertsResolverToken>)arg2;
- (void)entityResolver:(id <SPTConcertsEntityResolver>)arg1 didResolveEntity:(SPTConcertsEntity *)arg2 forToken:(id <SPTConcertsResolverToken>)arg3;
@end

