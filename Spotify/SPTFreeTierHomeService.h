//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTUIPageService.h"

@class SPTFreeTierHomeHubManager, SPTFreeTierHomeTestManager;

@interface SPTFreeTierHomeService : SPTUIPageService
{
    id <SPTGLUEService> _glueService;
    id <EXP_SPTHubFrameworkService> _hubService;
    id <SPTOnDemandService> _onDemandService;
    id <SPTNavigationFeature> _navigationFeature;
    id <SPTRecentlyPlayedService> _recentlyPlayedService;
    id <SPTFreeTierUIService> _freeTierUIService;
    id <SPTSessionService> _clientSessionService;
    id <SPTHomeFeature> _legacyHomeFeature;
    SPTFreeTierHomeHubManager *_hubManager;
    SPTFreeTierHomeTestManager *_testManager;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTFreeTierHomeTestManager *testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTFreeTierHomeHubManager *hubManager; // @synthesize hubManager=_hubManager;
@property(nonatomic) __weak id <SPTHomeFeature> legacyHomeFeature; // @synthesize legacyHomeFeature=_legacyHomeFeature;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTFreeTierUIService> freeTierUIService; // @synthesize freeTierUIService=_freeTierUIService;
@property(nonatomic) __weak id <SPTRecentlyPlayedService> recentlyPlayedService; // @synthesize recentlyPlayedService=_recentlyPlayedService;
@property(nonatomic) __weak id <SPTNavigationFeature> navigationFeature; // @synthesize navigationFeature=_navigationFeature;
@property(nonatomic) __weak id <SPTOnDemandService> onDemandService; // @synthesize onDemandService=_onDemandService;
@property(nonatomic) __weak id <EXP_SPTHubFrameworkService> hubService; // @synthesize hubService=_hubService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
- (void).cxx_destruct;
- (id)provideViewControllerForURI:(id)arg1 context:(id)arg2;
- (void)configureMasterFeatureFlag:(id)arg1;
- (_Bool)claimsURI:(id)arg1;
- (void)setupHubManager;
- (void)load;
- (void)configureWithServices:(id)arg1;

@end

