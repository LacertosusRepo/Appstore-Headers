//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol BMPlayOptions, BMPlaybackRequest;

@interface SPTVideoStartCommand : NSObject
{
    _Bool _deferPlayback;
    id <BMPlaybackRequest> _request;
    id <BMPlayOptions> _options;
    NSString *_playbackID;
    double _maxAllowedStallTimeout;
}

@property(readonly, nonatomic) double maxAllowedStallTimeout; // @synthesize maxAllowedStallTimeout=_maxAllowedStallTimeout;
@property(readonly, nonatomic) _Bool deferPlayback; // @synthesize deferPlayback=_deferPlayback;
@property(readonly, nonatomic) NSString *playbackID; // @synthesize playbackID=_playbackID;
@property(readonly, nonatomic) id <BMPlayOptions> options; // @synthesize options=_options;
@property(readonly, nonatomic) id <BMPlaybackRequest> request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)initWithRequest:(id)arg1 options:(id)arg2 playbackID:(id)arg3 deferPlayback:(_Bool)arg4 maxAllowedStallTimeout:(double)arg5;

@end
