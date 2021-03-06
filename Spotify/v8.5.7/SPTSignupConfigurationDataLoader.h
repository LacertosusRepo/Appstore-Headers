//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"
#import "SPTSignupDataLoader-Protocol.h"

@class NSDictionary, NSString, SPTDataLoader, SPTSignupRequestProvider, SPTSignupResponseProcessor;
@protocol SPTSignupDataLoaderDelegate;

@interface SPTSignupConfigurationDataLoader : NSObject <SPTDataLoaderDelegate, SPTSignupDataLoader>
{
    id <SPTSignupDataLoaderDelegate> delegate;
    NSDictionary *_configurationDictionary;
    SPTDataLoader *_dataLoader;
    SPTSignupResponseProcessor *_responseProcessor;
    SPTSignupRequestProvider *_requestProvider;
}

+ (id)fallbackConfiguration;
@property(retain, nonatomic) SPTSignupRequestProvider *requestProvider; // @synthesize requestProvider=_requestProvider;
@property(retain, nonatomic) SPTSignupResponseProcessor *responseProcessor; // @synthesize responseProcessor=_responseProcessor;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(copy, nonatomic) NSDictionary *configurationDictionary; // @synthesize configurationDictionary=_configurationDictionary;
@property(nonatomic) __weak id <SPTSignupDataLoaderDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)handleFallbackResponse;
- (void)handleResponseWithError:(id)arg1;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)cancelRequest;
- (void)performRequest;
- (void)dealloc;
- (id)initWithDataLoader:(id)arg1 responseProcessor:(id)arg2 requestProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

