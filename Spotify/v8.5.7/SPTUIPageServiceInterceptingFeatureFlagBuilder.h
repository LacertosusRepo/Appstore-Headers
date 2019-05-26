//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagBuilder-Protocol.h"

@class NSArray, NSString;
@protocol SPTFeatureFlagBuilder, SPTFeatureFlagSignal;

@interface SPTUIPageServiceInterceptingFeatureFlagBuilder : NSObject <SPTFeatureFlagBuilder>
{
    _Bool _hasBeenModified;
    id <SPTFeatureFlagBuilder> _underlyingFeatureFlagBuilder;
}

@property(retain, nonatomic) id <SPTFeatureFlagBuilder> underlyingFeatureFlagBuilder; // @synthesize underlyingFeatureFlagBuilder=_underlyingFeatureFlagBuilder;
@property(nonatomic) _Bool hasBeenModified; // @synthesize hasBeenModified=_hasBeenModified;
- (void).cxx_destruct;
- (id)swift_withDefaultState:(long long)arg1;
- (id)swift_withDependencies:(id)arg1;
- (id)swift_withBaseSignal:(id)arg1;
- (id)swift_withSettingsPageTitle:(id)arg1 settingsItemTitle:(id)arg2 settingsItemDescription:(id)arg3 requiresRestart:(_Bool)arg4;
- (id)swift_withLocalSettingsKey:(id)arg1;
- (id)swift_withProductStateKey:(id)arg1 signalMapper:(CDUnknownBlockType)arg2;
- (id)swift_withProductStateKey:(id)arg1 enabledValue:(id)arg2 disabledValue:(id)arg3;
- (id)swift_withProductStateKey:(id)arg1;
- (id)swift_withAbbaKey:(id)arg1 signalMapper:(CDUnknownBlockType)arg2;
- (id)swift_withAbbaKey:(id)arg1 enabledValue:(id)arg2 disabledValue:(id)arg3;
- (id)swift_withAbbaKey:(id)arg1;
@property(retain, nonatomic) NSArray *dependencies;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> baseSignal;
@property(nonatomic) long long defaultState;
@property(nonatomic) _Bool requiresRestartWhenSettingsChanged;
@property(copy, nonatomic) NSString *settingsItemDescription;
@property(copy, nonatomic) NSString *settingsItemTitle;
@property(copy, nonatomic) NSString *settingsPageTitle;
@property(copy, nonatomic) NSString *localSettingsKey;
@property(copy, nonatomic) CDUnknownBlockType productStateSignalMapper;
@property(copy, nonatomic) NSString *productStateDisabledValue;
@property(copy, nonatomic) NSString *productStateEnabledValue;
@property(copy, nonatomic) NSString *productStateKey;
@property(copy, nonatomic) CDUnknownBlockType abbaSignalMapper;
@property(copy, nonatomic) NSString *abbaDisabledValue;
@property(copy, nonatomic) NSString *abbaEnabledValue;
@property(copy, nonatomic) NSString *abbaKey;
- (id)buildSignal;
- (id)initWithFeatureFlagBuilder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

