//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSortingFilteringPreferences-Protocol.h"

@class NSString, NSURL;
@protocol SPTLocalSettings;

@interface SPTSortingFilteringPreferencesImplementation : NSObject <SPTSortingFilteringPreferences>
{
    NSURL *_entityURL;
    id <SPTLocalSettings> _localSettings;
}

@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) NSURL *entityURL; // @synthesize entityURL=_entityURL;
- (void).cxx_destruct;
- (id)filterRulesKey;
- (id)sortRuleKey;
- (id)preferredFilterRulesFromAvailableFilterRules:(id)arg1;
- (void)savePreferredFilteringRules:(id)arg1;
- (id)preferredSortingRuleFromAvailableSortingRules:(id)arg1 withDefaultSortRuleIdentifier:(id)arg2;
- (id)preferredSortingRuleFromAvailableSortingRules:(id)arg1;
- (void)savePreferredSortingRule:(id)arg1;
- (id)initWithLocalSettings:(id)arg1 entityURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
