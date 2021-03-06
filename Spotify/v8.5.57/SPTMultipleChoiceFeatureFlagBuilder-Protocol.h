//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;
@protocol SPTMultipleChoiceFeatureFlagBuilder;

@protocol SPTMultipleChoiceFeatureFlagBuilder <NSObject>
@property(copy, nonatomic) NSString *defaultValue;
@property(copy, nonatomic) NSDictionary *optionDisplayNames;
@property(copy, nonatomic) NSArray *options;
@property(nonatomic) _Bool requiresRestartWhenSettingsChanged;
@property(copy, nonatomic) NSString *settingsItemDescription;
@property(copy, nonatomic) NSString *settingsItemTitle;
@property(copy, nonatomic) NSString *settingsPageTitle;
@property(copy, nonatomic) NSString *localSettingsKey;
@property(copy, nonatomic) NSString *abbaKey;
- (id <SPTMultipleChoiceFeatureFlagBuilder>)swift_withSettingsPageTitle:(NSString *)arg1 settingsItemTitle:(NSString *)arg2 settingsItemDescription:(NSString *)arg3 optionDisplayNames:(NSDictionary *)arg4 requiresRestart:(_Bool)arg5;
- (id <SPTMultipleChoiceFeatureFlagBuilder>)swift_withDefaultValue:(NSString *)arg1;
- (id <SPTMultipleChoiceFeatureFlagBuilder>)swift_withOptions:(NSArray *)arg1;
- (id <SPTMultipleChoiceFeatureFlagBuilder>)swift_withLocalSettingsKey:(NSString *)arg1;
- (id <SPTMultipleChoiceFeatureFlagBuilder>)swift_withAbbaKey:(NSString *)arg1;
- (NSDictionary *)buildSignals;
@end

