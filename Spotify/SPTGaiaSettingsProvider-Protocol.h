//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SPTGaiaSettingsProvider <NSObject>
@property(nonatomic) _Bool automaticallyTransfersPlaybackForHomeDevice;
@property(nonatomic) _Bool lockScreenControlsEnabled;
@property(nonatomic) _Bool localDevicesFilterEnabled;
- (void)removeObserver:(id <SPTGaiaSettingsObserver>)arg1;
- (void)addObserver:(id <SPTGaiaSettingsObserver>)arg1;
@end
