//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBCommandHandler-Protocol.h"

@protocol SPTAssistedCurationAddTrackHandler;

@interface SPTAssistedCurationAddTrackCommandHandler : NSObject <HUBCommandHandler>
{
    id <SPTAssistedCurationAddTrackHandler> _addTrackHandler;
}

@property(readonly, nonatomic) id <SPTAssistedCurationAddTrackHandler> addTrackHandler; // @synthesize addTrackHandler=_addTrackHandler;
- (void).cxx_destruct;
- (void)handleCommand:(id)arg1 event:(id)arg2;
- (id)initWithAddTrackHandler:(id)arg1;

@end
