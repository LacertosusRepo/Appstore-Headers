//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDataLoaderDelegate.h"

@class NSString, SPTDataLoader;

@interface SPTLanguageOnboardingDataLoader : NSObject <SPTDataLoaderDelegate>
{
    id <SPTLanguageOnboardingDataLoaderDelegate> _delegate;
    SPTDataLoader *_dataLoader;
}

@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) __weak id <SPTLanguageOnboardingDataLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)decorateRequest:(id)arg1 withIdentifier:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)cancelAllLoads;
- (void)updateSelectedLanguages:(id)arg1;
- (void)fetchSelectedLanguages;
- (void)fetchAvailableLanguages;
- (id)initWithDataLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

