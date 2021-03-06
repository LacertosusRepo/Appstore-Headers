//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTBMWCarAPIFeature.h"

@class NSString, SPTAllocationContext, SPTBMWSession, UIViewController, UIWindow;

@interface SPTBMWCarAPIFeatureImplementation : NSObject <SPTBMWCarAPIFeature>
{
    SPTBMWSession *_session;
    id <SPTAccessoryManagerService> _accessoryManagerService;
    id <SPTNetworkService> _networkService;
    id <SPTDebugService> _debug;
    id <SPTExternalIntegrationDebugLogService> _debugLogService;
    id <SPTURIDispatchService> _URIDispatchService;
    UIViewController *_rapiDebugViewController;
    UIWindow *_rapiDebugWindow;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) UIWindow *rapiDebugWindow; // @synthesize rapiDebugWindow=_rapiDebugWindow;
@property(retain, nonatomic) UIViewController *rapiDebugViewController; // @synthesize rapiDebugViewController=_rapiDebugViewController;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationDebugLogService> debugLogService; // @synthesize debugLogService=_debugLogService;
@property(readonly, nonatomic) __weak id <SPTDebugService> debug; // @synthesize debug=_debug;
@property(readonly, nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(readonly, nonatomic) __weak id <SPTAccessoryManagerService> accessoryManagerService; // @synthesize accessoryManagerService=_accessoryManagerService;
@property(retain, nonatomic) SPTBMWSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (id)provideBMWSession;
- (void)unload;
- (void)registerURISchemeHandler;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

