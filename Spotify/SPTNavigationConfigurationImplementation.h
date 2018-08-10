//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTNavigationConfiguration.h"

@class NSSet, NSString;

@interface SPTNavigationConfigurationImplementation : NSObject <SPTNavigationConfiguration>
{
    id <SPTNavigationListProvider> _listProvider;
    id <SPTNavigationListItemsAppearance> _listItemsAppearance;
    NSString *_navigationMenuUserPolicyValue;
    NSSet *_validTabBarAbbaFlagValues;
    NSSet *_tabBarFlagValuesFindEnabled;
}

@property(retain, nonatomic) NSSet *tabBarFlagValuesFindEnabled; // @synthesize tabBarFlagValuesFindEnabled=_tabBarFlagValuesFindEnabled;
@property(retain, nonatomic) NSSet *validTabBarAbbaFlagValues; // @synthesize validTabBarAbbaFlagValues=_validTabBarAbbaFlagValues;
@property(retain, nonatomic) NSString *navigationMenuUserPolicyValue; // @synthesize navigationMenuUserPolicyValue=_navigationMenuUserPolicyValue;
@property(retain, nonatomic) id <SPTNavigationListItemsAppearance> listItemsAppearance; // @synthesize listItemsAppearance=_listItemsAppearance;
@property(retain, nonatomic) id <SPTNavigationListProvider> listProvider; // @synthesize listProvider=_listProvider;
- (void).cxx_destruct;
- (id)tabBarABFlagValue;
- (_Bool)isValidTabBarABFlagValue:(id)arg1;
- (id)defaultConfigurationFlagIdentifierMapping;
- (id)configurationIdentifier;
- (_Bool)shouldAnimateNavigationIcons;
- (_Bool)shouldHideNavigationTitles;
- (_Bool)isFindEnabled;
- (id)initWithNavigationListProvider:(id)arg1 appearance:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

