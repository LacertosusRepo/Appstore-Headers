//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTVocalRemovalLogger, SPTVocalRemovalMenuButtonViewModel, SPTVocalRemovalProgressViewManager, SPTVocalRemovalToggleButtonViewModel;
@protocol SPContextMenuFeature, SPTBannerPresentationManager, SPTGaiaConnectAPI, SPTInAppMessageMessageRequester, SPTLyricsV2TestManager, SPTPreferences, SPTVocalRemovalCoreManager;

@interface SPTVocalRemovalConfiguration : NSObject
{
    _Bool _isVocalRemovalAvailable;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTVocalRemovalCoreManager> _coreManager;
    SPTVocalRemovalMenuButtonViewModel *_menuViewModel;
    id <SPTLyricsV2TestManager> _testManager;
    SPTVocalRemovalToggleButtonViewModel *_vocalRemovalToggleViewModel;
    id <SPTPreferences> _preferences;
    SPTVocalRemovalLogger *_logger;
    id <SPTGaiaConnectAPI> _gaiaConnectAPI;
    id <SPTInAppMessageMessageRequester> _messageRequester;
    SPTVocalRemovalProgressViewManager *_progressViewManager;
    id <SPTBannerPresentationManager> _bannerPresentationManager;
}

@property(retain, nonatomic) id <SPTBannerPresentationManager> bannerPresentationManager; // @synthesize bannerPresentationManager=_bannerPresentationManager;
@property(retain, nonatomic) SPTVocalRemovalProgressViewManager *progressViewManager; // @synthesize progressViewManager=_progressViewManager;
@property(retain, nonatomic) id <SPTInAppMessageMessageRequester> messageRequester; // @synthesize messageRequester=_messageRequester;
@property(retain, nonatomic) id <SPTGaiaConnectAPI> gaiaConnectAPI; // @synthesize gaiaConnectAPI=_gaiaConnectAPI;
@property(retain, nonatomic) SPTVocalRemovalLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTPreferences> preferences; // @synthesize preferences=_preferences;
@property(nonatomic) _Bool isVocalRemovalAvailable; // @synthesize isVocalRemovalAvailable=_isVocalRemovalAvailable;
@property(retain, nonatomic) SPTVocalRemovalToggleButtonViewModel *vocalRemovalToggleViewModel; // @synthesize vocalRemovalToggleViewModel=_vocalRemovalToggleViewModel;
@property(retain, nonatomic) id <SPTLyricsV2TestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTVocalRemovalMenuButtonViewModel *menuViewModel; // @synthesize menuViewModel=_menuViewModel;
@property(retain, nonatomic) id <SPTVocalRemovalCoreManager> coreManager; // @synthesize coreManager=_coreManager;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
- (void).cxx_destruct;

@end

