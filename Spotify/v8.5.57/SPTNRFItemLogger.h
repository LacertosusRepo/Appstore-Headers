//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTNRFItem;
@protocol SPTLogCenter;

@interface SPTNRFItemLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
    SPTNRFItem *_feedItem;
    long long _index;
}

@property(readonly, nonatomic) long long index; // @synthesize index=_index;
@property(readonly, nonatomic) SPTNRFItem *feedItem; // @synthesize feedItem=_feedItem;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logInteractionWithInteractionType:(id)arg1 userIntent:(id)arg2;
- (void)logUserPausedPlaybackInteraction;
- (void)logUserStartedPlaybackInteraction;
- (void)logUserSelectedContentInteraction;
- (void)logUserSelectedContextMenu;
- (void)logUserSelectedArtistInteraction;
- (void)logImpressionWithImpressionType:(id)arg1;
- (void)logItemDisappeared;
- (void)logItemAppeared;
- (id)initWithLogCenter:(id)arg1 feedItem:(id)arg2 index:(long long)arg3;

@end

