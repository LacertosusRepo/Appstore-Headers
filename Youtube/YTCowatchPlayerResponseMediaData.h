//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MLInnerTubePlayerConfigDataSource.h"

@class NSString, YTICaptionsSupportedRenderers, YTIHeartbeatParams, YTIOfflineState, YTIPlayabilityStatus, YTIPlayerConfig, YTIPlayerResponse, YTIRenderer, YTIStreamingData, YTIVideoDetails;

@interface YTCowatchPlayerResponseMediaData : NSObject <MLInnerTubePlayerConfigDataSource>
{
    YTIPlayerResponse *_partialPlayerResponse;
}

+ (_Bool)playerResponseHasAllRequiredMediaFields:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) YTIPlayerConfig *playerConfig;
@property(readonly, nonatomic) _Bool hasPlayerConfig;
@property(readonly, nonatomic) YTIOfflineState *offlineState;
@property(readonly, nonatomic) _Bool hasOfflineState;
@property(readonly, nonatomic) YTIHeartbeatParams *heartbeatParams;
@property(readonly, nonatomic) _Bool hasHeartbeatParams;
@property(readonly, nonatomic) YTIPlayabilityStatus *playabilityStatus;
@property(readonly, nonatomic) _Bool hasPlayabilityStatus;
@property(readonly, nonatomic) YTIVideoDetails *videoDetails;
@property(readonly, nonatomic) _Bool hasVideoDetails;
@property(readonly, nonatomic) YTICaptionsSupportedRenderers *captions;
@property(readonly, nonatomic) _Bool hasCaptions;
@property(readonly, nonatomic) YTIRenderer *threed;
@property(readonly, nonatomic) _Bool hasThreed;
@property(readonly, nonatomic) YTIStreamingData *streamingData;
@property(readonly, nonatomic) _Bool hasStreamingData;
- (id)initWithPartialPlayerResponse:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
