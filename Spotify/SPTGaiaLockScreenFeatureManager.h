//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTGaiaLockScreenControlsStateProvider.h"
#import "SPTGaiaLockScreenPlayerFlagsObserver.h"
#import "SPTGaiaSettingsObserver.h"

@class NSHashTable, NSString;

@interface SPTGaiaLockScreenFeatureManager : NSObject <SPTGaiaSettingsObserver, SPTGaiaLockScreenPlayerFlagsObserver, SPTGaiaLockScreenControlsStateProvider>
{
    id <SPTGaiaLockScreenPlayerFlagsProvider> _lockScreenFlagsProvider;
    id <SPTGaiaSettingsProvider> _settingsProvider;
    NSHashTable *_observers;
}

@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) id <SPTGaiaSettingsProvider> settingsProvider; // @synthesize settingsProvider=_settingsProvider;
@property(retain, nonatomic) id <SPTGaiaLockScreenPlayerFlagsProvider> lockScreenFlagsProvider; // @synthesize lockScreenFlagsProvider=_lockScreenFlagsProvider;
- (void).cxx_destruct;
- (void)updateObservers;
- (void)lockScreenControlsFlagChanged:(_Bool)arg1;
- (void)lockScreenControlsSettingsChanged:(_Bool)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (_Bool)lockScreenFeatureIsEnabled;
- (void)dealloc;
- (id)initWithLockScreenPlayerFlagsProvider:(id)arg1 settingsProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

