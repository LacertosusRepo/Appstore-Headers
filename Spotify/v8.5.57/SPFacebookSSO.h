//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTFacebookSDK;

@interface SPFacebookSSO : NSObject
{
    id <SPTFacebookSDK> _facebookSDK;
}

@property(retain, nonatomic) id <SPTFacebookSDK> facebookSDK; // @synthesize facebookSDK=_facebookSDK;
- (void).cxx_destruct;
- (id)errorForFacebookSDKError:(id)arg1;
- (void)attemptFacebookSSOWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithFacebookSDK:(id)arg1;

@end
