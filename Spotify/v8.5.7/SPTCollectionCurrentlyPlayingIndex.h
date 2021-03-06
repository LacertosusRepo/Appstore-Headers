//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlayerObserver-Protocol.h"

@class NSString, NSURL;

@interface SPTCollectionCurrentlyPlayingIndex : NSObject <SPTPlayerObserver>
{
    unsigned long long _currentlyPlayingTrackIndex;
    NSURL *_currentlyPlayingURL;
}

@property(retain, nonatomic) NSURL *currentlyPlayingURL; // @synthesize currentlyPlayingURL=_currentlyPlayingURL;
@property(nonatomic) unsigned long long currentlyPlayingTrackIndex; // @synthesize currentlyPlayingTrackIndex=_currentlyPlayingTrackIndex;
- (void).cxx_destruct;
- (void)gotNewPlayerState:(id)arg1 tracks:(id)arg2 contextPredicate:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

