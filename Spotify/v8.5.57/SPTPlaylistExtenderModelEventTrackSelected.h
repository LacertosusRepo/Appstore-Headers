//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlaylistExtenderModelEvent-Protocol.h"

@class NSString;

@interface SPTPlaylistExtenderModelEventTrackSelected : NSObject <SPTPlaylistExtenderModelEvent>
{
    unsigned long long _trackIndex;
}

@property(readonly, nonatomic) unsigned long long trackIndex; // @synthesize trackIndex=_trackIndex;
- (void)processWithState:(id)arg1 loop:(id)arg2;
- (id)initWithTrackIndex:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

