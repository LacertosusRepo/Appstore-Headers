//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureSettingsUIProvider-Protocol.h"

@class NSString;
@protocol SPTIAPController;

@interface SPTIAPFeatureSettingsAvailableProductsUIProvider : NSObject <SPTFeatureSettingsUIProvider>
{
    id <SPTIAPController> _iapController;
}

@property(retain, nonatomic) id <SPTIAPController> iapController; // @synthesize iapController=_iapController;
- (void).cxx_destruct;
- (void)featureSettingsPresentation:(id)arg1 didSelectRow:(unsigned long long)arg2;
- (id)featureSettingsPresentation:(id)arg1 cellForRow:(unsigned long long)arg2;
- (unsigned long long)numberOfRowsForFeatureSettingsItem:(id)arg1;
- (id)initWithIAPController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

