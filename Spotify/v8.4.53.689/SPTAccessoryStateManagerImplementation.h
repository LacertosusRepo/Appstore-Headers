//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAccessoryStateManager.h"

@class NSHashTable, NSSet, NSString, SPTAccessoryManagerLogging;

@interface SPTAccessoryStateManagerImplementation : NSObject <SPTAccessoryStateManager>
{
    id <SPTCrashReporter> _crashReporter;
    SPTAccessoryManagerLogging *_logger;
    NSSet *_accessories;
    NSHashTable *_observers;
}

@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSSet *accessories; // @synthesize accessories=_accessories;
@property(readonly, nonatomic) SPTAccessoryManagerLogging *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTCrashReporter> crashReporter; // @synthesize crashReporter=_crashReporter;
- (void).cxx_destruct;
- (void)notifyAccessoryDisconnected:(id)arg1;
- (void)notifyAccessoryConnected:(id)arg1;
- (void)notifyCrashReporterForAccessory:(id)arg1 forState:(id)arg2;
- (void)removeAccessory:(id)arg1;
- (void)addAccessory:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)currentAccessories;
- (id)initWithCrashReporter:(id)arg1 logger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

