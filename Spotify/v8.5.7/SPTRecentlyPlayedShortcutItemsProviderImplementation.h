//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCollectionEntityListObserver-Protocol.h"
#import "SPTRecentlyPlayedShortcutItemsProvider-Protocol.h"

@class NSHashTable, NSString;
@protocol SPTCollectionEntityList, SPTFreeTierTestManager, SPTLinkDispatcher;

@interface SPTRecentlyPlayedShortcutItemsProviderImplementation : NSObject <SPTCollectionEntityListObserver, SPTRecentlyPlayedShortcutItemsProvider>
{
    id <SPTCollectionEntityList> _recentlyPlayedModel;
    id <SPTLinkDispatcher> _linkDispatcher;
    NSHashTable *_observers;
    id <SPTFreeTierTestManager> _freeTierTestManager;
}

@property(readonly, nonatomic) id <SPTFreeTierTestManager> freeTierTestManager; // @synthesize freeTierTestManager=_freeTierTestManager;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <SPTCollectionEntityList> recentlyPlayedModel; // @synthesize recentlyPlayedModel=_recentlyPlayedModel;
- (void).cxx_destruct;
- (void)notifyObservers;
- (void)entityListDidReload:(id)arg1;
- (id)createItemAtIndex:(id)arg1 fromEntityList:(id)arg2;
- (void)removeShortcutItemsUpdateObserver:(id)arg1;
- (void)addShortcutItemsUpdateObserver:(id)arg1;
- (id)entityWithDictionary:(id)arg1;
- (id)targetURIForQuickActionItem:(id)arg1;
- (_Bool)handleShortcutItem:(id)arg1;
- (id)provideShortcutItems;
- (void)dealloc;
- (id)initWithRecentlyPlayedModel:(id)arg1 linkDispatcher:(id)arg2 freeTierTestManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
