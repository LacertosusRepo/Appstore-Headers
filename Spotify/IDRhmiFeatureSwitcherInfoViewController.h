//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDCheckboxDelegate.h"
#import "IDViewDelegate.h"

@class IDRhmiFeatureInfo, NSConditionLock, NSString, NSUserDefaults;

@interface IDRhmiFeatureSwitcherInfoViewController : NSObject <IDCheckboxDelegate, IDViewDelegate>
{
    _Bool _appswitchConfirmationValue;
    long long _hmiLanguage;
    id <IDRhmiFeatureSwitcherMainView> _mainView;
    id <IDRhmiFeatureSwitcherInfoView> _infoView;
    NSConditionLock *_stateCondition;
    IDRhmiFeatureInfo *_featureInfo;
    NSUserDefaults *_userDefaults;
}

+ (id)new;
@property(retain) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property _Bool appswitchConfirmationValue; // @synthesize appswitchConfirmationValue=_appswitchConfirmationValue;
@property(retain) IDRhmiFeatureInfo *featureInfo; // @synthesize featureInfo=_featureInfo;
@property(retain) NSConditionLock *stateCondition; // @synthesize stateCondition=_stateCondition;
@property(readonly) id <IDRhmiFeatureSwitcherInfoView> infoView; // @synthesize infoView=_infoView;
@property(readonly) id <IDRhmiFeatureSwitcherMainView> mainView; // @synthesize mainView=_mainView;
@property(nonatomic) long long hmiLanguage; // @synthesize hmiLanguage=_hmiLanguage;
- (void).cxx_destruct;
- (void)updateUI;
- (_Bool)shouldHideAppswitchConfirmation;
- (void)storeAppSwitchConfirmation;
- (void)viewDidLoseFocus:(id)arg1;
- (void)checkbox:(id)arg1 didChangeCheckedValue:(_Bool)arg2;
- (_Bool)checkboxShouldToggle:(id)arg1;
- (void)handleSelectConfirmButton:(id)arg1;
- (void)trySwitchToRhmiFeature;
- (void)switchToRhmiFeature:(id)arg1;
- (void)resetState;
- (id)init;
- (id)initWithMainView:(id)arg1 infoView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

