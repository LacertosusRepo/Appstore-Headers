//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;
@protocol GLUETheme, SPContextMenuFeature, SPTCollectionPlatform, SPTEpisode, SPTPodcastTestManager;

@interface SPTShowsFormatVideoContextMenuComponents : NSObject
{
    _Bool _shuffleEnabled;
    id <SPTEpisode> _episode;
    id <GLUETheme> _theme;
    id <SPContextMenuFeature> _contextMenuFeature;
    NSURL *_sourceURL;
    NSURL *_URI;
    NSString *_logContext;
    NSDictionary *_episodeMetadata;
    long long _displayContext;
    id <SPTPodcastTestManager> _podcastTestManager;
    id <SPTCollectionPlatform> _collectionPlatform;
}

@property(nonatomic) __weak id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(nonatomic) __weak id <SPTPodcastTestManager> podcastTestManager; // @synthesize podcastTestManager=_podcastTestManager;
@property(readonly, nonatomic) _Bool shuffleEnabled; // @synthesize shuffleEnabled=_shuffleEnabled;
@property(readonly, nonatomic) long long displayContext; // @synthesize displayContext=_displayContext;
@property(readonly, nonatomic) NSDictionary *episodeMetadata; // @synthesize episodeMetadata=_episodeMetadata;
@property(readonly, nonatomic) NSString *logContext; // @synthesize logContext=_logContext;
@property(readonly, nonatomic) NSURL *URI; // @synthesize URI=_URI;
@property(readonly, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(readonly, nonatomic) id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTEpisode> episode; // @synthesize episode=_episode;
- (void).cxx_destruct;
- (id)provideGoToArtistActionTaskForTrackURL:(id)arg1 logContext:(id)arg2;
- (id)provideGoToAlbumActionTaskForTrackURL:(id)arg1 logContext:(id)arg2;
- (id)provideAddToPlaylistActionForTrackURL:(id)arg1 sourceURL:(id)arg2 logContext:(id)arg3 contextSourceURL:(id)arg4;
- (id)secondaryLinkedAudioActions;
- (id)primaryLinkedAudioActions;
- (id)options;
- (id)subtitleContextMenuAction;
- (id)queueAction;
- (id)shareAction;
- (id)contextMenuActions;
- (id)header;
- (id)initWithURI:(id)arg1 episode:(id)arg2 episodeMetadata:(id)arg3 sourceURL:(id)arg4 displayContext:(long long)arg5 theme:(id)arg6 contextMenuFeature:(id)arg7 logContext:(id)arg8 shuffleEnabled:(_Bool)arg9 podcastTestManager:(id)arg10 collectionPlatform:(id)arg11;

@end

