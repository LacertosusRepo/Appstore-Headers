//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPresenterViewControllerProvider-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTContainerService, SPTContainerUIService, SPTInstrumentationService, SPTModalPresentationController, SPTPopoverPresentationController;

@interface SPTUIPresentationServiceImplementation : NSObject <SPTPresenterViewControllerProvider>
{
    id <SPTContainerUIService> _containerUIService;
    id <SPTContainerService> _containerService;
    id <SPTInstrumentationService> _instrumentationService;
    id <SPTModalPresentationController> _modalPresentationController;
    id <SPTPopoverPresentationController> _popoverPresentationController;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTPopoverPresentationController> popoverPresentationController; // @synthesize popoverPresentationController=_popoverPresentationController;
@property(retain, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(nonatomic) __weak id <SPTInstrumentationService> instrumentationService; // @synthesize instrumentationService=_instrumentationService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
- (void).cxx_destruct;
- (id)provideMessageBarController;
- (id)providePopoverPresentationController;
- (id)provideModalPresentationController;
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

