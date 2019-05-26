//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNavigationListDataSource-Protocol.h"

@class NSString, SPTNavigationSettingsRegistration;
@protocol SPTNavigationListIdentifierFromABTestSource;

@interface SPTNavigationListStaticDataSource : NSObject <SPTNavigationListDataSource>
{
    id <SPTNavigationListIdentifierFromABTestSource> _abTestDataSource;
    SPTNavigationSettingsRegistration *_settingsRegistration;
}

@property(retain, nonatomic) SPTNavigationSettingsRegistration *settingsRegistration; // @synthesize settingsRegistration=_settingsRegistration;
@property(nonatomic) __weak id <SPTNavigationListIdentifierFromABTestSource> abTestDataSource; // @synthesize abTestDataSource=_abTestDataSource;
- (void).cxx_destruct;
- (id)staticListIdentifiers;
- (id)createListChosenViaSettingsExcludingIdentifiers:(id)arg1;
- (id)defaultNavigationResourceURL;
- (id)createNavigationListMatchingIdentifier:(id)arg1;
- (id)loadNavigationlists;
- (id)initWithNavigationABTestSource:(id)arg1 settingsRegistration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

