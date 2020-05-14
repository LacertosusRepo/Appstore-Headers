//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIMobileTrackPageFree_ItemEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIMobileTrackPageFree_ItemEventFactoryImplementation : NSObject <SPTUBIMobileTrackPageFree_ItemEventFactory>
{
    NSArray *_components;
}

+ (id)factoryWithIdentifier:(id)arg1 position:(long long)arg2 uri:(id)arg3 components:(id)arg4;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (id)hitShufflePlayWithContextToBePlayed:(id)arg1;
- (id)hitResumeWithItemToBeResumed:(id)arg1;
- (id)hitUiNavigateWithDestination:(id)arg1;
- (id)hitPauseWithItemToBePaused:(id)arg1;
- (id)hitPlayWithItemToBePlayed:(id)arg1;
- (id)impression;
- (id)_location;
- (id)initWithIdentifier:(id)arg1 position:(long long)arg2 uri:(id)arg3 components:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

