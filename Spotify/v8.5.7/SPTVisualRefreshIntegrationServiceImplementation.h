//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVisualRefreshIntegrationService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTContainerService, SPTGLUEService, SPTNetworkService, SPTVISREFFlagsService;

@interface SPTVisualRefreshIntegrationServiceImplementation : NSObject <SPTVisualRefreshIntegrationService>
{
    id <SPTContainerService> _containerService;
    id <SPTGLUEService> _glueService;
    id <SPTNetworkService> _networkService;
    id <SPTVISREFFlagsService> _visualRefreshService;
}

+ (id)serviceIdentifier;
@property(nonatomic) __weak id <SPTVISREFFlagsService> visualRefreshService; // @synthesize visualRefreshService=_visualRefreshService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (id)visrefPlaylistFullBleedHeaderProvider;
- (id)visrefPlaylistHeaderProvider;
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

