//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTService-Protocol.h"
#import "SPTWebViewFeature-Protocol.h"

@class NSString, SPTAllocationContext, SPTWebViewFactoryImplementation;
@protocol SPTCoreService, SPTUIPresentationService, SPTURIDispatchService;

@interface SPTWebViewFeatureImplementation : NSObject <SPTService, SPTWebViewFeature>
{
    id <SPTCoreService> _coreService;
    id <SPTURIDispatchService> _URIDispatchService;
    id <SPTUIPresentationService> _presentationService;
    SPTWebViewFactoryImplementation *_webViewFactory;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTWebViewFactoryImplementation *webViewFactory; // @synthesize webViewFactory=_webViewFactory;
@property(nonatomic) __weak id <SPTUIPresentationService> presentationService; // @synthesize presentationService=_presentationService;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
- (void).cxx_destruct;
- (id)provideWebViewFactory;
- (void)unload;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

