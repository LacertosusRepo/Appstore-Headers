//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageQueueTrackPlay1 : SPTLogMessage
{
    NSString *_contextUriValue;
    NSString *_currentTrackUriValue;
    NSString *_targetTrackUriValue;
    long long _trackSectionBeforeValue;
    long long _trackPositionBeforeValue;
}

+ (id)messageWithContextUri:(id)arg1 currentTrackUri:(id)arg2 targetTrackUri:(id)arg3 trackSectionBefore:(long long)arg4 trackPositionBefore:(long long)arg5;
@property(nonatomic) long long trackPositionBeforeValue; // @synthesize trackPositionBeforeValue=_trackPositionBeforeValue;
@property(nonatomic) long long trackSectionBeforeValue; // @synthesize trackSectionBeforeValue=_trackSectionBeforeValue;
@property(retain, nonatomic) NSString *targetTrackUriValue; // @synthesize targetTrackUriValue=_targetTrackUriValue;
@property(retain, nonatomic) NSString *currentTrackUriValue; // @synthesize currentTrackUriValue=_currentTrackUriValue;
@property(retain, nonatomic) NSString *contextUriValue; // @synthesize contextUriValue=_contextUriValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

