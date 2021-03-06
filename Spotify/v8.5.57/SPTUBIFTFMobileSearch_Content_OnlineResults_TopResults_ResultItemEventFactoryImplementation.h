//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIFTFMobileSearch_Content_OnlineResults_TopResults_ResultItemEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIFTFMobileSearch_Content_OnlineResults_TopResults_ResultItemEventFactoryImplementation : NSObject <SPTUBIFTFMobileSearch_Content_OnlineResults_TopResults_ResultItemEventFactory>
{
    NSArray *_components;
}

+ (id)factoryWithPosition:(long long)arg1 uri:(id)arg2 components:(id)arg3;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (id)swipeAddItemToQueueWithItemToAddToQueue:(id)arg1;
- (id)swipeLikeWithItemToBeLiked:(id)arg1;
- (id)hitUiReveal;
- (id)hitPlayWithItemToBePlayed:(id)arg1;
- (id)hitUiNavigateWithDestination:(id)arg1;
- (id)impression;
- (id)_location;
- (id)initWithPosition:(long long)arg1 uri:(id)arg2 components:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

