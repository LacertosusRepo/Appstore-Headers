//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDataLoaderDelegate.h"
#import "SPTOfflineModeStateObserver.h"

@class NSArray, NSString, SPTConcertsDateFormatter, SPTConcertsListingLogger, SPTConcertsListingsHeaderData, SPTConcertsLocalDataManager, SPTConcertsLocationModel, SPTConcertsServiceImplementation, SPTConcertsTestManager, SPTDataLoader;

@interface SPTConcertsListingsViewModel : NSObject <SPTDataLoaderDelegate, SPTOfflineModeStateObserver>
{
    _Bool _loading;
    _Bool _offline;
    id <SPTConcertsListingsViewModelDelegate> _delegate;
    SPTConcertsLocationModel *_currentLocation;
    unsigned long long _concertsCount;
    NSArray *_concertsRecommended;
    NSArray *_concertsPopular;
    SPTConcertsListingsHeaderData *_headerData;
    SPTDataLoader *_dataLoader;
    SPTConcertsServiceImplementation *_concertsService;
    SPTConcertsTestManager *_testManager;
    SPTConcertsLocalDataManager *_localDataManager;
    id <SPTOfflineModeState> _offlineModeState;
    SPTConcertsDateFormatter *_dateFormatter;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTConcertsListingLogger *_concertsListingLogger;
}

@property(readonly, nonatomic) SPTConcertsListingLogger *concertsListingLogger; // @synthesize concertsListingLogger=_concertsListingLogger;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(nonatomic) __weak SPTConcertsDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(retain, nonatomic) SPTConcertsLocalDataManager *localDataManager; // @synthesize localDataManager=_localDataManager;
@property(readonly, nonatomic) SPTConcertsTestManager *testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) __weak SPTConcertsServiceImplementation *concertsService; // @synthesize concertsService=_concertsService;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic, getter=isOffline) _Bool offline; // @synthesize offline=_offline;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) SPTConcertsListingsHeaderData *headerData; // @synthesize headerData=_headerData;
@property(retain, nonatomic) NSArray *concertsPopular; // @synthesize concertsPopular=_concertsPopular;
@property(retain, nonatomic) NSArray *concertsRecommended; // @synthesize concertsRecommended=_concertsRecommended;
@property(nonatomic) unsigned long long concertsCount; // @synthesize concertsCount=_concertsCount;
@property(retain, nonatomic) SPTConcertsLocationModel *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(nonatomic) __weak id <SPTConcertsListingsViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)dataLoader:(id)arg1 didCancelRequest:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)setConcertsArraysWithConcerts:(id)arg1;
- (void)logConcertSelectionForListing:(id)arg1 atIndexPath:(id)arg2;
- (void)navigateToConcertPageForListing:(id)arg1 fromViewController:(id)arg2;
- (void)navigateToGroupedListing:(id)arg1 fromViewController:(id)arg2;
- (void)navigateToPageForListing:(id)arg1 atIndexPath:(id)arg2 fromViewController:(id)arg3;
- (void)requestDataForLocation:(id)arg1;
- (void)dealloc;
- (id)initWithDataLoader:(id)arg1 localDataManager:(id)arg2 offlineModeState:(id)arg3 dateFormatter:(id)arg4 testManager:(id)arg5 concertsService:(id)arg6 linkDispatcher:(id)arg7 concertsListingLogger:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

