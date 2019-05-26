//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol EXP_SPTHubFrameworkService, SPTContainerService, SPTDebugService, SPTGLUEService;

@interface SPTHubDebugServiceImplementation : NSObject <SPTService>
{
    id <EXP_SPTHubFrameworkService> _hubsRendererFrameworkService;
    id <SPTGLUEService> _glueService;
    id <SPTContainerService> _containerService;
    id <SPTDebugService> _debugService;
}

+ (id)serviceIdentifier;
@property(nonatomic) __weak id <SPTDebugService> debugService; // @synthesize debugService=_debugService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <EXP_SPTHubFrameworkService> hubsRendererFrameworkService; // @synthesize hubsRendererFrameworkService=_hubsRendererFrameworkService;
- (void).cxx_destruct;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

