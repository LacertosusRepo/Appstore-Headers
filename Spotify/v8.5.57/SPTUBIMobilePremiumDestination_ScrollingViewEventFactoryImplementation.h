//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIMobilePremiumDestination_ScrollingViewEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIMobilePremiumDestination_ScrollingViewEventFactoryImplementation : NSObject <SPTUBIMobilePremiumDestination_ScrollingViewEventFactory>
{
    NSArray *_components;
}

+ (id)factoryWithPosition:(long long)arg1 components:(id)arg2;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (id)impression;
- (id)hubsComponentFactoryWithIdentifier:(id)arg1 position:(long long)arg2 uri:(id)arg3;
- (id)_location;
- (id)initWithPosition:(long long)arg1 components:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

