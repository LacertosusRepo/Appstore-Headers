//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTPlayerQueue.h"

@class NSString;

@interface SPTCosmosPlayerQueue : NSObject <SPTPlayerQueue>
{
    id <SPTPlayer> _player;
}

@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
- (void).cxx_destruct;
- (id)queueMultipleTracks:(id)arg1;
- (id)queueTrack:(id)arg1;
- (id)queueTracksInternal:(id)arg1;
- (id)fetchQueueInternal;
- (id)fetchQueue;
- (id)initWithPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

