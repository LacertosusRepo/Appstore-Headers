//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBSDKLoginError : NSObject
{
}

+ (id)errorWithSystemAccountStoreDeniedError:(id)arg1 isCancellation:(_Bool *)arg2;
+ (id)errorFromServerError:(id)arg1;
+ (id)errorFromReturnURLParameters:(id)arg1;
+ (id)errorForSystemPasswordChange:(id)arg1;
+ (id)errorForSystemAccountStoreError:(id)arg1;
+ (id)errorForFailedLoginWithCode:(long long)arg1 innerError:(id)arg2;
+ (id)errorForFailedLoginWithCode:(long long)arg1;
+ (id)errorDomain;
- (id)init;

@end
