//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "SPTNotificationSwitchDelegate-Protocol.h"
#import "SPTOfflineModeStateObserver-Protocol.h"
#import "SPTPageController-Protocol.h"

@class NSArray, NSString, NSURL, SPTInfoView, SPTNotificationLogger, SPTNotificationPreferencesBackendIntegrator, SPTNotificationsStyle;
@protocol SPTAlertController, SPTOfflineModeState, SPTPageContainer;

@interface SPTNotificationPreferencesViewController : UITableViewController <SPTNotificationSwitchDelegate, SPTPageController, SPTOfflineModeStateObserver>
{
    SPTNotificationsStyle *_notificationsStyle;
    SPTNotificationPreferencesBackendIntegrator *_notificationBackendIntegrator;
    NSArray *_preferences;
    id <SPTOfflineModeState> _offlineModeState;
    SPTInfoView *_infoView;
    id <SPTAlertController> _alertController;
    SPTNotificationLogger *_logger;
}

@property(retain, nonatomic) SPTNotificationLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(retain, nonatomic) NSArray *preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) SPTNotificationPreferencesBackendIntegrator *notificationBackendIntegrator; // @synthesize notificationBackendIntegrator=_notificationBackendIntegrator;
@property(retain, nonatomic) SPTNotificationsStyle *notificationsStyle; // @synthesize notificationsStyle=_notificationsStyle;
- (void).cxx_destruct;
- (void)unsubscribe:(id)arg1 channel:(long long)arg2;
- (void)subscribe:(id)arg1 channel:(long long)arg2;
- (id)notificationTypeAtIndexPath:(id)arg1;
- (void)handleNotificationServiceError:(id)arg1;
- (void)fetchPreferences;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)logChangeNotificationType:(id)arg1 channel:(long long)arg2 isSubscribed:(_Bool)arg3 itemIndex:(long long)arg4;
- (void)notificationSwitchDidChangeState:(id)arg1 channel:(long long)arg2 isSubscribed:(_Bool)arg3;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)refreshViewModeForOffline:(_Bool)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNotificationBackendIntegrator:(id)arg1 offlineModeState:(id)arg2 alertController:(id)arg3 logger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

