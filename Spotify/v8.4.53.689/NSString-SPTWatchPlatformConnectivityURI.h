//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (SPTWatchPlatformConnectivityURI)
+ (id)spt_pauseURI;
+ (id)spt_playURI;
+ (id)spt_skipPreviousURI;
+ (id)spt_skipNextURI;
+ (id)spt_currentlyPlayingURI;
+ (id)spt_collectionRemoveURI;
+ (id)spt_collectionAddURI;
+ (id)spt_collectionItemStateURI;
+ (id)spt_pingURI;
@property(readonly, nonatomic, getter=spt_isPauseURI) _Bool isPauseURI;
@property(readonly, nonatomic, getter=spt_isPlayURI) _Bool isPlayURI;
@property(readonly, nonatomic, getter=spt_isSkipPreviousURI) _Bool isSkipPreviousURI;
@property(readonly, nonatomic, getter=spt_isSkipNextURI) _Bool isSkipNextURI;
@property(readonly, nonatomic, getter=spt_isCurrentlyPlayingURI) _Bool isCurrentlyPlayingURI;
@property(readonly, nonatomic, getter=spt_isCollectionRemoveURI) _Bool isCollectionRemoveURI;
@property(readonly, nonatomic, getter=spt_isCollectionAddURI) _Bool isCollectionAddURI;
@property(readonly, nonatomic, getter=spt_isCollectionItemStateURI) _Bool isCollectionItemStateURI;
@property(readonly, nonatomic, getter=spt_isPingURI) _Bool isPingURI;
@end

