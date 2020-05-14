//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBSDKError : NSObject
{
}

+ (void)enableErrorReport;
+ (_Bool)isNetworkError:(id)arg1;
+ (id)unknownErrorWithMessage:(id)arg1;
+ (id)requiredArgumentErrorWithName:(id)arg1 message:(id)arg2 underlyingError:(id)arg3;
+ (id)requiredArgumentErrorWithDomain:(id)arg1 name:(id)arg2 message:(id)arg3;
+ (id)requiredArgumentErrorWithName:(id)arg1 message:(id)arg2;
+ (id)invalidCollectionErrorWithName:(id)arg1 collection:(id)arg2 item:(id)arg3 message:(id)arg4 underlyingError:(id)arg5;
+ (id)invalidCollectionErrorWithName:(id)arg1 collection:(id)arg2 item:(id)arg3 message:(id)arg4;
+ (id)invalidArgumentErrorWithDomain:(id)arg1 name:(id)arg2 value:(id)arg3 message:(id)arg4 underlyingError:(id)arg5;
+ (id)invalidArgumentErrorWithName:(id)arg1 value:(id)arg2 message:(id)arg3 underlyingError:(id)arg4;
+ (id)invalidArgumentErrorWithDomain:(id)arg1 name:(id)arg2 value:(id)arg3 message:(id)arg4;
+ (id)invalidArgumentErrorWithName:(id)arg1 value:(id)arg2 message:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 message:(id)arg4 underlyingError:(id)arg5;
+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2 message:(id)arg3 underlyingError:(id)arg4;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 message:(id)arg3 underlyingError:(id)arg4;
+ (id)errorWithCode:(long long)arg1 message:(id)arg2 underlyingError:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 message:(id)arg3;
+ (id)errorWithCode:(long long)arg1 message:(id)arg2;

@end
