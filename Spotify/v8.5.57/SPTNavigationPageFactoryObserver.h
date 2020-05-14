//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPageRegistryObserver-Protocol.h"

@class NSString;
@protocol SPTNavigationListProvider, SPTPageRegistry;

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

