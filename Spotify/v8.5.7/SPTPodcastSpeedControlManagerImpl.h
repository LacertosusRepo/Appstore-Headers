//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastSpeedControlManager-Protocol.h"

@class NSString, SPTPodcastPreferences, SPTTheme;
@protocol SPTPodcastLogger;

@interface SPTPodcastSpeedControlManagerImpl : NSObject <SPTPodcastSpeedControlManager>
{
    SPTPodcastPreferences *_podcastPreferences;
    id <SPTPodcastLogger> _podcastLogger;
    SPTTheme *_theme;
}

@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <SPTPodcastLogger> podcastLogger; // @synthesize podcastLogger=_podcastLogger;
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
- (id)initWithPodcastPreferences:(id)arg1 podcastLogger:(id)arg2 theme:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

