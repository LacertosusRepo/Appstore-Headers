//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTResponderEvent.h"

@class YTWatchTransition;

@interface YTTimingWatchResponderEvent : YTResponderEvent
{
    int _type;
    YTWatchTransition *_watchTransition;
}

+ (id)eventWithType:(int)arg1 watchTransition:(id)arg2 firstResponder:(id)arg3;
@property(readonly, nonatomic) YTWatchTransition *watchTransition; // @synthesize watchTransition=_watchTransition;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(int)arg1 watchTransition:(id)arg2 firstResponder:(id)arg3;

@end
