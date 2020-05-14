//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIMobileYourLibraryLikedSongs_ItemList_ItemEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIMobileYourLibraryLikedSongs_ItemList_ItemEventFactoryImplementation : NSObject <SPTUBIMobileYourLibraryLikedSongs_ItemList_ItemEventFactory>
{
    NSArray *_components;
}

+ (id)factoryWithPosition:(long long)arg1 uri:(id)arg2 reason:(id)arg3 components:(id)arg4;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (id)swipeRemoveLikeWithItemNoLongerLiked:(id)arg1;
- (id)swipeAddItemToQueueWithItemToAddToQueue:(id)arg1;
- (id)swipeLikeWithItemToBeLiked:(id)arg1;
- (id)longHitUiReveal;
- (id)hitPlayWithItemToBePlayed:(id)arg1;
- (id)heartButtonFactory;
- (id)contextMenuButtonFactory;
- (id)_location;
- (id)initWithPosition:(long long)arg1 uri:(id)arg2 reason:(id)arg3 components:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

