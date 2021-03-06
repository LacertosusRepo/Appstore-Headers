//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDataLoaderDelegate.h"

@class NSArray, NSString, SPTDataLoader;

@interface SPTAbbaFlagDataConfigLoader : NSObject <SPTDataLoaderDelegate>
{
    id <SPTAbbaFlagDataConfigDelegate> _delegate;
    SPTDataLoader *_dataLoader;
    NSArray *_response;
}

@property(retain, nonatomic) NSArray *response; // @synthesize response=_response;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) __weak id <SPTAbbaFlagDataConfigDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)buildAbbaFlagDataConfigRequest;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (id)abbaFlagDataConfigModels:(id)arg1;
- (id)parseData:(id)arg1 error:(id *)arg2;
- (void)loadFeatureFlagsConfig:(id)arg1;
- (void)fetchAbbaDataConfig;
- (id)initWithDataLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

