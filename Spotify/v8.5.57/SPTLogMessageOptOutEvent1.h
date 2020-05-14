//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageOptOutEvent1 : SPTLogMessage
{
    NSString *_eventValue;
    NSString *_reasonValue;
    NSString *_artistValue;
    NSString *_lineitemIdValue;
}

+ (id)messageWithEvent:(id)arg1 reason:(id)arg2 artist:(id)arg3 lineitemId:(id)arg4;
@property(copy, nonatomic) NSString *lineitemIdValue; // @synthesize lineitemIdValue=_lineitemIdValue;
@property(copy, nonatomic) NSString *artistValue; // @synthesize artistValue=_artistValue;
@property(copy, nonatomic) NSString *reasonValue; // @synthesize reasonValue=_reasonValue;
@property(copy, nonatomic) NSString *eventValue; // @synthesize eventValue=_eventValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end
