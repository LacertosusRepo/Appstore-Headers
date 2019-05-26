//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNavigationListIdentifierFromABTestSource-Protocol.h"

@class NSString, SPTNavigationSettingsRegistration;
@protocol SPTNavigationListProvider, SPTProductState;

@interface SPTNavigationListIdentifierFromABTestSourceImpl : NSObject <SPTNavigationListIdentifierFromABTestSource>
{
    _Bool _newExperienceEnabled;
    id <SPTProductState> _productState;
    id <SPTNavigationListProvider> _listProvider;
    NSString *_navigationMenuUserPolicyValue;
    NSString *_navigationMenuUserPolicyListIdentifier;
    SPTNavigationSettingsRegistration *_registration;
}

@property(nonatomic) _Bool newExperienceEnabled; // @synthesize newExperienceEnabled=_newExperienceEnabled;
@property(retain, nonatomic) SPTNavigationSettingsRegistration *registration; // @synthesize registration=_registration;
@property(copy, nonatomic) NSString *navigationMenuUserPolicyListIdentifier; // @synthesize navigationMenuUserPolicyListIdentifier=_navigationMenuUserPolicyListIdentifier;
@property(copy, nonatomic) NSString *navigationMenuUserPolicyValue; // @synthesize navigationMenuUserPolicyValue=_navigationMenuUserPolicyValue;
@property(retain, nonatomic) id <SPTNavigationListProvider> listProvider; // @synthesize listProvider=_listProvider;
@property(nonatomic) __weak id <SPTProductState> productState; // @synthesize productState=_productState;
- (void).cxx_destruct;
- (id)navigationSettingsListIdentifierValue;
- (id)initWithProductState:(id)arg1 settingsRegistration:(id)arg2 newExperienceEnabled:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

