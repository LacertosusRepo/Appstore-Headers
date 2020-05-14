//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface SCORStreamingConfigurationBuilder : NSObject
{
    struct Builder {
        struct CriticalSection;
        struct streamingConfigurationParams;
    } *_cppBuilder;
    long long _customStartMinimumPlayback;
}

@property(nonatomic) long long customStartMinimumPlayback; // @synthesize customStartMinimumPlayback=_customStartMinimumPlayback;
- (_Bool)autoResumeStateOnAssetChange;
- (void)setAutoResumeStateOnAssetChange:(_Bool)arg1;
@property(copy) NSDictionary *labels;
- (void)setcustomStartMinimumPlayback:(long long)arg1;
@property(nonatomic) long long playbackIntervalMergeTolerance;
@property(nonatomic) _Bool heartbeatMeasurement;
@property(copy) NSArray *heartbeatIntervals;
@property(nonatomic) _Bool keepAliveMeasurement;
@property(nonatomic) long long keepAliveInterval;
@property(nonatomic) long long pauseOnBufferingInterval;
@property(nonatomic) _Bool pauseOnBuffering;
@property(copy) NSArray *includedPublishers;
- (struct Builder *)getCppBuilder;
- (void)setCppBuilder:(struct Builder *)arg1;
- (id)build;
- (void)dealloc;
- (id)init;

@end

