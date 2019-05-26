//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTChartEntityLoaderNetworkAdapter-Protocol.h"

@class NSString;
@protocol SPTChartEntityLoaderNetworkAdapterDelegate, SPTResolver;

@interface SPTChartEntityLoaderCosmosNetworkAdapter : NSObject <SPTChartEntityLoaderNetworkAdapter>
{
    id <SPTChartEntityLoaderNetworkAdapterDelegate> _delegate;
    id <SPTResolver> _resolver;
}

@property(readonly, nonatomic) id <SPTResolver> resolver; // @synthesize resolver=_resolver;
@property(nonatomic) __weak id <SPTChartEntityLoaderNetworkAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loadDataForURL:(id)arg1;
@property(readonly, nonatomic) long long transportProtocol;
- (id)initWithResolver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
