//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDRhmiFeatureInfoFilter, IDRhmiSubmenu;
@protocol IDHmiProvider, IDRhmiFeatureSwitcherInfoView, IDRhmiFeatureSwitcherMainView;

@interface IDRhmiFeatureSwitcherViewControllerConfiguration : NSObject
{
    IDRhmiSubmenu *_submenu;
    IDRhmiFeatureInfoFilter *_featureInfosFilter;
    id <IDHmiProvider> _hmiProvider;
    id <IDRhmiFeatureSwitcherMainView> _mainView;
    id <IDRhmiFeatureSwitcherInfoView> _infoView;
}

+ (id)new;
+ (id)navigationConfiguration;
+ (id)settingsConfiguration;
+ (id)mediaRadioConfiguration;
+ (id)multimediaConfiguration;
+ (id)radioConfiguration;
+ (id)onlineServicesConfiguration;
@property(readonly) id <IDRhmiFeatureSwitcherInfoView> infoView; // @synthesize infoView=_infoView;
@property(readonly) id <IDRhmiFeatureSwitcherMainView> mainView; // @synthesize mainView=_mainView;
@property(readonly) id <IDHmiProvider> hmiProvider; // @synthesize hmiProvider=_hmiProvider;
@property(readonly) IDRhmiFeatureInfoFilter *featureInfosFilter; // @synthesize featureInfosFilter=_featureInfosFilter;
@property(readonly) IDRhmiSubmenu *submenu; // @synthesize submenu=_submenu;
- (void).cxx_destruct;
- (id)init;
- (id)initWithSubMenu:(id)arg1 filter:(id)arg2 hmiProvider:(id)arg3 mainView:(id)arg4 infoView:(id)arg5;

@end
