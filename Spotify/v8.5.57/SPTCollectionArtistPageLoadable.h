//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCollectionArtistModelDelegate-Protocol.h"
#import "SPTPageLoadable-Protocol.h"

@class NSString;
@protocol SPTCollectionArtistModel, SPTPageLoadStateHandler;

@interface SPTCollectionArtistPageLoadable : NSObject <SPTCollectionArtistModelDelegate, SPTPageLoadable>
{
    CDUnknownBlockType _modelFactory;
    id <SPTCollectionArtistModel> _currentModel;
    id <SPTPageLoadStateHandler> _handler;
}

@property(retain, nonatomic) id <SPTPageLoadStateHandler> handler; // @synthesize handler=_handler;
@property(retain, nonatomic) id <SPTCollectionArtistModel> currentModel; // @synthesize currentModel=_currentModel;
@property(copy, nonatomic) CDUnknownBlockType modelFactory; // @synthesize modelFactory=_modelFactory;
- (void).cxx_destruct;
- (void)artistModelOfflineStateChanged:(id)arg1;
- (void)artistModelDidUpdateSessionOfflineStatus:(id)arg1;
- (void)artistModelDidUpdatePlayingRow:(id)arg1;
- (void)artistModelFailedToLoad:(id)arg1 withError:(id)arg2;
- (void)artistModelDidUpdate:(id)arg1;
- (void)artistModelDidLoadMetadata:(id)arg1;
- (void)evaluateLoadStateWithModel:(id)arg1;
- (void)loadWithResultHandler:(id)arg1;
- (void)cancel;
- (id)initWithModelFactory:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

