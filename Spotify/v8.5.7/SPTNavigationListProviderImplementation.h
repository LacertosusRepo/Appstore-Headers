//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNavigationListProvider-Protocol.h"

@class NSMutableDictionary, NSString, SPTNavigationListDataLoader;
@protocol SPTNavigationList, SPTNavigationListIdentifierFromABTestSource;

@interface SPTNavigationListProviderImplementation : NSObject <SPTNavigationListProvider>
{
    NSMutableDictionary *_listMap;
    id <SPTNavigationListIdentifierFromABTestSource> _navigationABTestSource;
    SPTNavigationListDataLoader *_listDataLoader;
    id <SPTNavigationList> _list;
}

@property(retain, nonatomic) id <SPTNavigationList> list; // @synthesize list=_list;
@property(retain, nonatomic) SPTNavigationListDataLoader *listDataLoader; // @synthesize listDataLoader=_listDataLoader;
@property(retain, nonatomic) id <SPTNavigationListIdentifierFromABTestSource> navigationABTestSource; // @synthesize navigationABTestSource=_navigationABTestSource;
@property(readonly, nonatomic) NSMutableDictionary *listMap; // @synthesize listMap=_listMap;
- (void).cxx_destruct;
- (id)userPolicyValue;
- (id)settingsValue;
- (id)defaultList;
- (_Bool)registerNavigationList:(id)arg1;
- (id)provideNavigationList;
- (void)dealloc;
- (id)initWithListDataLoader:(id)arg1 navigationABTestSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

