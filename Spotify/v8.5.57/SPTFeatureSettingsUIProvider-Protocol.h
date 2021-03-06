//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTFeatureSettingsItem, UITableViewCell;
@protocol SPTFeatureSettingsUIPresentationContext;

@protocol SPTFeatureSettingsUIProvider <NSObject>
- (UITableViewCell *)featureSettingsPresentation:(id <SPTFeatureSettingsUIPresentationContext>)arg1 cellForRow:(unsigned long long)arg2;

@optional
- (void)featureSettingsItem:(SPTFeatureSettingsItem *)arg1 changedValueFrom:(id)arg2 to:(id)arg3;
- (double)featureSettingsPresentation:(id <SPTFeatureSettingsUIPresentationContext>)arg1 heightOfRow:(unsigned long long)arg2;
- (void)featureSettingsPresentation:(id <SPTFeatureSettingsUIPresentationContext>)arg1 didSelectRow:(unsigned long long)arg2;
- (unsigned long long)numberOfRowsForFeatureSettingsItem:(SPTFeatureSettingsItem *)arg1;
@end

