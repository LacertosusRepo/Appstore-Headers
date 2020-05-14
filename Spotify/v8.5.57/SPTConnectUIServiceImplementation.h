//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTConnectUIService-Protocol.h"

@class NSString, SPTAllocationContext, SPTConnectAccessButtonContainerViewController, SPTConnectAccessButtonTestManagerImplementation;
@protocol GaiaFeature, SPTAbbaService, SPTContainerService, SPTPlayerFeature, _TtP18ConnectUIV2Feature21SPTConnectUIV2Service_;

@interface SPTConnectUIServiceImplementation : NSObject <SPTConnectUIService>
{
    id <SPTContainerService> _containerService;
    id <GaiaFeature> _gaiaService;
    id <_TtP18ConnectUIV2Feature21SPTConnectUIV2Service_> _connectUIV2Service;
    id <SPTPlayerFeature> _playerService;
    id <SPTAbbaService> _abbaService;
    SPTConnectAccessButtonTestManagerImplementation *_testManager;
    SPTConnectAccessButtonContainerViewController *_accessButtonContainerViewController;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTConnectAccessButtonContainerViewController *accessButtonContainerViewController; // @synthesize accessButtonContainerViewController=_accessButtonContainerViewController;
@property(retain, nonatomic) SPTConnectAccessButtonTestManagerImplementation *testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(nonatomic) __weak id <_TtP18ConnectUIV2Feature21SPTConnectUIV2Service_> connectUIV2Service; // @synthesize connectUIV2Service=_connectUIV2Service;
@property(nonatomic) __weak id <GaiaFeature> gaiaService; // @synthesize gaiaService=_gaiaService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (void)unload;
- (void)setupConnectAccessButtonController;
- (void)load;
- (id)provideConnectAccessButtonTestManager;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

