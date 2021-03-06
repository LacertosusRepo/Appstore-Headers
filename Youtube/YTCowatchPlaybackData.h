//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, YTCPN, YTCowatchSingleVideoMediaData, YTInnerTubeResponseCacheContext, YTPlayerResponse;

@interface YTCowatchPlaybackData : NSObject
{
    YTPlayerResponse *_playerResponse;
    YTInnerTubeResponseCacheContext *_cacheContext;
    YTCowatchSingleVideoMediaData *_singleVideoMediaData;
}

+ (id)cowatchPlaybackDataWithPlaybackData:(id)arg1;
+ (id)playbackDataWithCPN:(id)arg1 nonYouTubeHostedVideo:(id)arg2;
+ (id)playbackDataWithPlayerResponse:(id)arg1 cacheContext:(id)arg2 CPN:(id)arg3;
+ (id)playbackDataWithPlayerResponse:(id)arg1;
@property(readonly, nonatomic) YTCowatchSingleVideoMediaData *singleVideoMediaData; // @synthesize singleVideoMediaData=_singleVideoMediaData;
@property(readonly, nonatomic) YTInnerTubeResponseCacheContext *cacheContext; // @synthesize cacheContext=_cacheContext;
@property(readonly, nonatomic) YTPlayerResponse *playerResponse; // @synthesize playerResponse=_playerResponse;
- (void).cxx_destruct;
- (id)toPlaybackData;
- (id)parseAndCreateAdIntroPlaybackData;
- (_Bool)hasAdIntro;
- (_Bool)isExpired;
- (_Bool)wantsVideoPlayer;
- (_Bool)isPlayableInBackground;
- (_Bool)needsCPNService;
- (_Bool)isSurvey;
@property(readonly, nonatomic) NSString *videoID;
@property(readonly, nonatomic) YTCPN *CPN;
- (id)initWithPlayerResponse:(id)arg1 cacheContext:(id)arg2 CPN:(id)arg3 nonYouTubeHostedVideo:(id)arg4;

@end

