//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMFraction, NSArray, NSString;

@interface IMPlaybackInitRequest : NSObject
{
    _Bool forceDeinterlacing;
    _Bool encrypted;
    _Bool allowSurroundSound;
    _Bool _allowSoftSubtitles;
    NSString *itemId;
    NSArray *videoProfiles;
    NSArray *mainAudioProfiles;
    NSArray *alternativeAudioProfiles;
    NSArray *keepPlaybackIds;
    NSString *videoStreamName;
    NSString *audioStreamName;
    NSString *subtitleReference;
    double audioGain;
    double subtitleOffset;
    double subtitleScaleAdjustment;
    NSString *subtitleColor;
    double audioOffset;
    IMFraction *pixelAspectRatioOverride;
    NSString *externalSubtitlesEncoding;
}

+ (id)deJSONize:(id)arg1;
+ (id)requestForItem:(id)arg1;
@property(nonatomic) _Bool allowSoftSubtitles; // @synthesize allowSoftSubtitles=_allowSoftSubtitles;
@property(nonatomic) _Bool allowSurroundSound; // @synthesize allowSurroundSound;
@property(nonatomic) _Bool encrypted; // @synthesize encrypted;
@property(nonatomic) _Bool forceDeinterlacing; // @synthesize forceDeinterlacing;
@property(retain, nonatomic) NSString *externalSubtitlesEncoding; // @synthesize externalSubtitlesEncoding;
@property(retain, nonatomic) IMFraction *pixelAspectRatioOverride; // @synthesize pixelAspectRatioOverride;
@property(nonatomic) double audioOffset; // @synthesize audioOffset;
@property(retain, nonatomic) NSString *subtitleColor; // @synthesize subtitleColor;
@property(nonatomic) double subtitleScaleAdjustment; // @synthesize subtitleScaleAdjustment;
@property(nonatomic) double subtitleOffset; // @synthesize subtitleOffset;
@property(nonatomic) double audioGain; // @synthesize audioGain;
@property(retain, nonatomic) NSString *subtitleReference; // @synthesize subtitleReference;
@property(retain, nonatomic) NSString *audioStreamName; // @synthesize audioStreamName;
@property(retain, nonatomic) NSString *videoStreamName; // @synthesize videoStreamName;
@property(retain, nonatomic) NSArray *keepPlaybackIds; // @synthesize keepPlaybackIds;
@property(retain, nonatomic) NSArray *alternativeAudioProfiles; // @synthesize alternativeAudioProfiles;
@property(retain, nonatomic) NSArray *mainAudioProfiles; // @synthesize mainAudioProfiles;
@property(retain, nonatomic) NSArray *videoProfiles; // @synthesize videoProfiles;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId;
- (void).cxx_destruct;
- (id)JSONize;

@end

