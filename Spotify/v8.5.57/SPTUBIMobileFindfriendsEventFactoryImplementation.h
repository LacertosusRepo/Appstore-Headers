//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIMobileFindfriendsEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIMobileFindfriendsEventFactoryImplementation : NSObject <SPTUBIMobileFindfriendsEventFactory>
{
    NSArray *_components;
}

+ (id)factory;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (id)userListFactory;
- (id)followAllButtonFactory;
- (id)connectToFacebookButtonFactory;
- (id)filterTextFactory;
- (id)_location;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

