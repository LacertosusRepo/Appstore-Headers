//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTPageRegistryObserver.h"

@class NSString;

@interface SPTNavigationPageFactoryObserver : NSObject <SPTPageRegistryObserver>
{
    id <SPTNavigationListProvider> _navigationListProvider;
    id <SPTPageRegistry> _pageRegistry;
}

@property(readonly, nonatomic) id <SPTPageRegistry> pageRegistry; // @synthesize pageRegistry=_pageRegistry;
@property(readonly, nonatomic) __weak id <SPTNavigationListProvider> navigationListProvider; // @synthesize navigationListProvider=_navigationListProvider;
- (void).cxx_destruct;
- (id)newItemFromOld:(id)arg1 byUpdatingTitle:(id)arg2;
- (void)pageRegistry:(id)arg1 didCreateViewController:(id)arg2 forViewURI:(id)arg3;
- (void)stopObserving;
- (void)startObserving;
- (void)dealloc;
- (id)initWithNavigationListProvider:(id)arg1 pageRegistry:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
