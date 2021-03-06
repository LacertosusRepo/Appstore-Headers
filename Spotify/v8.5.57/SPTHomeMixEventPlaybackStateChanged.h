//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTHomeMixEvent.h"

@class SPTPlayerState;

@interface SPTHomeMixEventPlaybackStateChanged : SPTHomeMixEvent
{
    SPTPlayerState *_prevState;
    SPTPlayerState *_nextState;
}

@property(readonly, nonatomic) SPTPlayerState *nextState; // @synthesize nextState=_nextState;
@property(readonly, nonatomic) SPTPlayerState *prevState; // @synthesize prevState=_prevState;
- (void).cxx_destruct;
- (id)initWithPrevState:(id)arg1 nextState:(id)arg2;

@end

