//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPresentationService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTContainerService, SPTContainerUIService, SPTFreeTierPresentationModalPresenter;

@interface SPTFreeTierPresentationServiceImplementation : NSObject <SPTFreeTierPresentationService>
{
    id <SPTContainerService> _containerService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTFreeTierPresentationModalPresenter> _modalPresenter;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTFreeTierPresentationModalPresenter> modalPresenter; // @synthesize modalPresenter=_modalPresenter;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (id)createSelfPresentingNavigationControllerWithRootViewController:(id)arg1;
- (id)providerModalPresenter;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

