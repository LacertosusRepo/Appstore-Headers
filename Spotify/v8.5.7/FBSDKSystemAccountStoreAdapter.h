//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore, ACAccountType;

@interface FBSDKSystemAccountStoreAdapter : NSObject
{
    ACAccountStore *_accountStore;
    ACAccountType *_accountType;
    _Bool _forceBlockingRenew;
}

+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;
+ (void)initialize;
@property(nonatomic) _Bool forceBlockingRenew; // @synthesize forceBlockingRenew=_forceBlockingRenew;
- (void).cxx_destruct;
- (void)renewSystemAuthorization:(CDUnknownBlockType)arg1;
- (void)requestAccessToFacebookAccountStore:(id)arg1 retrying:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;
- (void)requestAccessToFacebookAccountStore:(id)arg1 defaultAudience:(id)arg2 isReauthorize:(_Bool)arg3 appID:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (id)accessTokenString;
@property(readonly, nonatomic) ACAccountType *accountType;
@property(readonly, retain, nonatomic) ACAccountStore *accountStore;
- (id)init;

@end

