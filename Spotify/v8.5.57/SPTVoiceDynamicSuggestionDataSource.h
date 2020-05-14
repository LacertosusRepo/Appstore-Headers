//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"

@class NSString, NSTimer, SPTDataLoader;
@protocol SPTDataLoaderCancellationToken, SPTVoiceDynamicSuggestionDataSourceDelegate;

@interface SPTVoiceDynamicSuggestionDataSource : NSObject <SPTDataLoaderDelegate>
{
    id <SPTVoiceDynamicSuggestionDataSourceDelegate> _delegate;
    SPTDataLoader *_dataLoader;
    id <SPTDataLoaderCancellationToken> _cancellationToken;
    NSTimer *_requestTimeoutTimer;
}

@property(retain, nonatomic) NSTimer *requestTimeoutTimer; // @synthesize requestTimeoutTimer=_requestTimeoutTimer;
@property(retain, nonatomic) id <SPTDataLoaderCancellationToken> cancellationToken; // @synthesize cancellationToken=_cancellationToken;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) __weak id <SPTVoiceDynamicSuggestionDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (id)urlForTarget:(unsigned long long)arg1;
- (void)cancelFetchingSuggestions;
- (void)fetchSuggestionForTarget:(unsigned long long)arg1;
- (id)initWithDataLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
