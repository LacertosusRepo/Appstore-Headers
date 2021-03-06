//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRemoteConfigurationProperties-Protocol.h"

@class NSString;

@interface SPTCarPlayFeatureProperties : NSObject <SPTRemoteConfigurationProperties>
{
    _Bool _carplayFeature;
    _Bool _carplayDeferImageLoading;
    _Bool _carplayDisableTrackImages;
    _Bool _carplayRemoteControlEventSubtypeDeprecation;
    _Bool _carplayRemoteControlEventLoggingEnabled;
    _Bool _carplayUbiEnabled;
    _Bool _carplayLargeListsEnabled;
}

@property(readonly, nonatomic) _Bool carplayLargeListsEnabled; // @synthesize carplayLargeListsEnabled=_carplayLargeListsEnabled;
@property(readonly, nonatomic) _Bool carplayUbiEnabled; // @synthesize carplayUbiEnabled=_carplayUbiEnabled;
@property(readonly, nonatomic) _Bool carplayRemoteControlEventLoggingEnabled; // @synthesize carplayRemoteControlEventLoggingEnabled=_carplayRemoteControlEventLoggingEnabled;
@property(readonly, nonatomic) _Bool carplayRemoteControlEventSubtypeDeprecation; // @synthesize carplayRemoteControlEventSubtypeDeprecation=_carplayRemoteControlEventSubtypeDeprecation;
@property(readonly, nonatomic) _Bool carplayDisableTrackImages; // @synthesize carplayDisableTrackImages=_carplayDisableTrackImages;
@property(readonly, nonatomic) _Bool carplayDeferImageLoading; // @synthesize carplayDeferImageLoading=_carplayDeferImageLoading;
@property(readonly, nonatomic) _Bool carplayFeature; // @synthesize carplayFeature=_carplayFeature;
- (id)propertyModels;
- (id)initWithPropertyValuesDictionary:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

