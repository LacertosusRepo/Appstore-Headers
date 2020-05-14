//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol SPTCarModeEngineObserver;

@protocol SPTCarModeEngine
- (void)removeObserver:(id <SPTCarModeEngineObserver>)arg1;
- (void)addObserver:(id <SPTCarModeEngineObserver>)arg1;
- (void)carViewAvailabilityChangedWithEnabled:(_Bool)arg1;
- (void)deactivationTriggered;
- (void)activationDismissed;
- (void)activationTriggered;
@property(nonatomic, readonly) long long state;
@end
