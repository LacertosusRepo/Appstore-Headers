//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDataLoaderDelegate.h"
#import "SPTFreeTierSignupDataLoader.h"

@class NSString, SPTDataLoader, SPTFreeTierSignupRequestProvider, SPTFreeTierSignupResponseProcessor;

@interface SPTFreeTierSignupCreateUserDataLoader : NSObject <SPTDataLoaderDelegate, SPTFreeTierSignupDataLoader>
{
    id <SPTFreeTierSignupDataLoaderDelegate> delegate;
    SPTDataLoader *_dataLoader;
    SPTFreeTierSignupResponseProcessor *_responseProcessor;
    id <SPTSignupParameterShuffler> _parameterShuffler;
    SPTFreeTierSignupRequestProvider *_requestProvider;
}

@property(retain, nonatomic) SPTFreeTierSignupRequestProvider *requestProvider; // @synthesize requestProvider=_requestProvider;
@property(retain, nonatomic) id <SPTSignupParameterShuffler> parameterShuffler; // @synthesize parameterShuffler=_parameterShuffler;
@property(retain, nonatomic) SPTFreeTierSignupResponseProcessor *responseProcessor; // @synthesize responseProcessor=_responseProcessor;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) __weak id <SPTFreeTierSignupDataLoaderDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)performCreateUserWithURL:(id)arg1 requestBodyParameters:(id)arg2;
- (void)performCreateUserWithUserInfoModel:(id)arg1;
- (void)performCreateFacebookUserWithInfoModel:(id)arg1;
- (id)dataFromRequestBodyDictionary:(id)arg1;
- (id)valueKeyPairsStringWithRequestBodyDictionary:(id)arg1;
- (id)encodeString:(id)arg1;
- (id)requestBodyDictionaryWithUserInfoParameters:(id)arg1;
- (void)dealloc;
- (id)initWithDataLoader:(id)arg1 responseProcessor:(id)arg2 parameterShuffler:(id)arg3 requestProvider:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

