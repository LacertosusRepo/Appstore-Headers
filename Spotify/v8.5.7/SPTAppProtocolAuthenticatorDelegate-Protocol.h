//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTAppProtocolAuthenticator;

@protocol SPTAppProtocolAuthenticatorDelegate <NSObject>
- (void)authenticator:(id <SPTAppProtocolAuthenticator>)arg1 didFailWithReason:(NSString *)arg2 description:(NSString *)arg3 andReply:(void (^)(id <SPTWAMPMessage>))arg4;
- (void)authenticationDidSucceedWithAuthenticator:(id <SPTAppProtocolAuthenticator>)arg1 andReply:(void (^)(id <SPTWAMPMessage>))arg2;
@end

