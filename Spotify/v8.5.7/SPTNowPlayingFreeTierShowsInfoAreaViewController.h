//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTNowPlayingFreeTierInfoAreaViewController.h"

#import "SPTNowPlayingContainerIdleMonitorObserver-Protocol.h"

@class NSString;

@interface SPTNowPlayingFreeTierShowsInfoAreaViewController : SPTNowPlayingFreeTierInfoAreaViewController <SPTNowPlayingContainerIdleMonitorObserver>
{
}

- (void)idlePeriodDidEnd;
- (void)idlePeriodDidBegin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
