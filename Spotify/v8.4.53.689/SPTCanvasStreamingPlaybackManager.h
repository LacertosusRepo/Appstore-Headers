//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@interface SPTCanvasStreamingPlaybackManager : NSObject
{
    id <SPTCanvasStreamingPlaybackManagerLoadDelegate> _loadDelegate;
    id <SPTVideoPlaybackRequestFactory> _videoPlaybackRequestFactory;
    id <SPTVideoPlayer> _videoPlayer;
    id <SPTVideoURLAssetLoader> _videoManager;
    NSURL *_entityURI;
    NSURL *_assetURL;
    long long _playbackOption;
}

@property(nonatomic) long long playbackOption; // @synthesize playbackOption=_playbackOption;
@property(retain, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(retain, nonatomic) NSURL *entityURI; // @synthesize entityURI=_entityURI;
@property(readonly, nonatomic) id <SPTVideoURLAssetLoader> videoManager; // @synthesize videoManager=_videoManager;
@property(readonly, nonatomic) id <SPTVideoPlayer> videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(readonly, nonatomic) id <SPTVideoPlaybackRequestFactory> videoPlaybackRequestFactory; // @synthesize videoPlaybackRequestFactory=_videoPlaybackRequestFactory;
@property(nonatomic) __weak id <SPTCanvasStreamingPlaybackManagerLoadDelegate> loadDelegate; // @synthesize loadDelegate=_loadDelegate;
- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (_Bool)shouldRepeatVideo:(long long)arg1;
- (void)setAssetURL:(id)arg1 assetDuration:(double)arg2 entityURI:(id)arg3 playbackOption:(long long)arg4;
- (void)setManifestID:(id)arg1 entityURI:(id)arg2 playbackOption:(long long)arg3;
- (id)requestForEntityURI:(id)arg1 playbackOption:(long long)arg2;
- (void)didLoadAsset:(id)arg1 assetURL:(id)arg2 entityURI:(id)arg3 playbackOption:(long long)arg4;
- (void)loadAssetURL:(id)arg1 entityURI:(id)arg2 playbackOption:(long long)arg3;
- (id)initWithVideoPlayer:(id)arg1 videoManager:(id)arg2 videoPlaybackRequestFactory:(id)arg3;

@end

