//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SPTAuthAppleSignInCredentials, SPTAuthLoginCredentials, SPTAuthLoginOptions, SPTAuthOneTimeTokenCredentials, SPTAuthParentChildCredentials, SPTAuthPhoneNumberIdentifier, SPTAuthSerializableCredentials;
@protocol SPTCoreLoginControllerDelegate;

@protocol SPTCoreLoginController <NSObject>
@property(nonatomic) __weak id <SPTCoreLoginControllerDelegate> loginControllerDelegate;
- (void)eraseOfflineUser:(NSString *)arg1;
- (void)forgetStoredCredentials;
- (_Bool)hasStoredCredentials;
- (SPTAuthSerializableCredentials *)serializableCredentialsAndCanonicalUsername:(id *)arg1;
- (SPTAuthLoginCredentials *)storedCredentialsAndCanonicalUsername:(id *)arg1;
- (void)loginWithAppleSignInCredentials:(SPTAuthAppleSignInCredentials *)arg1 options:(SPTAuthLoginOptions *)arg2;
- (void)loginWithParentChildCredentials:(SPTAuthParentChildCredentials *)arg1 options:(SPTAuthLoginOptions *)arg2;
- (void)loginWithOneTimeTokenCredentials:(SPTAuthOneTimeTokenCredentials *)arg1 options:(SPTAuthLoginOptions *)arg2;
- (void)loginWithCredentials:(SPTAuthLoginCredentials *)arg1 options:(SPTAuthLoginOptions *)arg2;
- (void)loginWithPhoneNumberIdentifier:(SPTAuthPhoneNumberIdentifier *)arg1 options:(SPTAuthLoginOptions *)arg2;
@end
