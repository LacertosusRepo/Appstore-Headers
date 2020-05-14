//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString, NSURL, SPTHomeMixMetadataModelEntity;

@interface SPTHomeMixDomainModel : NSObject <NSCopying>
{
    _Bool _loaded;
    _Bool _enabled;
    _Bool _tasteOnboardingRequired;
    _Bool _genrePageContextMenuDisabled;
    _Bool _playing;
    _Bool _playingHomeMixContext;
    _Bool _explicitContentRestricted;
    _Bool _offline;
    _Bool _pendingMoodChange;
    _Bool _settingsChangePending;
    _Bool _joinPending;
    NSURL *_homeMixURI;
    NSString *_username;
    unsigned long long _entityDisplayMode;
    SPTHomeMixMetadataModelEntity *_metadataEntity;
    NSArray *_trackEntities;
    NSURL *_currentlyPlayingTrackURI;
    unsigned long long _mood;
}

+ (id)defaultModelWithHomeMixURI:(id)arg1 username:(id)arg2;
@property(readonly, nonatomic, getter=isJoinPending) _Bool joinPending; // @synthesize joinPending=_joinPending;
@property(readonly, nonatomic, getter=isSettingsChangePending) _Bool settingsChangePending; // @synthesize settingsChangePending=_settingsChangePending;
@property(readonly, nonatomic, getter=isPendingMoodChange) _Bool pendingMoodChange; // @synthesize pendingMoodChange=_pendingMoodChange;
@property(readonly, nonatomic) unsigned long long mood; // @synthesize mood=_mood;
@property(readonly, nonatomic, getter=isOffline) _Bool offline; // @synthesize offline=_offline;
@property(readonly, nonatomic, getter=isExplicitContentRestricted) _Bool explicitContentRestricted; // @synthesize explicitContentRestricted=_explicitContentRestricted;
@property(readonly, nonatomic, getter=isPlayingHomeMixContext) _Bool playingHomeMixContext; // @synthesize playingHomeMixContext=_playingHomeMixContext;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(readonly, nonatomic) NSURL *currentlyPlayingTrackURI; // @synthesize currentlyPlayingTrackURI=_currentlyPlayingTrackURI;
@property(readonly, nonatomic, getter=isGenrePageContextMenuDisabled) _Bool genrePageContextMenuDisabled; // @synthesize genrePageContextMenuDisabled=_genrePageContextMenuDisabled;
@property(readonly, copy, nonatomic) NSArray *trackEntities; // @synthesize trackEntities=_trackEntities;
@property(readonly, nonatomic) SPTHomeMixMetadataModelEntity *metadataEntity; // @synthesize metadataEntity=_metadataEntity;
@property(readonly, nonatomic, getter=isTasteOnboardingRequired) _Bool tasteOnboardingRequired; // @synthesize tasteOnboardingRequired=_tasteOnboardingRequired;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) unsigned long long entityDisplayMode; // @synthesize entityDisplayMode=_entityDisplayMode;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) NSURL *homeMixURI; // @synthesize homeMixURI=_homeMixURI;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToModel:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)toBuilder;
@property(readonly, nonatomic, getter=areContextMenuSettingsAvailable) _Bool contextMenuSettingsAvailable;
@property(readonly, nonatomic, getter=areContextMenuSettingsDisabled) _Bool contextMenuSettingsDisabled;
- (id)initWithHomeMixURI:(id)arg1 username:(id)arg2 currentlyPlayingTrackURI:(id)arg3 playing:(_Bool)arg4 playingHomeMixContext:(_Bool)arg5 offline:(_Bool)arg6 entityMode:(unsigned long long)arg7 mood:(unsigned long long)arg8 pendingMoodChange:(_Bool)arg9 tasteOnboardingRequired:(_Bool)arg10 metaDataEntity:(id)arg11 trackEntities:(id)arg12 loaded:(_Bool)arg13 enabled:(_Bool)arg14 explicitContentRestricted:(_Bool)arg15 genrePageContextMenuDisabled:(_Bool)arg16 settingsChangePending:(_Bool)arg17 joinPending:(_Bool)arg18;
- (id)currentLoggingState;

@end
