//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageAdFeedbackEvent2 : SPTLogMessage
{
    NSString *_lineItemIdValue;
    NSString *_creativeIdValue;
    NSString *_adPlaybackIdValue;
    NSString *_adIdValue;
    NSString *_advertiserValue;
    NSString *_titleValue;
    double _volumeValue;
    long long _progressValue;
    NSString *_formatValue;
    NSString *_imageUrlValue;
    NSString *_mediaFilesValue;
    NSString *_eventValue;
}

+ (id)messageWithLineItemId:(id)arg1 creativeId:(id)arg2 adPlaybackId:(id)arg3 adId:(id)arg4 advertiser:(id)arg5 title:(id)arg6 volume:(double)arg7 progress:(long long)arg8 format:(id)arg9 imageUrl:(id)arg10 mediaFiles:(id)arg11 event:(id)arg12;
@property(copy, nonatomic) NSString *eventValue; // @synthesize eventValue=_eventValue;
@property(copy, nonatomic) NSString *mediaFilesValue; // @synthesize mediaFilesValue=_mediaFilesValue;
@property(copy, nonatomic) NSString *imageUrlValue; // @synthesize imageUrlValue=_imageUrlValue;
@property(copy, nonatomic) NSString *formatValue; // @synthesize formatValue=_formatValue;
@property(nonatomic) long long progressValue; // @synthesize progressValue=_progressValue;
@property(nonatomic) double volumeValue; // @synthesize volumeValue=_volumeValue;
@property(copy, nonatomic) NSString *titleValue; // @synthesize titleValue=_titleValue;
@property(copy, nonatomic) NSString *advertiserValue; // @synthesize advertiserValue=_advertiserValue;
@property(copy, nonatomic) NSString *adIdValue; // @synthesize adIdValue=_adIdValue;
@property(copy, nonatomic) NSString *adPlaybackIdValue; // @synthesize adPlaybackIdValue=_adPlaybackIdValue;
@property(copy, nonatomic) NSString *creativeIdValue; // @synthesize creativeIdValue=_creativeIdValue;
@property(copy, nonatomic) NSString *lineItemIdValue; // @synthesize lineItemIdValue=_lineItemIdValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

