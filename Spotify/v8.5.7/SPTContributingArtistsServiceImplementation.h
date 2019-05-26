//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTContributingArtistsService-Protocol.h"
#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext, SPTContributingArtistsTestManagerImplementation;
@protocol SPTAbbaService, SPTContainerService, SPTGLUEService, SPTSessionService, SPTSettingsFeature, SPTURIDispatchService;

@interface SPTContributingArtistsServiceImplementation : NSObject <SPTService, SPTContributingArtistsService>
{
    id <SPTAbbaService> _abbaService;
    id <SPTSessionService> _clientSessionService;
    id <SPTContainerService> _containerService;
    id <SPTGLUEService> _glueService;
    id <SPTURIDispatchService> _uriDispatchService;
    id <SPTSettingsFeature> _settingsService;
    SPTContributingArtistsTestManagerImplementation *_testManager;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTContributingArtistsTestManagerImplementation *testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsService; // @synthesize settingsService=_settingsService;
@property(nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
- (void).cxx_destruct;
- (void)registerTestContributingArtistsListViewSettingsItems;
- (id)provideTestManager;
- (id)UIProviderForArtistEntities:(id)arg1;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

