//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInAppMessageAction-Protocol.h"

@class NSString, NSURL;
@protocol SPTOnDemandSet, SPTPlayer;

@interface SPTInAppMessageStartPlaybackAction : NSObject <SPTInAppMessageAction>
{
    NSURL *_entityURI;
    id <SPTPlayer> _player;
    id <SPTOnDemandSet> _onDemandSet;
}

@property(retain, nonatomic) id <SPTOnDemandSet> onDemandSet; // @synthesize onDemandSet=_onDemandSet;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) NSURL *entityURI; // @synthesize entityURI=_entityURI;
- (void).cxx_destruct;
- (_Bool)isValidURL;
- (void)perform;
- (id)initWithEntityURI:(id)arg1 player:(id)arg2 onDemandSet:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
