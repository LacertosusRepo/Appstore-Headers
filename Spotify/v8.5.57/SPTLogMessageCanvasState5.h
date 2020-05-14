//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSData, NSString;

@interface SPTLogMessageCanvasState5 : SPTLogMessage
{
    _Bool _isRemoteValue;
    _Bool _dataSaveValue;
    NSData *_playbackIdValue;
    NSString *_canvasIdValue;
    NSString *_entityUriValue;
    double _timestampValue;
    double _trackTimeValue;
    double _trackTotalTimeValue;
    NSString *_visualStateValue;
    NSString *_audioStateValue;
    NSString *_appFocusStateValue;
    NSString *_controlsStateValue;
    NSString *_loadStateValue;
    NSString *_pageSourceValue;
}

+ (id)messageWithPlaybackId:(id)arg1 canvasId:(id)arg2 entityUri:(id)arg3 timestamp:(double)arg4 trackTime:(double)arg5 trackTotalTime:(double)arg6 visualState:(id)arg7 audioState:(id)arg8 appFocusState:(id)arg9 controlsState:(id)arg10 loadState:(id)arg11 pageSource:(id)arg12 isRemote:(_Bool)arg13 dataSave:(_Bool)arg14;
@property(nonatomic) _Bool dataSaveValue; // @synthesize dataSaveValue=_dataSaveValue;
@property(nonatomic) _Bool isRemoteValue; // @synthesize isRemoteValue=_isRemoteValue;
@property(copy, nonatomic) NSString *pageSourceValue; // @synthesize pageSourceValue=_pageSourceValue;
@property(copy, nonatomic) NSString *loadStateValue; // @synthesize loadStateValue=_loadStateValue;
@property(copy, nonatomic) NSString *controlsStateValue; // @synthesize controlsStateValue=_controlsStateValue;
@property(copy, nonatomic) NSString *appFocusStateValue; // @synthesize appFocusStateValue=_appFocusStateValue;
@property(copy, nonatomic) NSString *audioStateValue; // @synthesize audioStateValue=_audioStateValue;
@property(copy, nonatomic) NSString *visualStateValue; // @synthesize visualStateValue=_visualStateValue;
@property(nonatomic) double trackTotalTimeValue; // @synthesize trackTotalTimeValue=_trackTotalTimeValue;
@property(nonatomic) double trackTimeValue; // @synthesize trackTimeValue=_trackTimeValue;
@property(nonatomic) double timestampValue; // @synthesize timestampValue=_timestampValue;
@property(copy, nonatomic) NSString *entityUriValue; // @synthesize entityUriValue=_entityUriValue;
@property(copy, nonatomic) NSString *canvasIdValue; // @synthesize canvasIdValue=_canvasIdValue;
@property(copy, nonatomic) NSData *playbackIdValue; // @synthesize playbackIdValue=_playbackIdValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

