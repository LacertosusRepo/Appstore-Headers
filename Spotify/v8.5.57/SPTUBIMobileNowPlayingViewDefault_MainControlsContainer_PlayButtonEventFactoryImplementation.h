//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIMobileNowPlayingViewDefault_MainControlsContainer_PlayButtonEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIMobileNowPlayingViewDefault_MainControlsContainer_PlayButtonEventFactoryImplementation : NSObject <SPTUBIMobileNowPlayingViewDefault_MainControlsContainer_PlayButtonEventFactory>
{
    NSArray *_components;
}

+ (id)factoryWithComponents:(id)arg1;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (id)hitResumeWithItemToBeResumed:(id)arg1;
- (id)hitPauseWithItemToBePaused:(id)arg1;
- (id)_location;
- (id)initWithComponents:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

