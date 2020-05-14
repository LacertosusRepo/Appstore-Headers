//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNetworkConnectivityControllerObserver-Protocol.h"
#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTLocalSettings, SPTNetworkConnectivityController, SPTNetworkService, SPTSessionService;

@interface SPTNetworkSessionServiceImplementation : NSObject <SPTNetworkConnectivityControllerObserver, SPTService>
{
    id <SPTNetworkService> _networkFeature;
    id <SPTSessionService> _sessionService;
    id <SPTNetworkConnectivityController> _networkController;
    id <SPTLocalSettings> _localSettings;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) id <SPTNetworkConnectivityController> networkController; // @synthesize networkController=_networkController;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
- (void).cxx_destruct;
- (void)userWillLogout:(id)arg1;
- (void)networkConnectivityController:(id)arg1 didChangeForcedOffline:(_Bool)arg2;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

