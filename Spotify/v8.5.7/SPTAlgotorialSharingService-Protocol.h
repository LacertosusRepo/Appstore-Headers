//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTService-Protocol.h"

@class NSDictionary, NSURL;

@protocol SPTAlgotorialSharingService <SPTService>
- (void)registerAlgotorialLinkForSpotifyURI:(NSURL *)arg1 queryParameters:(NSDictionary *)arg2 completion:(void (^)(void))arg3;
- (_Bool)requiresAlgotorialRegistration:(NSURL *)arg1 queryParameters:(NSDictionary *)arg2;
@end

