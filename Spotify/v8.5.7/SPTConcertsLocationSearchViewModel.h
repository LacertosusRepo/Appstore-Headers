//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"

@class NSArray, NSString, SPTConcertsLocalDataManager, SPTConcertsLocationModel, SPTDataLoader;
@protocol SPTConcertsLocationSearchViewModelDelegate, SPTDataLoaderCancellationToken;

@interface SPTConcertsLocationSearchViewModel : NSObject <SPTDataLoaderDelegate>
{
    _Bool _loading;
    id <SPTConcertsLocationSearchViewModelDelegate> _delegate;
    NSArray *_locations;
    SPTConcertsLocationModel *_currentLocation;
    SPTDataLoader *_dataLoader;
    id <SPTDataLoaderCancellationToken> _cancellationToken;
    SPTConcertsLocalDataManager *_localDataManager;
}

@property(retain, nonatomic) SPTConcertsLocalDataManager *localDataManager; // @synthesize localDataManager=_localDataManager;
@property(retain, nonatomic) id <SPTDataLoaderCancellationToken> cancellationToken; // @synthesize cancellationToken=_cancellationToken;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) SPTConcertsLocationModel *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(retain, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(nonatomic) __weak id <SPTConcertsLocationSearchViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didCancelRequest:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)requestDataWithQuery:(id)arg1;
- (void)dealloc;
- (id)initWithDataLoader:(id)arg1 localDataManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

