//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MLVideo, YTCPN, YTCowatchPlayerResponseMediaData;

@interface YTCowatchSingleVideoMediaData : NSObject
{
    YTCPN *_CPN;
    MLVideo *_video;
    YTCowatchPlayerResponseMediaData *_playerMediaData;
}

@property(readonly, nonatomic) YTCowatchPlayerResponseMediaData *playerMediaData; // @synthesize playerMediaData=_playerMediaData;
@property(readonly, nonatomic) MLVideo *video; // @synthesize video=_video;
@property(readonly, nonatomic) YTCPN *CPN; // @synthesize CPN=_CPN;
- (void).cxx_destruct;
- (_Bool)isYouTubeHostedVideo;
@property(readonly, nonatomic) _Bool needsCPNService;
@property(readonly, nonatomic) _Bool isPlayableInBackground;
- (id)initWithPlayerMediaData:(id)arg1 CPN:(id)arg2 responseDate:(id)arg3 nonYouTubeHostedVideo:(id)arg4;
- (id)initWithCPN:(id)arg1 nonYouTubeHostedVideo:(id)arg2;
- (id)initWithPlayerMediaData:(id)arg1 CPN:(id)arg2 responseDate:(id)arg3;

@end

