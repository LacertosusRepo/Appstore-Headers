//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary;
@protocol SPTAppProtocolConnection, SPTWAMPMessage;

@protocol SPTAppProtocolConnectionOutput <NSObject>
- (void)connection:(id <SPTAppProtocolConnection>)arg1 didReceiveMessage:(id <SPTWAMPMessage>)arg2 userInfo:(NSDictionary *)arg3;
@end

