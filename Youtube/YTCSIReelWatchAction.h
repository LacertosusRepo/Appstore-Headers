//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTGELLatencyAction.h"

@class YTMonotonicDate;

@interface YTCSIReelWatchAction : YTGELLatencyAction
{
    YTMonotonicDate *_startDate;
    _Bool _startedOrAbandoned;
}

- (void).cxx_destruct;
- (void)setLastAbandonTime:(double)arg1;
- (double)didAbandon;
- (void)didPlayWithVideoFormat:(id)arg1 cpn:(id)arg2;
- (void)didReceiveReelItemWatchResponseFromCache:(_Bool)arg1;
- (void)reelWatchDidStartWithOperationType:(int)arg1;
- (id)init;

@end

