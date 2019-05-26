//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTFreeTierFindEndpointFactory, SPTFreeTierFindTestManager;
@protocol SPTFreeTierTestManager;

@interface SPTFreeTierFindURLResolver : NSObject
{
    SPTFreeTierFindEndpointFactory *_endpointFactory;
    SPTFreeTierFindTestManager *_testManager;
    id <SPTFreeTierTestManager> _freeTierTestManager;
}

@property(readonly, nonatomic) id <SPTFreeTierTestManager> freeTierTestManager; // @synthesize freeTierTestManager=_freeTierTestManager;
@property(readonly, nonatomic) SPTFreeTierFindTestManager *testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) SPTFreeTierFindEndpointFactory *endpointFactory; // @synthesize endpointFactory=_endpointFactory;
- (void).cxx_destruct;
- (id)remoteHubContentURLForViewURI:(id)arg1;
- (id)initWithEndpointFactory:(id)arg1 testManager:(id)arg2 freeTierTestManager:(id)arg3;

@end
