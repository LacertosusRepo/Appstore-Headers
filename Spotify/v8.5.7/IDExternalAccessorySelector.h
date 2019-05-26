//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EAAccessory, EAAccessoryManager, NSLock;

@interface IDExternalAccessorySelector : NSObject
{
    EAAccessory *_externalAccessory;
    EAAccessoryManager *_eaAccessoryManager;
    id _accessoryDidConnectNotificationObserver;
    id _accessoryDidDisconnectNotificationObserver;
    NSLock *_accessorySelectLock;
}

+ (id)sharedInstance;
@property(retain) NSLock *accessorySelectLock; // @synthesize accessorySelectLock=_accessorySelectLock;
@property(retain, nonatomic) id accessoryDidDisconnectNotificationObserver; // @synthesize accessoryDidDisconnectNotificationObserver=_accessoryDidDisconnectNotificationObserver;
@property(retain, nonatomic) id accessoryDidConnectNotificationObserver; // @synthesize accessoryDidConnectNotificationObserver=_accessoryDidConnectNotificationObserver;
@property(retain) EAAccessoryManager *eaAccessoryManager; // @synthesize eaAccessoryManager=_eaAccessoryManager;
@property(retain) EAAccessory *externalAccessory; // @synthesize externalAccessory=_externalAccessory;
- (void).cxx_destruct;
- (_Bool)isValidExternalAccessory:(id)arg1 forProtocol:(id)arg2;
- (_Bool)isValidExternalAccessory:(id)arg1;
- (_Bool)isCurrentExternalAccessory:(id)arg1;
- (id)sessionForSelectedExternalAccessoryWithProtocol:(id)arg1;
- (_Bool)selectedAccessoryHasMultisessionSupport;
- (id)selectValidExternalAccessory;
- (void)selectAccessory;
- (id)selectedExternalAccessory;
- (void)notifyAccessoryDidDisappear;
- (void)notifyAccessoryDidAppear;
- (id)description;
- (void)unregisterExternalAccessoryNotificationObservers;
- (void)registerExternalAccessoryNotificationObservers;
- (void)dealloc;
- (id)init;
- (id)initWithEAAccessoryManager:(id)arg1;

@end

