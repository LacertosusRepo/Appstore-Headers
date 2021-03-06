//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageFeedback1 : SPTLogMessage
{
    NSString *_trackUriValue;
    NSString *_contextUriValue;
    NSString *_viewUriValue;
    NSString *_typeValue;
    NSString *_actionValue;
}

+ (id)messageWithTrackUri:(id)arg1 contextUri:(id)arg2 viewUri:(id)arg3 type:(id)arg4 action:(id)arg5;
@property(retain, nonatomic) NSString *actionValue; // @synthesize actionValue=_actionValue;
@property(retain, nonatomic) NSString *typeValue; // @synthesize typeValue=_typeValue;
@property(retain, nonatomic) NSString *viewUriValue; // @synthesize viewUriValue=_viewUriValue;
@property(retain, nonatomic) NSString *contextUriValue; // @synthesize contextUriValue=_contextUriValue;
@property(retain, nonatomic) NSString *trackUriValue; // @synthesize trackUriValue=_trackUriValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

