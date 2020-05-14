//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAbbaDataSource-Protocol.h"
#import "SPTDataLoaderDelegate-Protocol.h"

@class NSDate, NSString, SPTAbbaLogger, SPTDataLoader;
@protocol SPTAbbaDataSourceDelegate, SPTDataLoaderCancellationToken;

@interface SPTAbbaDataSourceImplementation : NSObject <SPTDataLoaderDelegate, SPTAbbaDataSource>
{
    id <SPTAbbaDataSourceDelegate> _delegate;
    double _requestLaunchTimestamp;
    NSDate *_lastSuccessfulResponseTimestamp;
    SPTDataLoader *_dataLoader;
    id <SPTDataLoaderCancellationToken> _cancellationToken;
    double _cacheLifetimeInterval;
    SPTAbbaLogger *_abbaLogger;
}

@property(retain, nonatomic) SPTAbbaLogger *abbaLogger; // @synthesize abbaLogger=_abbaLogger;
@property(nonatomic) double cacheLifetimeInterval; // @synthesize cacheLifetimeInterval=_cacheLifetimeInterval;
@property(retain, nonatomic) id <SPTDataLoaderCancellationToken> cancellationToken; // @synthesize cancellationToken=_cancellationToken;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) NSDate *lastSuccessfulResponseTimestamp; // @synthesize lastSuccessfulResponseTimestamp=_lastSuccessfulResponseTimestamp;
@property(nonatomic) double requestLaunchTimestamp; // @synthesize requestLaunchTimestamp=_requestLaunchTimestamp;
@property(nonatomic) __weak id <SPTAbbaDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didCancelRequest:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (id)parseData:(id)arg1 error:(id *)arg2;
- (void)loadFeatureFlags:(id)arg1;
- (_Bool)isCacheExpired;
- (void)loadData;
- (id)initWithDataLoader:(id)arg1 cacheLifetimeInterval:(double)arg2 abbaLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

