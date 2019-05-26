//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSearchService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTContainerService, SPTScannablesService, SPTSearchPlatformService;

@interface SPTSearchServiceImplementation : NSObject <SPTSearchService>
{
    id <SPTContainerService> _containerService;
    id <SPTScannablesService> _scannablesService;
    id <SPTSearchPlatformService> _searchPlatformService;
}

+ (id)serviceIdentifier;
@property(nonatomic) __weak id <SPTSearchPlatformService> searchPlatformService; // @synthesize searchPlatformService=_searchPlatformService;
@property(nonatomic) __weak id <SPTScannablesService> scannablesService; // @synthesize scannablesService=_scannablesService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (id)searchConfiguration;
- (id)provideSearchViewControllerForURL:(id)arg1 context:(id)arg2;
- (void)registerSearchPage;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

