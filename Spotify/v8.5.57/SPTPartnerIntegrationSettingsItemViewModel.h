//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SPTPartnerIntegrationAuthorizer, UIImage;
@protocol SPTPartnerNavigationIntegration><SPTPartnerIntegrationAuthorizable;

@interface SPTPartnerIntegrationSettingsItemViewModel : NSObject
{
    id <SPTPartnerNavigationIntegration><SPTPartnerIntegrationAuthorizable> _integration;
    SPTPartnerIntegrationAuthorizer *_authorizer;
    CDUnknownBlockType _updateHandler;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
@property(readonly, nonatomic) SPTPartnerIntegrationAuthorizer *authorizer; // @synthesize authorizer=_authorizer;
@property(readonly, nonatomic) id <SPTPartnerNavigationIntegration><SPTPartnerIntegrationAuthorizable> integration; // @synthesize integration=_integration;
- (void).cxx_destruct;
- (void)tapButton;
@property(readonly, nonatomic, getter=isButtonEnabled) _Bool buttonEnabled;
@property(readonly, copy, nonatomic) NSString *buttonTitle;
@property(readonly, nonatomic) UIImage *icon;
@property(readonly, copy, nonatomic) NSString *descriptionText;
@property(readonly, copy, nonatomic) NSString *title;
- (id)initWithIntegration:(id)arg1 authorizer:(id)arg2 updateHandler:(CDUnknownBlockType)arg3;

@end
