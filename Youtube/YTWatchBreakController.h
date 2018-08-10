//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTUserDefaultsObserver.h"

@class GIMMe, NSString, YTMonotonicDate, YTSettings, YTTimedAction, YTUserDefaults;

@interface YTWatchBreakController : NSObject <YTUserDefaultsObserver>
{
    _Bool _triggerWatchBreakAfterVideoEnds;
    YTUserDefaults *_userDefaults;
    YTSettings *_settings;
    _Bool _watchBreakEnabled;
    GIMMe *_gimme;
    id <YTWatchBreakControllerDelegate> _delegate;
    YTMonotonicDate *_playbackStartTime;
    YTTimedAction *_timer;
    double _watchBreakFrequency;
    double _watchTime;
}

@property(nonatomic) double watchTime; // @synthesize watchTime=_watchTime;
@property(nonatomic) double watchBreakFrequency; // @synthesize watchBreakFrequency=_watchBreakFrequency;
@property(nonatomic) _Bool watchBreakEnabled; // @synthesize watchBreakEnabled=_watchBreakEnabled;
@property(retain, nonatomic) YTTimedAction *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) YTMonotonicDate *playbackStartTime; // @synthesize playbackStartTime=_playbackStartTime;
@property(nonatomic) __weak id <YTWatchBreakControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)logFrequencyChangeFrom:(double)arg1 to:(double)arg2;
- (void)logEnablementChange:(_Bool)arg1;
- (void)stopTimer;
- (void)startResetTimer;
- (void)startBreakTimer;
- (void)resetWatchTime;
- (void)saveWatchTime;
- (void)triggerBreak;
- (void)breakTimerEnded;
- (void)valueDidChangeForKey:(id)arg1;
- (void)videoDidEnd;
- (id)watchBreakSetting;
- (void)playbackDidStop;
- (void)playbackDidStart;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

