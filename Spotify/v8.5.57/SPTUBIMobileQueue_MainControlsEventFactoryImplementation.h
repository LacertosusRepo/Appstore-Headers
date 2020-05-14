//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIMobileQueue_MainControlsEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIMobileQueue_MainControlsEventFactoryImplementation : NSObject <SPTUBIMobileQueue_MainControlsEventFactory>
{
    NSArray *_components;
}

+ (id)factoryWithComponents:(id)arg1;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (id)sleepTimerButtonFactory;
- (id)seekForwardButtonFactory;
- (id)seekBackwardButtonFactory;
- (id)playbackSpeedButtonFactory;
- (id)banButtonFactory;
- (id)heartButtonFactory;
- (id)repeatModeButtonFactory;
- (id)skipNextButtonFactory;
- (id)playButtonFactory;
- (id)skipPreviousButtonFactory;
- (id)shuffleModeButtonFactory;
- (id)_location;
- (id)initWithComponents:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

