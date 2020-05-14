//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIMobileStorylines_CardEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIMobileStorylines_CardEventFactoryImplementation : NSObject <SPTUBIMobileStorylines_CardEventFactory>
{
    NSArray *_components;
}

+ (id)factoryWithPosition:(long long)arg1 components:(id)arg2;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (id)longHitPauseWithItemToBePaused:(id)arg1;
- (id)impression;
- (id)gotoNextCardButtonFactory;
- (id)gotoPreviousCardButtonFactory;
- (id)_location;
- (id)initWithPosition:(long long)arg1 components:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
