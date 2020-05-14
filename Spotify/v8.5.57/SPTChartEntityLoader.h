//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTChartEntityLoaderNetworkAdapterDelegate-Protocol.h"

@class NSString;
@protocol SPTChartEntityLoaderDelegate, SPTChartEntityLoaderNetworkAdapter;

@interface SPTChartEntityLoader : NSObject <SPTChartEntityLoaderNetworkAdapterDelegate>
{
    id <SPTChartEntityLoaderDelegate> _delegate;
    id <SPTChartEntityLoaderNetworkAdapter> _networkAdapter;
}

@property(retain, nonatomic) id <SPTChartEntityLoaderNetworkAdapter> networkAdapter; // @synthesize networkAdapter=_networkAdapter;
@property(nonatomic) __weak id <SPTChartEntityLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)chartEntityLoaderNetworkAdapter:(id)arg1 didEncounterError:(id)arg2 forURL:(id)arg3;
- (void)chartEntityLoaderNetworkAdapter:(id)arg1 didLoadData:(id)arg2 forURL:(id)arg3;
- (void)loadDataForEndpoint:(id)arg1 argument:(id)arg2;
- (void)loadChartWithID:(id)arg1;
- (id)initWithNetworkAdapter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

