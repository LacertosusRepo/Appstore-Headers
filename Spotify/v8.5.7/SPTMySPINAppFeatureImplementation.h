//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MySpinServerSDKDelegate-Protocol.h"
#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext, SPTMySPINURIHandlerFeatureImplementation;
@protocol SPTContainerUIService;

@interface SPTMySPINAppFeatureImplementation : NSObject <MySpinServerSDKDelegate, SPTService>
{
    _Bool _sessionScopeLoaded;
    id <SPTContainerUIService> _containerUIService;
    SPTMySPINURIHandlerFeatureImplementation *_uriHandlerFeature;
    struct CGSize _remoteScreenSize;
}

+ (id)serviceIdentifier;
@property(nonatomic) __weak SPTMySPINURIHandlerFeatureImplementation *uriHandlerFeature; // @synthesize uriHandlerFeature=_uriHandlerFeature;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) struct CGSize remoteScreenSize; // @synthesize remoteScreenSize=_remoteScreenSize;
@property(nonatomic) _Bool sessionScopeLoaded; // @synthesize sessionScopeLoaded=_sessionScopeLoaded;
- (void).cxx_destruct;
- (id)viewControllerForConnectedModeOnRemoteScreen:(struct CGSize)arg1;
- (id)viewControllerForDisconnectedMode;
- (void)startMySpinAndSetupHandler;
- (void)setupMySpinSDK;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
