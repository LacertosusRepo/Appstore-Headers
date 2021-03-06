//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, SPTFeatureSettingsItem, SPTFeatureSettingsPage;
@protocol SPTFeatureSettingsUIProvider;

@protocol SPTFeatureSettingsItemFactory <NSObject>
- (SPTFeatureSettingsItem *)itemWithLabel:(NSString *)arg1 description:(NSString *)arg2 UIProvider:(id <SPTFeatureSettingsUIProvider>)arg3;
- (SPTFeatureSettingsItem *)groupItemWithTitle:(NSString *)arg1 description:(NSString *)arg2 items:(NSArray *)arg3 presentAsSubPage:(_Bool)arg4;
- (SPTFeatureSettingsItem *)subPageItemWithLabel:(NSString *)arg1 description:(NSString *)arg2 factory:(UIViewController * (^)(void))arg3;
- (SPTFeatureSettingsItem *)actionItemWithTextField:(NSString *)arg1 description:(NSString *)arg2 action:(void (^)(NSString *))arg3;
- (SPTFeatureSettingsItem *)actionItemWithLabel:(NSString *)arg1 description:(NSString *)arg2 actionFromView:(void (^)(UIView *))arg3;
- (SPTFeatureSettingsItem *)actionItemWithTextField:(NSString *)arg1 description:(NSString *)arg2 autocorrectionEnabled:(_Bool)arg3 action:(void (^)(NSString *))arg4;
- (SPTFeatureSettingsItem *)actionItemWithLabel:(NSString *)arg1 description:(NSString *)arg2 action:(void (^)(void))arg3;
- (SPTFeatureSettingsItem *)multipleChoiceItemWithLabel:(NSString *)arg1 description:(NSString *)arg2 choices:(NSArray *)arg3 initialStateKey:(id)arg4 userDefaultsKey:(NSString *)arg5;
- (SPTFeatureSettingsItem *)multipleChoiceItemWithLabel:(NSString *)arg1 description:(NSString *)arg2 choices:(NSArray *)arg3 initialStateKey:(id)arg4 localSettingsKey:(NSString *)arg5;
- (SPTFeatureSettingsItem *)multipleChoiceItemWithLabel:(NSString *)arg1 description:(NSString *)arg2 choices:(NSArray *)arg3 initialStateKey:(id)arg4 action:(void (^)(id))arg5;
- (SPTFeatureSettingsItem *)switchItemWithLabel:(NSString *)arg1 description:(NSString *)arg2 initialState:(_Bool)arg3 userDefaultsKey:(NSString *)arg4 falseValue:(id)arg5 trueValue:(id)arg6;
- (SPTFeatureSettingsItem *)switchItemWithLabel:(NSString *)arg1 description:(NSString *)arg2 userDefaultsKey:(NSString *)arg3;
- (SPTFeatureSettingsItem *)switchItemWithLabel:(NSString *)arg1 description:(NSString *)arg2 initialState:(_Bool)arg3 localSettingsKey:(NSString *)arg4 falseValue:(id)arg5 trueValue:(id)arg6;
- (SPTFeatureSettingsItem *)switchItemWithLabel:(NSString *)arg1 description:(NSString *)arg2 localSettingsKey:(NSString *)arg3;
- (SPTFeatureSettingsItem *)switchItemWithLabel:(NSString *)arg1 description:(NSString *)arg2 initialState:(_Bool)arg3 action:(void (^)(_Bool))arg4;
- (SPTFeatureSettingsPage *)pageWithTitle:(NSString *)arg1;
@end

