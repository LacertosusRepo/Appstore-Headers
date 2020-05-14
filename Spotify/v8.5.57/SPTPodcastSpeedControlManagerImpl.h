//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastSpeedControlManager-Protocol.h"

@class NSString, SPTPodcastLogger, SPTPodcastPreferences, SPTTheme;
@protocol SPTPodcastTestManager;

@interface SPTPodcastSpeedControlManagerImpl : NSObject <SPTPodcastSpeedControlManager>
{
    SPTPodcastPreferences *_podcastPreferences;
    SPTPodcastLogger *_logger;
    SPTTheme *_theme;
    id <SPTPodcastTestManager> _podcastTestManager;
}

@property(readonly, nonatomic) id <SPTPodcastTestManager> podcastTestManager; // @synthesize podcastTestManager=_podcastTestManager;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTPodcastLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTPodcastPreferences *podcastPreferences; // @synthesize podcastPreferences=_podcastPreferences;
- (void).cxx_destruct;
- (void)removePodcastPreferencesObserver:(id)arg1;
- (void)addPodcastPreferencesObserver:(id)arg1;
- (id)currentPodcastPlaybackSpeed;
- (void)setCurrentPodcastPlaybackSpeedOption:(unsigned long long)arg1;
- (id)providePodcastPlaybackSpeedForValue:(id)arg1;
- (id)providePodcastPlaybackSpeeds;
- (id)currentPodcastPlaybackSpeedIconWithSize:(struct CGSize)arg1;
- (id)provideSpeedControlIconImage;
- (id)providePodcastSpeedControlViewController;
- (id)initWithPodcastPreferences:(id)arg1 podcastLogger:(id)arg2 theme:(id)arg3 podcastTestManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

