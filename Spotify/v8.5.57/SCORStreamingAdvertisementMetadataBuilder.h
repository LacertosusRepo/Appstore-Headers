//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCORStreamingBaseAdvertisementMetadataBuilder-Protocol.h"

@interface SCORStreamingAdvertisementMetadataBuilder : NSObject <SCORStreamingBaseAdvertisementMetadataBuilder>
{
    struct unique_ptr<ComScore::AdvertisementMetadata::Builder, std::__1::default_delete<ComScore::AdvertisementMetadata::Builder>> _advertisememtMetadata;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setOwner:(long long)arg1;
- (void)setDeliveryType:(long long)arg1;
- (void)setSiteId:(id)arg1;
- (void)setPlacementId:(id)arg1;
- (void)setServerCampaignId:(id)arg1;
- (void)setCallToActionUrl:(id)arg1;
- (void)setServer:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUniqueId:(id)arg1;
- (void)setTotalInBreak:(long long)arg1;
- (void)setNumberInBreak:(long long)arg1;
- (void)setTotalBreaks:(long long)arg1;
- (void)setBreakNumber:(long long)arg1;
- (void)setClipUrl:(id)arg1;
- (void)setFee:(long long)arg1;
- (void)setLength:(long long)arg1;
- (void)setVideoDimensionWidth:(long long)arg1 height:(long long)arg2;
- (void)classifyAsAudioStream:(_Bool)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setRelatedContentMetadata:(id)arg1;
- (void)setCustomLabels:(id)arg1;
- (void)setStack:(id)arg1 forPublisher:(id)arg2;
- (id)build;
- (id)init;

@end
