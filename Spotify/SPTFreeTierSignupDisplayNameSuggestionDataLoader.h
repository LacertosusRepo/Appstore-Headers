//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDataLoaderDelegate.h"
#import "SPTFreeTierSignupDataLoader.h"

@class NSString, SPTDataLoader, SPTFreeTierSignupRequestProvider, SPTFreeTierSignupResponseProcessor;

@interface SPTFreeTierSignupDisplayNameSuggestionDataLoader : NSObject <SPTDataLoaderDelegate, SPTFreeTierSignupDataLoader>
{
    id <SPTFreeTierSignupDataLoaderDelegate> delegate;
    NSString *_displayNameSuggestion;
    NSString *_email;
    SPTDataLoader *_dataLoader;
    SPTFreeTierSignupResponseProcessor *_responseProcessor;
    SPTFreeTierSignupRequestProvider *_requestProvider;
}

@property(retain, nonatomic) SPTFreeTierSignupRequestProvider *requestProvider; // @synthesize requestProvider=_requestProvider;
@property(retain, nonatomic) SPTFreeTierSignupResponseProcessor *responseProcessor; // @synthesize responseProcessor=_responseProcessor;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *displayNameSuggestion; // @synthesize displayNameSuggestion=_displayNameSuggestion;
@property(nonatomic) __weak id <SPTFreeTierSignupDataLoaderDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)cancelRequest;
- (void)performRequestWithEmail:(id)arg1;
- (void)dealloc;
- (id)initWithDataLoader:(id)arg1 responseProcessor:(id)arg2 requestProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

