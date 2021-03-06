//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SPTAccessToken : NSObject
{
    NSString *_accessToken;
    NSDate *_expiresAt;
    NSString *_tokenType;
}

@property(readonly, copy, nonatomic) NSString *tokenType; // @synthesize tokenType=_tokenType;
@property(readonly, copy, nonatomic) NSDate *expiresAt; // @synthesize expiresAt=_expiresAt;
@property(readonly, copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
- (void).cxx_destruct;
- (id)initWithAccessToken:(struct AccessToken *)arg1;
- (id)initWithAccessToken:(id)arg1 expiresAt:(id)arg2 tokenType:(id)arg3;

@end

