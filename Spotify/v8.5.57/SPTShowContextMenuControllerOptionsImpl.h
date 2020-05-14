//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTShowContextMenuControllerOptions-Protocol.h"

@class NSString;

@interface SPTShowContextMenuControllerOptionsImpl : NSObject <SPTShowContextMenuControllerOptions>
{
    _Bool _showClosedCaptionsMenu;
    _Bool _showSleepTimer;
    _Bool _showMarkedAsPlayedUnplayed;
    double _currentEpisodeTimestamp;
}

@property(nonatomic) _Bool showMarkedAsPlayedUnplayed; // @synthesize showMarkedAsPlayedUnplayed=_showMarkedAsPlayedUnplayed;
@property(nonatomic) double currentEpisodeTimestamp; // @synthesize currentEpisodeTimestamp=_currentEpisodeTimestamp;
@property(nonatomic) _Bool showSleepTimer; // @synthesize showSleepTimer=_showSleepTimer;
@property(nonatomic) _Bool showClosedCaptionsMenu; // @synthesize showClosedCaptionsMenu=_showClosedCaptionsMenu;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

