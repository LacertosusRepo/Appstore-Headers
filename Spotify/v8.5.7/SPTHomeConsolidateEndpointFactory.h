//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTHomeConsolidateTestManager, SPTProductState;

@interface SPTHomeConsolidateEndpointFactory : NSObject
{
    id <SPTProductState> _productState;
    id <SPTHomeConsolidateTestManager> _testManager;
}

@property(retain, nonatomic) id <SPTHomeConsolidateTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
- (void).cxx_destruct;
- (_Bool)isUsingHTTP;
- (long long)componentsTransportType;
- (_Bool)isPodcastFeatureEnabled;
- (_Bool)isVideoFeatureEnabled;
- (id)queryParameters;
- (id)endpointForHome;
- (id)initWithProductState:(id)arg1 testManager:(id)arg2;

@end

