//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLogCenter;

@interface SPTNowPlayingScrollLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
}

@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logScrollSwipeInteractionWithPlaybackId:(id)arg1;
- (void)logScrollComponentImpressionWithIdentifier:(id)arg1 atIndex:(unsigned long long)arg2 playbackId:(id)arg3;
- (void)logScrollPageImpressionWithPlaybackId:(id)arg1;
- (id)initWithLogCenter:(id)arg1;

@end
