//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTWAMPMessage-Protocol.h"

@class NSDictionary, NSString;

@protocol SPTWAMPAuthenticateMessage <SPTWAMPMessage>
@property(readonly, nonatomic) NSDictionary *extra;
@property(readonly, copy, nonatomic) NSString *signature;
@end

