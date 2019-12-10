//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IMSharedDataManager.h"

#import "IMManagerStateDelegate-Protocol.h"

@class IMCallHandle, IMVeil, NSMutableArray, NSString;

@interface IMSynchronizedSharedDataManager : IMSharedDataManager <IMManagerStateDelegate>
{
    _Bool checkingState;
    _Bool repeatCheckSyncState;
    IMCallHandle *callHandle;
    NSMutableArray *notifications;
    _Bool didFireFirstSyncNotification;
    IMVeil *veil;
    unsigned long long lastReportedTimestamp;
}

+ (id)instance;
- (void).cxx_destruct;
@property(nonatomic) _Bool synchronizationEnabled;
- (id)userDefaultsKey;
- (id)registerFirstSyncNotification:(CDUnknownBlockType)arg1;
- (void)fireFirstSyncNotification;
- (void)fireNotificationsForEntry:(id)arg1;
- (void)unregisterNotification:(id)arg1;
- (id)registerSortOptionsChangeNotification:(CDUnknownBlockType)arg1 forItemId:(id)arg2;
- (id)registerItemChangeNotification:(CDUnknownBlockType)arg1 forItem:(id)arg2;
- (id)registerLastPosititonChangeNotification:(CDUnknownBlockType)arg1;
- (id)registerPlaybackEntryChangeNotification:(CDUnknownBlockType)arg1;
- (id)registerHistoryChangeNotification:(CDUnknownBlockType)arg1;
- (id)nextNotificationToken;
- (void)connectionDidChange;
- (void)imManagerStateDidDisconnect:(id)arg1;
- (void)imManagerStateDidConnect:(id)arg1;
- (void)imManagerState:(id)arg1 didChangeValuesForKeys:(id)arg2;
- (void)didWriteEntry:(id)arg1;
- (void)checkSyncState;
- (void)checkSyncStatePull:(_Bool)arg1 push:(_Bool)arg2;
- (void)checkSyncPush:(CDUnknownBlockType)arg1;
- (unsigned long long)newEntryTimestamp;
- (void)checkSyncPull:(CDUnknownBlockType)arg1;
- (id)sharedServerSatate;
- (void)doneCheckingState;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
