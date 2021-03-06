//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
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
@property(retain, nonatomic) NSString *pageSourceValue; // @synthesize pageSourceValue=_pageSourceValue;
@property(retain, nonatomic) NSString *loadStateValue; // @synthesize loadStateValue=_loadStateValue;
@property(retain, nonatomic) NSString *controlsStateValue; // @synthesize controlsStateValue=_controlsStateValue;
@property(retain, nonatomic) NSString *appFocusStateValue; // @synthesize appFocusStateValue=_appFocusStateValue;
@property(retain, nonatomic) NSString *audioStateValue; // @synthesize audioStateValue=_audioStateValue;
@property(retain, nonatomic) NSString *visualStateValue; // @synthesize visualStateValue=_visualStateValue;
@property(nonatomic) double trackTotalTimeValue; // @synthesize trackTotalTimeValue=_trackTotalTimeValue;
@property(nonatomic) double trackTimeValue; // @synthesize trackTimeValue=_trackTimeValue;
@property(nonatomic) double timestampValue; // @synthesize timestampValue=_timestampValue;
@property(retain, nonatomic) NSString *entityUriValue; // @synthesize entityUriValue=_entityUriValue;
@property(retain, nonatomic) NSString *canvasIdValue; // @synthesize canvasIdValue=_canvasIdValue;
@property(retain, nonatomic) NSData *playbackIdValue; // @synthesize playbackIdValue=_playbackIdValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

