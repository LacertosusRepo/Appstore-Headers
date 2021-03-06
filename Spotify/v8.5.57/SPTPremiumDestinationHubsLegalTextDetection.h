//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBContentOperation-Protocol.h"

@class SPTPremiumDestinationExperimentsImplementation;
@protocol HUBContentOperationDelegate;

@interface SPTPremiumDestinationHubsLegalTextDetection : NSObject <HUBContentOperation>
{
    id <HUBContentOperationDelegate> _delegate;
    SPTPremiumDestinationExperimentsImplementation *_experiments;
}

@property(retain, nonatomic) SPTPremiumDestinationExperimentsImplementation *experiments; // @synthesize experiments=_experiments;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)legalTextDictionaryFromComponentModelBuilder:(id)arg1;
- (void)checkLegalTextForBodyComponentModelBuilders:(id)arg1;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (id)initWithExperiments:(id)arg1;

@end

