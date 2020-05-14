//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTAuthController;

@interface SPTPartnerIntegrationAuthorizer : NSObject
{
    id <SPTAuthController> _authController;
}

@property(readonly, nonatomic) id <SPTAuthController> authController; // @synthesize authController=_authController;
- (void).cxx_destruct;
- (id)authenticationURLForIntegration:(id)arg1;
- (void)authorizeIntegration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithAuthController:(id)arg1;

@end

