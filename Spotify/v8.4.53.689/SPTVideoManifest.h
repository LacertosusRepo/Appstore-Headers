//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSString, SPTVideoManifestProfile;

@interface SPTVideoManifest : NSObject
{
    _Bool _isAiring;
    NSArray *_profiles;
    SPTVideoManifestProfile *_profileForBackgrounding;
    unsigned long long _segmentLength;
    double _startTime;
    double _endTime;
    double _duration;
    NSArray *_baseURLs;
    NSArray *_subtitleBaseURLs;
    NSString *_segmentTemplate;
    NSString *_subtitleTemplate;
    NSArray *_subtitles;
    NSMutableDictionary *_profileLookup;
}

+ (id)errorWithCode:(long long)arg1 underlyingError:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *profileLookup; // @synthesize profileLookup=_profileLookup;
@property(readonly, nonatomic) NSArray *subtitles; // @synthesize subtitles=_subtitles;
@property(readonly, nonatomic) NSString *subtitleTemplate; // @synthesize subtitleTemplate=_subtitleTemplate;
@property(readonly, nonatomic) NSString *segmentTemplate; // @synthesize segmentTemplate=_segmentTemplate;
@property(readonly, nonatomic) NSArray *subtitleBaseURLs; // @synthesize subtitleBaseURLs=_subtitleBaseURLs;
@property(readonly, nonatomic) NSArray *baseURLs; // @synthesize baseURLs=_baseURLs;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) unsigned long long segmentLength; // @synthesize segmentLength=_segmentLength;
@property(readonly, nonatomic) _Bool isAiring; // @synthesize isAiring=_isAiring;
@property(readonly, nonatomic) SPTVideoManifestProfile *profileForBackgrounding; // @synthesize profileForBackgrounding=_profileForBackgrounding;
@property(readonly, nonatomic) NSArray *profiles; // @synthesize profiles=_profiles;
- (void).cxx_destruct;
- (id)sanitizeBaseURL:(id)arg1;
- (id)sanitizeTemplateString:(id)arg1;
- (id)profileWithID:(unsigned long long)arg1;
- (id)initWithJSONData:(id)arg1 error:(id *)arg2;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end
