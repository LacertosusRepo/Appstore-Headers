//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"

@class NSString, NSURL, SPTDataLoader, SPTDataLoaderRequest, SPTNRFLogger;
@protocol SPTOfflineModeState;

@interface SPTNRFDataLoader : NSObject <SPTDataLoaderDelegate>
{
    SPTDataLoader *_dataLoader;
    SPTNRFLogger *_logger;
    id <SPTOfflineModeState> _offlineModeState;
    NSURL *_nextPageURL;
    SPTDataLoaderRequest *_tailFetchRequest;
}

@property(retain, nonatomic) SPTDataLoaderRequest *tailFetchRequest; // @synthesize tailFetchRequest=_tailFetchRequest;
@property(retain, nonatomic) NSURL *nextPageURL; // @synthesize nextPageURL=_nextPageURL;
@property(readonly, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) SPTNRFLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (id)requestWithURL:(id)arg1 succsssBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)fetchTailWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (id)fetchFeedWithdSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic, getter=isFetchingTail) _Bool fetchingTail;
@property(readonly, nonatomic) _Bool canFetchTail;
- (id)initWithDataLoader:(id)arg1 logger:(id)arg2 offlineModeState:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

