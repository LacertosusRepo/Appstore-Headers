//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingViewPremiumDefaultInteractionEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTNowPlayingViewPremiumDefaultInteractionEventFactoryImplementation : NSObject <SPTNowPlayingViewPremiumDefaultInteractionEventFactory>
{
    NSArray *_components;
}

+ (id)factory;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (id)bottomBarFactory;
- (id)playbackControlsFactory;
- (id)playbackProgressFactory;
- (id)trackActionsFactory;
- (id)albumArtFactory;
- (id)topBarFactory;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
