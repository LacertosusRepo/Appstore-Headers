//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SPTFacebookSDK <NSObject>
- (void)requestFacebookUserIdentifierForAccessToken:(NSString *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)requestFacebookAccessToken:(void (^)(NSString *, NSError *))arg1;
@end
