//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EXP_HUBCommandHandler-Protocol.h"

@protocol EXP_SPTHubInteractionLogger, SPTCollectionPlatform, SPTEntitySeeAllSongsHubsDataSource, SPTEntitySeeAllSongsRegistry, SPTLinkDispatcher, SPTOfflineModeState;

@interface SPTEntitySeeAllSongsCommandHandler : NSObject <EXP_HUBCommandHandler>
{
    id <SPTLinkDispatcher> _linkDispatcher;
    id <EXP_SPTHubInteractionLogger> _interactionLogger;
    id <SPTEntitySeeAllSongsRegistry> _registry;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTOfflineModeState> _offlineModeState;
    id <SPTEntitySeeAllSongsHubsDataSource> _dataSource;
}

@property(retain, nonatomic) id <SPTEntitySeeAllSongsHubsDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(readonly, nonatomic) id <SPTEntitySeeAllSongsRegistry> registry; // @synthesize registry=_registry;
@property(readonly, nonatomic) id <EXP_SPTHubInteractionLogger> interactionLogger; // @synthesize interactionLogger=_interactionLogger;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
- (void).cxx_destruct;
- (void)handleCommand:(id)arg1 event:(id)arg2;
- (id)initWithLinkDispatcher:(id)arg1 interactionLogger:(id)arg2 registry:(id)arg3 collectionPlatform:(id)arg4 offlineModeState:(id)arg5;

@end

