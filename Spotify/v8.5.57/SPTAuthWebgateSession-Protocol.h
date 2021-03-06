//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SPTAuthSerializableCredentials;
@protocol SPTOauthClient;

@protocol SPTAuthWebgateSession <NSObject>
@property(readonly, nonatomic) shared_ptr_8d7bf210 cppOauthClient;
@property(readonly, nonatomic) id <SPTOauthClient> oauthClient;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, nonatomic) SPTAuthSerializableCredentials *reusableCredentials;
@end

