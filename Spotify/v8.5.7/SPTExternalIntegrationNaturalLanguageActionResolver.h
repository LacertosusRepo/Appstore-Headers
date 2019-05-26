//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"

@class NSString, SPTDataLoader;
@protocol SPTGaiaConnectAPI;

@interface SPTExternalIntegrationNaturalLanguageActionResolver : NSObject <SPTDataLoaderDelegate>
{
    SPTDataLoader *_dataLoader;
    id <SPTGaiaConnectAPI> _connectManager;
}

@property(readonly, nonatomic) id <SPTGaiaConnectAPI> connectManager; // @synthesize connectManager=_connectManager;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)notifyErrorHandlerForResponse:(id)arg1 withError:(id)arg2;
- (id)createSourceDeviceData;
- (void)resolveActionForURI:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (id)initWithDataLoader:(id)arg1 connectManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

