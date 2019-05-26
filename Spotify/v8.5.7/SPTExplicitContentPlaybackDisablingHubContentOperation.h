//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EXP_HUBContentOperation-Protocol.h"
#import "SPTExplicitContentEnabledStateObserver-Protocol.h"

@class NSString, SPTExplicitContentAccessManagerImplementation;
@protocol EXP_HUBContentOperationDelegate, EXP_SPTHubComponentModelURIResolver;

@interface SPTExplicitContentPlaybackDisablingHubContentOperation : NSObject <SPTExplicitContentEnabledStateObserver, EXP_HUBContentOperation>
{
    id <EXP_HUBContentOperationDelegate> _delegate;
    SPTExplicitContentAccessManagerImplementation *_accessManager;
    id <EXP_SPTHubComponentModelURIResolver> _componentModelURIResolver;
}

@property(readonly, nonatomic) id <EXP_SPTHubComponentModelURIResolver> componentModelURIResolver; // @synthesize componentModelURIResolver=_componentModelURIResolver;
@property(readonly, nonatomic) SPTExplicitContentAccessManagerImplementation *accessManager; // @synthesize accessManager=_accessManager;
@property(nonatomic) __weak id <EXP_HUBContentOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)explicitContentEnabledStateDidChange:(_Bool)arg1;
- (void)recursivelyUpdateDisabledForComponentModelBuilder:(id)arg1;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (void)dealloc;
- (id)initWithAccessManager:(id)arg1 componentModelURIResolver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

