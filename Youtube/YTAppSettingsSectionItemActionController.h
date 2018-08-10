//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GOOAlertViewDelegate.h"
#import "YTAppSettingsSectionItemControllerDelegate.h"
#import "YTAppSettingsStoreObserver.h"
#import "YTResponder.h"

@class GIMMe, GOOAlertView, NSString, YTAppSettingsStore, YTFusedSettingsService, YTNotificationSettingsViewController, YTSettingsSectionItemManager;

@interface YTAppSettingsSectionItemActionController : NSObject <GOOAlertViewDelegate, YTAppSettingsStoreObserver, YTResponder, YTAppSettingsSectionItemControllerDelegate>
{
    id <YTAppSettingsViewControllerDelegate> _settingsViewControllerDelegate;
    id <YTAppSettingsSectionItemDataDelegate> _dataDelegate;
    YTNotificationSettingsViewController *_notificationSettingsViewController;
    YTFusedSettingsService *_fusedSettingsService;
    YTAppSettingsStore *_appSettingsStore;
    GOOAlertView *_deleteAllOfflineContentAlertView;
    YTSettingsSectionItemManager *_sectionItemManager;
    _Bool _hasOfflineContent;
    unsigned long long _configRefreshTapCount;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)appSettingsStore:(id)arg1 didChangeSetting:(int)arg2 fromValue:(id)arg3 toValue:(id)arg4;
- (void)updateSectionForCategory:(unsigned long long)arg1 withEntry:(id)arg2;
- (_Bool)hasOfflineContent;
- (_Bool)onPauseHistorySetting:(int)arg1 fromView:(id)arg2 switchOn:(_Bool)arg3;
- (_Bool)onToggleBooleanRenderer:(id)arg1 fromView:(id)arg2 switchOn:(_Bool)arg3;
- (void)getHistoryPausedStatus;
- (_Bool)onClearSearchHistory;
- (_Bool)onClearWatchHistory;
- (void)deleteAllOfflineContent;
- (_Bool)onDeleteAllOfflineContent;
- (void)showSettingsTextFieldWithNavTitle:(id)arg1 textTitle:(id)arg2 text:(id)arg3 textChangeBlock:(CDUnknownBlockType)arg4;
- (void)setupWebViewController:(id)arg1;
- (void)handleServerSideBooleanForSetting:(int)arg1;
- (void)alertViewDidDisappear:(id)arg1 cancelAction:(_Bool)arg2;
- (void)showSettingsPickerWithNavTitle:(id)arg1 pickerSectionTitle:(id)arg2 items:(id)arg3 selectedItemIndex:(unsigned long long)arg4 selectBlock:(CDUnknownBlockType)arg5;
- (_Bool)onCompany;
- (_Bool)onAppVersion;
- (void)showSendFeedbackPopup;
- (void)showHelp;
- (_Bool)showGamingThirdPartySettings:(id)arg1;
- (_Bool)showLiveChatMenu:(id)arg1;
- (_Bool)showNotificationsMenu;
- (void)setHasOfflineContent:(_Bool)arg1;
- (void)showWebViewWithURL:(id)arg1;
- (id)settings;
- (void)handleNotificationSettingsRenderer:(id)arg1;
- (void)dealloc;
- (id)initWithParentResponder:(id)arg1 settingsViewControllerDelegate:(id)arg2 dataDelegate:(id)arg3 fusedSettingsService:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
