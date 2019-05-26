//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EXP_SPTHubImpressionLogger-Protocol.h"

@class NSString;
@protocol EXP_SPTHubComponentModelURIResolver, SPTLogCenter;

@interface EXP_SPTHubImpressionLoggerImplementation : NSObject <EXP_SPTHubImpressionLogger>
{
    id <SPTLogCenter> _logCenter;
    NSString *_featureIdentifier;
    id <EXP_SPTHubComponentModelURIResolver> _componentModelURIResolver;
    NSString *_viewURIString;
}

@property(readonly, copy, nonatomic) NSString *viewURIString; // @synthesize viewURIString=_viewURIString;
@property(readonly, nonatomic) id <EXP_SPTHubComponentModelURIResolver> componentModelURIResolver; // @synthesize componentModelURIResolver=_componentModelURIResolver;
@property(readonly, copy, nonatomic) NSString *featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logImpressionWithComponentModel:(id)arg1;
- (id)initWithLogCenter:(id)arg1 featureIdentifier:(id)arg2 pageURI:(id)arg3 componentModelURIResolver:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
