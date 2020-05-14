//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRemoteConfigurationProperties-Protocol.h"

@class NSString;

@interface SPTYourLibraryFeatureProperties : NSObject <SPTRemoteConfigurationProperties>
{
    _Bool _yourLibraryPersistActiveTab;
    _Bool _yourLibraryCreateButtonInHeaderEnabled;
    long long _yourLibraryPersistActiveTabDurationInHours;
}

@property(readonly, nonatomic) long long yourLibraryPersistActiveTabDurationInHours; // @synthesize yourLibraryPersistActiveTabDurationInHours=_yourLibraryPersistActiveTabDurationInHours;
@property(readonly, nonatomic) _Bool yourLibraryCreateButtonInHeaderEnabled; // @synthesize yourLibraryCreateButtonInHeaderEnabled=_yourLibraryCreateButtonInHeaderEnabled;
@property(readonly, nonatomic) _Bool yourLibraryPersistActiveTab; // @synthesize yourLibraryPersistActiveTab=_yourLibraryPersistActiveTab;
- (id)propertyModels;
- (id)initWithPropertyValuesDictionary:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

