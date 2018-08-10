//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTBrowseService.h"

#import "YTInnerTubeUIServiceWithErrorResponse.h"
#import "YTInnerTubeUIServiceWithInitialResponse.h"
#import "YTOfflineServiceProtocol.h"
#import "YTUserChangedObserver.h"

@class NSArray, NSString, YTIBrowseResponse;

@interface YTAppBrowseService : YTBrowseService <YTUserChangedObserver, YTInnerTubeUIServiceWithInitialResponse, YTInnerTubeUIServiceWithErrorResponse, YTOfflineServiceProtocol>
{
    unsigned long long _initialResponseCounter;
    _Bool _processingInitialResponse;
    NSArray *_responseProviders;
    YTIBrowseResponse *_offlineResponse;
}

+ (id)defaultOfflineResponseForBrowseID:(id)arg1 hasAccessToOffline:(_Bool)arg2 offlineVideoCount:(unsigned long long)arg3;
+ (id)continuationTokensFromSectionList:(id)arg1;
+ (_Bool)isFakeBrowseContinuationRequest:(id)arg1;
@property(retain, nonatomic) YTIBrowseResponse *offlineResponse; // @synthesize offlineResponse=_offlineResponse;
- (void).cxx_destruct;
- (void)updateInlineSettingStatusWithRequest:(id)arg1;
- (void)addInstalledAppsToBrowseRequest:(id)arg1;
- (void)provideInitialOrErrorResponseWithBlock:(CDUnknownBlockType)arg1 forBrowseRequest:(id)arg2 errorOrNil:(id)arg3;
- (void)saveOfflineResponse;
- (void)requestOfflineResponseWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)handleFailedRequest:(id)arg1 error:(id)arg2 responseBlock:(CDUnknownBlockType)arg3;
- (void)makeRequest:(id)arg1 refresh:(_Bool)arg2 initialResponseBlock:(CDUnknownBlockType)arg3 responseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)makeRequest:(id)arg1 refresh:(_Bool)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) NSArray *responseProviders;
@property(nonatomic, getter=isProcessingInitialResponse) _Bool processingInitialResponse;
@property(nonatomic) unsigned long long initialResponseCounter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

