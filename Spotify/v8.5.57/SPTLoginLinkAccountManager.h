//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLoginLinkAccountDataLoaderDelegate-Protocol.h"

@class NSString, SPTLoginLinkAccountDataLoader, SPTLoginLinkAccountLogger, SPTLoginSlideUpModalPresenter, SPTLoginTheme;

@interface SPTLoginLinkAccountManager : NSObject <SPTLoginLinkAccountDataLoaderDelegate>
{
    SPTLoginLinkAccountDataLoader *_dataLoader;
    SPTLoginSlideUpModalPresenter *_modalPresenter;
    SPTLoginTheme *_theme;
    NSString *_identifierToken;
    SPTLoginLinkAccountLogger *_logger;
}

@property(readonly, nonatomic) SPTLoginLinkAccountLogger *logger; // @synthesize logger=_logger;
@property(copy, nonatomic) NSString *identifierToken; // @synthesize identifierToken=_identifierToken;
@property(readonly, nonatomic) SPTLoginTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTLoginSlideUpModalPresenter *modalPresenter; // @synthesize modalPresenter=_modalPresenter;
@property(readonly, nonatomic) SPTLoginLinkAccountDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (void)dataLoaderDidFailLinkAccount:(id)arg1 error:(id)arg2;
- (void)dataLoaderDidSuccessfullyLinkAccount:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (void)linkAccountsButtonTapped:(id)arg1;
- (void)linkAccountWithIdentifierToken:(id)arg1;
- (void)promptUserToAddLoginOptionWithDetails:(id)arg1;
- (id)initWithDataLoader:(id)arg1 modalPresenter:(id)arg2 theme:(id)arg3 logger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

