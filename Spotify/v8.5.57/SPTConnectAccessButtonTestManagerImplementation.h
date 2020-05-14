//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTConnectAccessButtonTestManager-Protocol.h"

@class NSString;
@protocol SPTAbbaFeatureFlags;

@interface SPTConnectAccessButtonTestManagerImplementation : NSObject <SPTConnectAccessButtonTestManager>
{
    _Bool _buttonEnabled;
    id <SPTAbbaFeatureFlags> _featureFlags;
}

@property(nonatomic) _Bool buttonEnabled; // @synthesize buttonEnabled=_buttonEnabled;
@property(retain, nonatomic) id <SPTAbbaFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
- (void).cxx_destruct;
- (_Bool)connectAccessButtonEnabled;
- (void)setup;
- (id)initWithFeatureFlags:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

