//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNavigationConfiguration-Protocol.h"

@class NSSet, NSString;
@protocol SPTNavigationListItemsAppearance, SPTNavigationListProvider;

@interface SPTNavigationConfigurationImplementation : NSObject <SPTNavigationConfiguration>
{
    id <SPTNavigationListProvider> _listProvider;
    id <SPTNavigationListItemsAppearance> _listItemsAppearance;
    NSSet *_validTabBarAbbaFlagValues;
    NSSet *_tabBarFlagValuesFindEnabled;
}

@property(copy, nonatomic) NSSet *tabBarFlagValuesFindEnabled; // @synthesize tabBarFlagValuesFindEnabled=_tabBarFlagValuesFindEnabled;
@property(copy, nonatomic) NSSet *validTabBarAbbaFlagValues; // @synthesize validTabBarAbbaFlagValues=_validTabBarAbbaFlagValues;
@property(retain, nonatomic) id <SPTNavigationListItemsAppearance> listItemsAppearance; // @synthesize listItemsAppearance=_listItemsAppearance;
@property(retain, nonatomic) id <SPTNavigationListProvider> listProvider; // @synthesize listProvider=_listProvider;
- (void).cxx_destruct;
- (id)tabBarABFlagValue;
- (_Bool)isValidTabBarABFlagValue:(id)arg1;
- (id)defaultConfigurationFlagIdentifierMapping;
- (id)configurationIdentifier;
- (_Bool)shouldHideNavigationTitles;
- (_Bool)isFindEnabled;
- (id)initWithNavigationListProvider:(id)arg1 appearance:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
