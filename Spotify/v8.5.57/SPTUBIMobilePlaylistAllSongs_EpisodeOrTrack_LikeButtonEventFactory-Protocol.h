//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventFactoryLocation, SPTUBIInteractionEvent;

@protocol SPTUBIMobilePlaylistAllSongs_EpisodeOrTrack_LikeButtonEventFactory <NSObject>
- (id <SPTUBIInteractionEvent>)hitRemoveLikeWithItemNoLongerLiked:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)hitLikeWithItemToBeLiked:(NSURL *)arg1;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

