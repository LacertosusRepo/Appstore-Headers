//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface SPTPlayerItemErrorLogEventFilter : NSObject
{
    NSDate *_lastEvaluatedDate;
}

@property(retain, nonatomic) NSDate *lastEvaluatedDate; // @synthesize lastEvaluatedDate=_lastEvaluatedDate;
- (void).cxx_destruct;
- (id)filterEvaluatedPlayerItemErrorLogEvents:(id)arg1 withEvaluationBlock:(CDUnknownBlockType)arg2;

@end

