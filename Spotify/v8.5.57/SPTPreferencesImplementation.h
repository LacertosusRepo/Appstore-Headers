//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPreferences-Protocol.h"

@class NSString;
@protocol SPTAsyncScheduler;

@interface SPTPreferencesImplementation : NSObject <SPTPreferences>
{
    struct unique_ptr<spotify::prefs::Prefs, std::__1::default_delete<spotify::prefs::Prefs>> _prefs;
    id <SPTAsyncScheduler> _scheduler;
}

@property(nonatomic) __weak id <SPTAsyncScheduler> scheduler; // @synthesize scheduler=_scheduler;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)prefsSetStringAsync:(const char *)arg1 string:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (long long)prefsGetInt:(const char *)arg1;
- (void)prefsSetInt:(const char *)arg1 val:(long long)arg2;
- (_Bool)prefsGetBool:(const char *)arg1;
- (void)prefsSetBool:(const char *)arg1 val:(_Bool)arg2;
@property(nonatomic) long long audioLoudnessEnvironment;
@property(nonatomic, getter=isAudioNormalised) _Bool audioNormalised;
@property(nonatomic) _Bool audioResyncBitrate;
@property(nonatomic) long long audioSyncBitrate;
@property(nonatomic) long long audioPlayBitrate;
@property(nonatomic) _Bool audioAutomix;
@property(nonatomic) long long audioCrossfadeTime;
@property(nonatomic) _Bool audioCrossfade;
@property(nonatomic) _Bool audioGapless;
@property(readonly, nonatomic) struct Prefs *cppPreferences;
- (id)initWithScheduler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

