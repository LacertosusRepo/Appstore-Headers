//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFacebookIntegrationService-Protocol.h"

@class NSString, SPTAllocationContext, SPTFacebookMessengerURISchemeHandler, SPTFacebookSDKImplementation;
@protocol SPTURIDispatchService;

@interface SPTFacebookIntegrationServiceImplementation : NSObject <SPTFacebookIntegrationService>
{
    id <SPTURIDispatchService> _URIDispatchService;
    SPTFacebookSDKImplementation *_facebookSDK;
    SPTFacebookMessengerURISchemeHandler *_messengerSchemeHandler;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTFacebookMessengerURISchemeHandler *messengerSchemeHandler; // @synthesize messengerSchemeHandler=_messengerSchemeHandler;
@property(retain, nonatomic) SPTFacebookSDKImplementation *facebookSDK; // @synthesize facebookSDK=_facebookSDK;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
- (void).cxx_destruct;
- (id)provideFacebookSDK;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
